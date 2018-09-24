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
    id: main
    
    visible: true
    width: 900
    height: 700
    
    property var refreshCacheTask
    property var appsCache
    
    color: theme.backgroundColor
    property alias tasksCount: tasksCount.text
    
    property alias query: searchField.text
    property string currentView: "store"

    signal goHome
    signal goStore
    signal goTasks
    signal goSettings
    signal storeQueryTyped(var query)
    
    onGoStore: main.handleGoStore()
    onGoTasks: main.showTasksView()
    onStoreQueryTyped: main.search(query)

    function enable() {
        storeButton.enabled = true
        searchField.enabled = true
    }
    
    function disable() {
        storeButton.enabled = false
        searchField.enabled = false
    }


    Connections {
        target: TasksController
        onAffectedApplicationsIdsChanged: navigationPanel.updateTaskNumberHint()
    }

    Connections {
        target: UpgraderController
        onUpgradableApplicationsChanged: navigationPanel.updateTaskNumberHint()
    }

    function updateTaskNumberHint() {
        var total = TasksController.model.rowCount(
                    ) + UpgraderController.model.rowCount()
        navigationPanel.tasksCount = total > 9 ? "+9" : total
    }
    
    headBar.leftContent: [

        Maui.ToolButton {
            id: storeButton
            iconName: "appimage-store"
            iconColor: currentView == "store" ? highlightColor: textColor
            onClicked: {
                currentView = "store"
                goStore()
            }
        },

        Maui.ToolButton {
            id: tasksButton
            iconName: "document-download"
            iconColor: currentView == "tasks" ? highlightColor: textColor
            onClicked: {
                currentView = "tasks"
                goTasks()
            }

            Maui.Badge {
                id: tasksCount
                color: "#EC407A"
                anchors.margins: 2
                anchors.right: parent.right
                anchors.top: parent.top
                height: 18
                width: 18
            }
        }

    ]
    
    tasksCount: "0"
    headBar.middleContent: Maui.TextField {
        id: searchField
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
    
    content: Flickable {
        id: scrollView
        anchors.fill: parent
        
        contentWidth: stackView.width
        contentHeight: stackView.height
        
        clip: true
        
        StackView {
            id: stackView
            
            clip: true
            width: scrollView.width
            
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
                adjustContentHeight()
            }
            
            function adjustContentHeight() {
                var childrenHeight = stackView.currentItem.childrenRect.height
                if (childrenHeight > scrollView.height)
                    stackView.height = childrenHeight
                else
                    stackView.height = scrollView.height
            }
            
            Connections {
                target: stackView.currentItem
                onChildrenRectChanged: stackView.adjustContentHeight()
            }
        }
        
        ScrollBar.vertical: ScrollBar {
        }
    }
    
    Parts.MessageFrame {
        id: messageBox
        
        anchors.horizontalCenter: header.horizontalCenter
        anchors.top: header.bottom
        
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
    }
    
    function showTasksView() {
        main.title = "Tasks"
        stackView.goTo("tasksView", "qrc:/TasksView.qml")
    }
    
    Connections {
        target: UpdaterController
        onIsWorkingChanged: handleUpdaterIsWorkingChanged(isWorking)
    }
    
    function handleUpdaterIsWorkingChanged(isWorking) {
        print("isWorking: " + UpdaterController.isWorking)
        print("isReady: " + UpdaterController.isReady)
        if (currentView == "store") {
            if (isWorking) {
                main.title = "Loading contents"
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
        if (UpdaterController.isReady)
            showSearchView()
        else
            UpdaterController.update()
    }
    
    function showSearchView() {
        main.title = "Explore"
        stackView.goTo("searchView", "qrc:/SearchView.qml")
    }
    
    function showApplicationView(applicationName) {
        main.title = applicationName ? applicationName : "Details"
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
    
    Component.onCompleted: handleGoStore()
}
