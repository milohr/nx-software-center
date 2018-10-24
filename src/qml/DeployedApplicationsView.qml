import QtQuick 2.0
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.3
import org.kde.mauikit 1.0 as Maui
import org.nxos.softwarecenter 1.0

Item {
    
    
    Maui.GridView {
        id: appImageHubListView
        
        
        anchors.fill: parent
        
        spacing: space.huge * 2
        adaptContent: true
        cellWidth: itemSize + spacing
        cellHeight: itemSize + spacing
        itemSize: unit * 100

        model: DeployedApplicationsController.applications
        
        delegate: ApplicationGridItemDelegate {
            id: applicationGridItemDelegate
            
            width: appImageHubListView.cellWidth
            height: appImageHubListView.cellWidth
            
            Layout.alignment: Qt.AlignTop | Qt.AlignLeft
            
            name: modelData["name"]
            version: modelData["latestReleaseVersion"]
            icon: modelData["icon"]
            size: modelData["fileSize"]
            
            hasPendingAction: TasksController.affectedApplicationsIds.indexOf(modelData["id"]) > -1
            upgradable: UpgraderController.upgradableApplicationIds.indexOf(modelData["id"]) > -1
            
            deployed: true
            
            onRequestRemove: RemoveController.removeAppImage(modelData["filePath"])
            onRequestUpgrade: UpgraderController.upgradeApplication(modelData["id"])
            onRequestRun: RunController.runAppImage(modelData["filePath"])
            onRequestView: {
                ApplicationViewController.loadApplication(modelData["id"])
                showApplicationView(modelData["name"])
            }
        }
        
    }
}
