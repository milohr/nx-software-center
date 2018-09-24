import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

import org.kde.plasma.core 2.0 as PlasmaCore
import org.kde.plasma.components 2.0 as PlasmaComponents

import "parts" as Parts

PlasmaCore.FrameSvgItem {
   
    height: 48
    RowLayout {
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.leftMargin: 20
        anchors.verticalCenter: parent.verticalCenter

        height: 34
        spacing: 12
       

        
    }
}
