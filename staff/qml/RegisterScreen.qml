import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.1
import QtQuick.Layouts 1.1 //ColumnLayout
import QtQuick.Dialogs 1.2 //FileDialog
//import Qt.labs.settings 1.0
//import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2 //TextFieldStyle



Page {
    id: registerPage

   

    background: Rectangle {
        color: backGroundColor
    }

      header: ToolBar {
        background:
            Rectangle {
            implicitHeight: 50
            implicitWidth: 200
            color: "transparent"
        }

        RowLayout {
            anchors.fill: parent
            ToolButton {
                id: control
                font.family: "fontawesome"
                text: qsTr("\uf060")
                font.pointSize: 24
                rightPadding: 10
                contentItem: Text {
                    text: control.text
                    font: control.font
                    opacity: enabled ? 1.0 : 0.3
                    color: mainTextCOlor
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    elide: Text.ElideRight
                }
                onClicked: logoutSession()
            }
            Item { Layout.fillWidth: true }
        }
    }







    Text {
        id: signupText
        text: qsTr("ADD EMPLOYEE ") 
        font.pointSize: 24
        anchors.top: parent.top
        anchors.topMargin: 30
        anchors.horizontalCenter: parent.horizontalCenter
        color: mainTextCOlor
    }

    ColumnLayout {
        width: parent.width
        anchors.top: signupText.bottom
        anchors.topMargin: 30
        spacing: 25

        TextField {
            id: registerId
            placeholderText: qsTr("Employee Id")
            Layout.preferredWidth: parent.width - 20
            Layout.alignment: Qt.AlignHCenter
            color: mainTextCOlor
            font.pointSize: 14
            font.family: "fontawesome"
            leftPadding: 30
            background: Rectangle {
                implicitWidth: 200
                implicitHeight: 50
                radius: implicitHeight / 2
                color: "transparent"

                Text {
                    text: "\uf007"
                    font.pointSize: 14
                    font.family: "fontawesome"
                    color: mainAppColor
                    anchors.left: parent.left
                    anchors.verticalCenter: parent.verticalCenter
                    leftPadding: 10
                }

                Rectangle {
                    width: parent.width - 10
                    height: 1
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.bottom: parent.bottom
                    color: mainAppColor
                }
            }
        }

        TextField {
            id: registerName
            placeholderText: qsTr("Name")
            Layout.preferredWidth: parent.width - 20
            Layout.alignment: Qt.AlignHCenter
            color: mainTextCOlor
            font.pointSize: 14
            font.family: "fontawesome"
            leftPadding: 30
            
            background: Rectangle {
                implicitWidth: 200
                implicitHeight: 50
                radius: implicitHeight / 2
                color: "transparent"
                Text {
                    text: "\uf023"
                    font.pointSize: 14
                    font.family: "fontawesome"
                    color: mainAppColor
                    anchors.left: parent.left
                    anchors.verticalCenter: parent.verticalCenter
                    leftPadding: 10
                }

                Rectangle {
                    width: parent.width - 10
                    height: 1
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.bottom: parent.bottom
                    color: mainAppColor
                }
            }
        }

        TextField {
            id: registerDep
            placeholderText: qsTr("Department")
            Layout.preferredWidth: parent.width - 20
            Layout.alignment: Qt.AlignHCenter
            color: mainTextCOlor
            font.pointSize: 14
            font.family: "fontawesome"
            leftPadding: 30
            
            background: Rectangle {
                implicitWidth: 200
                implicitHeight: 50
                radius: implicitHeight / 2
                color: "transparent"
                Text {
                    text: "\uf023"
                    font.pointSize: 14
                    font.family: "fontawesome"
                    color: mainAppColor
                    anchors.left: parent.left
                    anchors.verticalCenter: parent.verticalCenter
                    leftPadding: 10
                }

                Rectangle {
                    width: parent.width - 10
                    height: 1
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.bottom: parent.bottom
                    color: mainAppColor
                }
            }
        }

        
         TextField {
            id: registerGen
            placeholderText: qsTr("Gender")
            Layout.preferredWidth: parent.width - 20
            Layout.alignment: Qt.AlignHCenter
            color: mainTextCOlor
            font.pointSize: 14
            font.family: "fontawesome"
            leftPadding: 30
            
            background: Rectangle {
                implicitWidth: 200
                implicitHeight: 50
                radius: implicitHeight / 2
                color: "transparent"
                Text {
                    text: "\uf023"
                    font.pointSize: 14
                    font.family: "fontawesome"
                    color: mainAppColor
                    anchors.left: parent.left
                    anchors.verticalCenter: parent.verticalCenter
                    leftPadding: 10
                }

                Rectangle {
                    width: parent.width - 10
                    height: 1
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.bottom: parent.bottom
                    color: mainAppColor
                }
            }
        }
        

       TextField {
            id: registerJob
            placeholderText: qsTr("Job Position")
            Layout.preferredWidth: parent.width - 20
            Layout.alignment: Qt.AlignHCenter
            color: mainTextCOlor
            font.pointSize: 14
            font.family: "fontawesome"
            leftPadding: 30
            
            background: Rectangle {
                implicitWidth: 200
                implicitHeight: 50
                radius: implicitHeight / 2
                color: "transparent"
                Text {
                    text: "\uf023"
                    font.pointSize: 14
                    font.family: "fontawesome"
                    color: mainAppColor
                    anchors.left: parent.left
                    anchors.verticalCenter: parent.verticalCenter
                    leftPadding: 10
                }

                Rectangle {
                    width: parent.width - 10
                    height: 1
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.bottom: parent.bottom
                    color: mainAppColor
                }
            }
        }
        





        Item {
            height: 20
        }

       
            Button {
                x: 138
                y: 450
                width: 373
                height: 67
                Text {
                    anchors.centerIn: parent
                    text: qsTr("Submit") 
                    font { family: mySettings.fontType; pointSize: 15; }
                }

                // Veritabanına yeni bir giriş yapın
                onClicked: {
                    dialogKayit.open()
                }

            }
            MessageDialog{
                id: dialogKayit
                title: qsTr("Record") 
                text: qsTr("Complete the Registration Process?") 
                icon: StandardIcon.Warning
                standardButtons: StandardButton.Yes | StandardButton.No
                onYes: {
                    //girilen verileri sirasiyle ListModel deki rollere ListModel'den de Database ekleme işlemi yapiliyor.
                    //entered data goes to ListModel respectively,
                     if(database.inserIntoTable(registerId.text , registerName.text, registerDep.text, registerGen.text,registerJob.text))
                    {
                        console.log("Record Successfully")
                        registerId.text = "";
                        registerName.text = "";
                        registerDep.text = "";
                        registerGen.text = "";
                        registerJob.text = "";
                        myModel.updateModel() // And updates the data model with a new record


                    }
                    else{
                        console.log("Failed to add record!!!")
                    }
                }


                    }
                    
    }      


      
}
