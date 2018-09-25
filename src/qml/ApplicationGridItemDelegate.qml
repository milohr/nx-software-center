import QtQuick 2.0
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.4
import org.kde.mauikit 1.0 as Maui
import org.kde.plasma.core 2.0 as PlasmaCore
import org.kde.plasma.components 2.0 as PlasmaComponents

ItemDelegate {
    property alias iconName: iconImage.source
    property alias name: labelName.text
    property alias version: labelVersion.text
    property alias size: labelSize.text
    
    property bool deployed: false
    property bool upgradable: false
    property bool hasPendingAction: false

    signal requestRun
    signal requestRemove
    signal requestGet
    signal requestUpgrade
    signal requestView
    
   hoverEnabled: !isMobile   
onReleased: requestView()   

    background: Rectangle{
        color: hovered? altColor : "transparent"
        border.color: Qt.darker(altColor,1.2)
        radius: radiusV
        opacity: hovered? 0.2 : 0
        
    }

    ColumnLayout {
        id: contents
        height: parent.height 
        width: parent.width 
        anchors.centerIn: parent

        Item{
            id: iconItem
            Layout.fillWidth: true
            Layout.maximumWidth: iconSizes.large
            Layout.preferredHeight: iconSizes.large
            Layout.maximumHeight: iconSizes.large
            Layout.alignment: Qt.AlignCenter
            Layout.margins: space.small
            
            Image {
            id: iconImage         
           anchors.centerIn: parent
            height: iconSizes.large
            width: height
            sourceSize.width: width
            sourceSize.height: height
            smooth: true
            asynchronous: true
            cache: false
            fillMode: Image.PreserveAspectFit
            
        }
            visible: iconImage.source != "" && iconImage.status == Image.Ready

        }
        
         Item{
              Layout.fillWidth: true
            Layout.maximumWidth: iconSizes.large
            Layout.preferredHeight: iconSizes.large
            Layout.maximumHeight: iconSizes.large
            Layout.alignment: Qt.AlignCenter
            Layout.margins: space.small
            
        Maui.ToolButton {
            id: placeHolderIconImage
                       anchors.centerIn: parent

            size: iconSizes.large
            enabled: false
            isMask: false
            iconName: "package-x-generic"
        }
                    visible: !iconItem.visible

         }

        Item{
            
            Layout.fillWidth: true       
             Layout.fillHeight: true
             Label {
                id: labelName
                height: parent.height
                width: parent.width
                horizontalAlignment: Qt.AlignHCenter
                verticalAlignment: Qt.AlignVCenter
                color: textColor
                elide: Text.ElideRight

                font.pointSize: fontSizes.default
                font.bold: true
            }
        }
       

       Item{
           
           Layout.fillWidth: true
                        Layout.fillHeight: true

            Loader {
                visible: hovered
                height: iconSizes.medium
                width: height * 3
                id: loader
                anchors.centerIn: parent
                sourceComponent: deployed ? removeButton : getButton
            }
       }
           
            Label {
                id: labelVersion
                Layout.fillWidth: true
                elide: Text.ElideRight
                color: textColor
                font.pointSize: fontSizes.small
                visible: text
            }

            Label {
                id: labelSize
                Layout.fillWidth: true
                elide: Text.ElideRight
                color: textColor
                font.pointSize: fontSizes.small
                visible: text
            }
        
        Component {
            id: getButton
            Maui.Button {
                enabled: !hasPendingAction
                text: upgradable ? i18n("Upgrade") : i18n("Get")
                colorScheme.backgroundColor: infoColor
                colorScheme.textColor: "white"
                onClicked: {
                    if (upgradable)
                        requestUpgrade()
                    else
                        requestGet()
                }
            }
        }

        Component {
            id: removeButton
            RowLayout {
                spacing: 0
                Maui.Button {
                    Layout.fillWidth: true
                    Layout.fillHeight: true

                    enabled: !hasPendingAction
                    text: i18n("Run")

                    onClicked: requestRun()
                }

                Maui.ToolButton {
                    id: menuButton
                    Layout.maximumWidth: 20
                    Layout.fillHeight: true
                    flat: false
                    size: iconSizes.small
                    enabled: !hasPendingAction
                    iconName: "down-arrow"

                    onClicked: actionsMenu.open(0, height)

                    Menu {
                        id: actionsMenu

                        MenuItem {
                            text: i18n("Remove")
                            onClicked: requestRemove()
                        }

                        MenuItem {
                            text: i18n("Upgrade")
                            onClicked: requestUpgrade()
                            enabled: upgradable
                        }
                    }
                }

            }
        }
    }
}
