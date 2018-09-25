import QtQuick 2.0
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.3
import org.kde.mauikit 1.0 as Maui
import org.nxos.softwarecenter 1.0

Maui.Page {
    headBarVisible: false
    margins: 0
    
    ColumnLayout
    {
        anchors.fill: parent
        
        Rectangle{
            Layout.fillWidth: true
            height: 200
            color: "#333"
            
            ListView
            {
                id: bannerList
                anchors.fill: parent
                orientation: ListView.Horizontal 
                snapMode: ListView.SnapOneItem
                model: ListModel
                {
                    id: bannerModel
                    ListElement{banner: "qrc:/images/backgrounds/banner1.png"}
                    ListElement{banner: "qrc:/images/backgrounds/banner2.png"}
                    ListElement{banner: "qrc:/images/backgrounds/banner3.png"}
                }
                delegate: Item
                {
                    width: bannerList.width
                    height: bannerList.height
                    
                    Image{
                        source: model.banner
                        height: parent.height
                        anchors.centerIn: parent
                        sourceSize.height: height
                        smooth: true
                        asynchronous: true
                        cache: false
                        fillMode: Image.PreserveAspectFit
                    }
                }
                
            }
            
            
        }
        
        Maui.GridView {
            id: appImageHubListView
            Layout.fillWidth: true
            Layout.fillHeight: true
            Layout.margins: space.big
            itemSize: unit * 100
            spacing: space.huge * 2
            adaptContent: true
            cellWidth: itemSize + spacing
            cellHeight: itemSize + spacing
            
            model: SearchController.model        
            
            delegate: ApplicationGridItemDelegate {
                id: applicationGridItemDelegate
                
                width: appImageHubListView.cellWidth * 0.9
                height: appImageHubListView.cellHeight * 0.9
                
                Layout.alignment: Qt.AlignTop | Qt.AlignLeft
                
                name: app_name
                version: app_version
                iconName: app_icon
                
                hasPendingAction: TasksController.affectedApplicationsIds.indexOf(app_id) > -1
                deployed: DeployedApplicationsController.applicationsIds.indexOf(app_id) > -1
                upgradable: UpgraderController.upgradableApplicationIds.indexOf(app_id) > -1
                
                onRequestGet: DeployController.deploy(app_id)
                onRequestRemove: RemoveController.remove(app_id)
                onRequestUpgrade: UpgraderController.upgradeApplication(app_id)
                onRequestRun: RunController.run(app_id)
                onRequestView: {
                    ApplicationViewController.loadApplication(app_id)
                    showApplicationView(app_name)
                }
                
            }
        }
    }
}
