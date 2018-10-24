import QtQuick 2.7
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.0

import org.kde.plasma.core 2.0 as PlasmaCore
import org.kde.plasma.components 2.0 as PlasmaComponents
import org.kde.plasma.extras 2.0 as PlasmaExtras

import org.nxos.softwarecenter 1.0
import org.kde.mauikit 1.0 as Maui
import "parts" as Parts

Maui.ApplicationWindow {
    id: root
    
    floatingBar: true
    footBarOverlap: true
    searchButton.visible: false
    altColorText : "#fff"
    accentColor: "#263238"
    highlightColor: "#26C6DA"
    headBarBGColor: "#26C6DA"
    headBarFGColor: altColorText
    colorSchemeName: "nx-store"
    headBar.colorScheme.borderColor: Qt.darker(headBarBGColor, 1.4)
    
    property var refreshCacheTask
    property var appsCache
    
    property alias query: searchField.text
    property alias tasksCount: tasksCount.text
    
    signal goHome
    signal goStore
    signal goDeployed
    signal goTasks
    signal goSettings
    signal storeQueryTyped(var query)
        
    onGoStore: root.handleGoStore()
    onGoTasks: root.showTasksView()
    onStoreQueryTyped: root.search(query)
    onGoDeployed: root.showDeployedApplicationsView();
    tasksCount: "0"
    
    function enable() {
        storeButton.enabled = true
        searchField.enabled = true
    }
    
    function disable() {
        storeButton.enabled = false
        searchField.enabled = false
    }
    
    property string currentView: "store"
    
    function updateTaskNumberHint() {
        var total = TasksController.model.rowCount()
        + UpgraderController.upgradableApplicationIds.length
        
        root.tasksCount = total > 9 ? "+9" : total
    }
    
    Connections {
        target: TasksController
        onAffectedApplicationsIdsChanged: updateTaskNumberHint()
    }
    
    Connections {
        target: UpgraderController
        onUpgradableApplicationIdsChanged: updateTaskNumberHint()
    }
    
    headBar.rightContent:  Maui.ToolButton {
        id: deployedButton
        iconName: "update-none"
        tooltipText: qsTr("Deployed")
        colorScheme.highlightColor: accentColor
        iconColor: currentView == "deployed" ? colorScheme.highlightColor: altColorText
        onClicked: {
            currentView = "deployed"
            goDeployed()
        }
    }
    
    
    footBar.colorScheme.backgroundColor: accentColor
    footBar.colorScheme.textColor: altColorText
    footBar.middleContent: [
    
    Maui.ToolButton {
        id: storeButton
        iconName: "appimage-store"
        tooltipText: qsTr("Store")
        iconColor: currentView == "store" ? highlightColor: altColorText
        onClicked: {
            currentView = "store"
            goStore()
        }
    },
    
    Row
    {
          Maui.ToolButton {
        id: tasksButton
        iconName: "document-download"
        tooltipText: qsTr("Tasks")
        iconColor: currentView == "tasks" ? highlightColor: altColorText
        onClicked: {
            currentView = "tasks"
            goTasks()
        }       
    } 
         Maui.Badge {
            z: 999
            id: tasksCount
            color: "#EC407A"
            size: iconSizes.tiny
            height: iconSizes.medium
            anchors.verticalCenter: tasksButton.verticalCenter
//             anchors.rightMargin: 10
//             anchors.topMargin: 5
//             anchors.right: parent.right
//             anchors.top: parent.top
//             
        }
    }
  
    ]
    
    headBar.middleContent: Maui.TextField {
        id: searchField
        colorScheme.borderColor: Qt.darker(headBarBGColor, 1.4)
        colorScheme.backgroundColor: "#EFF0F1"
        width: headBar.middleLayout.width * 0.7
        placeholderText: "Search"
        focus: true
        
        Keys.onEnterPressed: storeQueryTyped(text)
        Keys.onReturnPressed: storeQueryTyped(text)
    }
    
    
    footer: StatusArea {
        id: statusArea
        height: visible ? 42 : 0
        visible: false
    }
    

        
        StackView {
            id: stackView
            
            clip: true
            anchors.fill: parent
            
            initialItem: PlaceHolderView
            
            function findItemByObjectName(name) {
                var item = stackView.find(function (item, index) {
                    return item.objectName === name
                })
                return item
            }
            
            function goTo(name, component) {
                var itemInstance = findItemByObjectName(name)
                if (itemInstance)
                    stackView.pop(itemInstance)
                    else
                        stackView.push(component, {
                            objectName: name
                        })
//                         adjustContentHeight()
            }
            
//             function adjustContentHeight() {
//                 var childrenHeight = stackView.currentItem.childrenRect.height
//                 if (childrenHeight > scrollView.height)
//                     stackView.height = childrenHeight
//                     else
//                         stackView.height = scrollView.height
//             }
//             
//             Connections {
//                 target: stackView.currentItem
//                 onChildrenRectChanged: stackView.adjustContentHeight()
//             }
        }     
    
    
    Parts.MessageFrame {
        id: messageBox
        
        anchors.horizontalCenter: headBar.horizontalCenter
        anchors.top: headBar.bottom
        
        visible: false
        
        onCloseRequest: NotificationsController.hideNotification()
        
        Connections {
            target: NotificationsController
            onShowNotificationRequest: {
                messageBox.icon = ["emblem-info", "", "emblem-error"][notficationType]
                messageBox.text = message
                messageBox.visible = true
            }
            onNotificationExpired: messageBox.visible = false
        }
    }
    
    TextConstants {
        id: textConstants
    }
    
    function search(query) {
        SearchController.search(query)
        showSearchView()
    }
    
    function showTasksView() {
        root.title = "Tasks"
        stackView.goTo("tasksView", "qrc:/TasksView.qml")
    }
    
    function showDeployedApplicationsView() {
        root.title = "Deployed Applications"
        stackView.goTo("deployedApplicationsView", "qrc:/DeployedApplicationsView.qml")
    }
    
    function handleUpdaterIsWorkingChanged(isWorking) {
        print("isWorking: " + UpdaterController.isWorking)
        print("isReady: " + UpdaterController.isReady)
        if (currentView == "store") {
            if (isWorking) {
                root.title = "Loading contents"
                showBusyMessage("Loading store contents...")
            } else {
                if (UpdaterController.isReady)
                    showSearchView()
                    else
                        showUpdateErrorMessage()
            }
        }
    }
    
    function handleGoStore() {
        showSearchView()
    }
    
    function showSearchView() {
        root.title = "Explore"
        stackView.goTo("searchView", "qrc:/SearchView.qml")
    }
    
    function showApplicationView(applicationName) {
        root.title = applicationName ? applicationName : "Details"
        stackView.goTo("applicationView", "qrc:/ApplicationView.qml")
    }
    
    function showBusyMessage(message) {
        stackView.goTo("placeHolderView", "qrc:/PlaceHolderView.qml")
        var item = stackView.findItemByObjectName("placeHolderView")
        item.message = message
        item.iconName = ""
        item.showBusyIndicator = true
    }
    
    function showUpdateErrorMessage() {
        stackView.goTo("placeHolderView", "qrc:/PlaceHolderView.qml")
        var item = stackView.findItemByObjectName("placeHolderView")
        
        item.message = textConstants.fetchError
        item.iconName = "network-wireless-disconnected"
        item.showBusyIndicator = false
    }
    
    Item {
        id : busyView
        anchors.fill: parent
        visible: SearchController.isBusy || ApplicationViewController.isBusy
        Rectangle {
            id: busyIndicatorBacground
            anchors.fill: parent
            color: "white"
            opacity: 0.3
            
        }
        
        BusyIndicator {
            anchors.centerIn: parent;
        }
    }
    
    
    Component.onCompleted:
    {
        handleGoStore()
        updateTaskNumberHint()
    }
}
