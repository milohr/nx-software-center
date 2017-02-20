#include "snapdhelper.h"

#include <QSettings>
#include <QThread>
#include <QLocalSocket>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QTimer>
#include <QFile>
#include <QTextStream>
#include <QProcess>

#include <KAuthHelperSupport>
#include <QDebug>

#include <Snapd/Client>
#include <Snapd/Request>


using namespace KAuth;

SnapdHelper::SnapdHelper(QObject *parent) : QObject(parent), m_qsnapdClient(parent)
{
    auto request = m_qsnapdClient.connect();
    request->runSync();
    qDebug() << "Connecting to snapd, errors: " << request->errorString();
    request->deleteLater();
}

ActionReply SnapdHelper::remove(QVariantMap args)
{
    QString snap = args["snap"].toString();
    ActionReply reply;

    auto request = m_qsnapdClient.remove(snap);

    // Check for cancel requests
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [timer, request]() {
        if (HelperSupport::isStopped()) {
            qDebug() << "Stop request recived";
            request->cancel();
            timer->deleteLater();
        }
    });

    timer->start(200);

    request->runSync();
    if (request->error() != QSnapdRequest::NoError) {
        reply.setErrorCode( ActionReply::BackendError );
        reply.setErrorDescription(request->errorString());
    }

    request->deleteLater();
    return reply;
}

ActionReply SnapdHelper::install(QVariantMap args)
{
    HelperSupport::progressStep(QVariantMap());

    QString snap = args["snap"].toString();
    QString channel = args.value("channel").toString();

    ActionReply reply;

    auto request = m_qsnapdClient.install(snap, channel);

    // Check for cancel requests
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [timer, request]() {
        if (HelperSupport::isStopped()) {
            qDebug() << "Stop request recived";
            request->cancel();
            timer->deleteLater();
        }
    });
    timer->start(200);

    request->runSync();
    if (request->error() != QSnapdRequest::NoError) {
        reply.setErrorCode( ActionReply::BackendError );
        reply.setErrorDescription(request->errorString());
    }

    request->deleteLater();
    return reply;
}

ActionReply SnapdHelper::disable(QVariantMap args)
{
    QString snap = args["snap"].toString();
    ActionReply reply;

    auto request = m_qsnapdClient.disable(snap);

    // Check for cancel requests
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [timer, request]() {
        if (HelperSupport::isStopped()) {
            qDebug() << "Stop request recived";
            request->cancel();
            timer->deleteLater();
        }

    });
    timer->start(200);

    request->runSync();
    if (request->error() != QSnapdRequest::NoError) {
        reply.setErrorCode( ActionReply::BackendError );
        reply.setErrorDescription(request->errorString());
    }

    request->deleteLater();
    return reply;
}

ActionReply SnapdHelper::enable(QVariantMap args)
{
    QString snap = args["snap"].toString();
    ActionReply reply;

    auto request = m_qsnapdClient.enable(snap);

    // Check for cancel requests
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [timer, request]() {
        if (HelperSupport::isStopped()) {
            qDebug() << "Stop request recived";
            request->cancel();
            timer->deleteLater();
        }
    });
    timer->start(200);

    request->runSync();
    if (request->error() != QSnapdRequest::NoError) {
        reply.setErrorCode( ActionReply::BackendError );
        reply.setErrorDescription(request->errorString());
    }




    request->deleteLater();
    return reply;
}

ActionReply SnapdHelper::refresh(QVariantMap args)
{
    HelperSupport::progressStep(QVariantMap());

    QString snap = args["snap"].toString();
    QString channel = args.value("channel").toString();

    ActionReply reply;

    auto request = m_qsnapdClient.refresh(snap, channel);

    connect(request, &QSnapdRefreshRequest::progress, this, [] {
        qDebug() << "progress tick";
    });
    // Check for cancel requests
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [timer, request]() {
        if (HelperSupport::isStopped()) {
            qDebug() << "Stop request recived";
            request->cancel();
            timer->stop();
        }
//        qDebug() << "tick" << HelperSupport::isStopped();

    });
    timer->start(200);
    request->runSync();
    timer->stop();

    if (request->error() != QSnapdRequest::NoError) {
        reply.setErrorCode( ActionReply::BackendError );
        reply.setErrorDescription(request->errorString());
    }

    timer->deleteLater();
    request->deleteLater();
    return reply;
}

ActionReply SnapdHelper::applysettings(QVariantMap args)
{
    //    qDebug() << args;
    int store = args["store"].toInt();
    QString storeUrl = args["storeUrl"].toString();

    bool useProxy = args["useProxy"].toBool();
    QString httpProxy =  args["httpProxy"].toString();
    QString httpProxyPort = args["httpProxyPort"].toString();
    QString httpsProxy =  args["httpsProxy"].toString();
    QString httpsProxyPort = args["httpsProxyPort"].toString();
    QString noProxy =  args["noProxy"].toString();

    if (!httpProxyPort.isEmpty())
        httpProxy += ":" + httpProxyPort;

    if (!httpsProxyPort.isEmpty())
        httpsProxy += ":" + httpsProxyPort;

    ActionReply reply;

    QFile file("/etc/environment");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        reply.setErrorDescription(file.errorString());
        return reply;
    }

    QTextStream in(&file);
    QString line = in.readLine();
    QStringList lines;
    while (!line.isNull()) {
        if (!line.contains("SNAPPY_FORCE_CPI_URL") &&
                !line.contains("HTTP_PROXY") &&
                !line.contains("HTTPS_PROXY") &&
                !line.contains("NO_PROXY")) {
            lines.append(line);
        }

        line = in.readLine();
    }
    file.close();

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        reply.setErrorDescription(file.errorString());
        return reply;
    }

    QTextStream out(&file);

    if (store == 0)
        out << "#";
    out << "SNAPPY_FORCE_CPI_URL=" << storeUrl << endl;

    if (useProxy) {
        out << "HTTP_PROXY=" << httpProxy << endl;
        out << "HTTPS_PROXY=" <<  httpsProxy << endl;
        out << "NO_PROXY=" <<  noProxy << endl;
    } else {
        out << "#HTTP_PROXY=" << httpProxy << endl;
        out << "#HTTPS_PROXY=" <<  httpsProxy << endl;
        out << "#NO_PROXY=" <<  noProxy << endl;
    }

    for (QString line : lines)
        out << line << endl;

    file.close();

    QProcess process;
    process.start("/bin/bash", QStringList() << "/usr/sbin/service" << "snapd" << "restart");
    process.waitForFinished();

    qDebug() << process.readAll() ;

    return reply;
}


KAUTH_HELPER_MAIN("org.nomad.softwarecenter", SnapdHelper)
