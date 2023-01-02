import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.1

import "qrc:/js/backend.js" as Backend

Page {
    id: loginPage

    signal registerClicked()

    background: Rectangle {
        color: backGroundColor
    }

    Rectangle {
        id: iconRect
        width: parent.width
        height: parent.height / 3
        color: backGroundColor

        Text {
            id: icontext
            text: qsTr("\uf169")
            anchors.centerIn: parent
            font.pointSize: 112
            font.family: "fontawesome"
            color: mainAppColor
        }
    }

    ColumnLayout {
        width: parent.width
        anchors.top: iconRect.bottom
        spacing: 15

        
        

        Item {
            height: 20
        }

        CButton{
            height: 50
            Layout.preferredWidth: loginPage.width - 20
            Layout.alignment: Qt.AlignHCenter
            name: " Employees"
            baseColor: mainAppColor
            borderColor: mainAppColor
            onClicked: {
                onClicked: stackView.push("qrc:/qml/Search.qml")
            }
        }

        CButton{
            height: 50
            Layout.preferredWidth: loginPage.width - 20
            Layout.alignment: Qt.AlignHCenter
            name: "Add Employee"
            baseColor: "transparent"
            borderColor: mainAppColor
            onClicked: stackView.push("qrc:/qml/RegisterScreen.qml") //registerClicked()
        }

         CButton{
            height: 50
            Layout.preferredWidth: loginPage.width - 20
            Layout.alignment: Qt.AlignHCenter
            name: "Employee List"
            baseColor: "transparent"
            borderColor: mainAppColor
            onClicked: stackView.push("qrc:/qml/Employee.qml") //registerClicked()
        }


         CButton{
            height: 50
            Layout.preferredWidth: loginPage.width - 20
            Layout.alignment: Qt.AlignHCenter
            name: "Update Employee"
            baseColor: "transparent"
            borderColor: mainAppColor
            onClicked: stackView.push("qrc:/qml/Update.qml") //registerClicked()
        }


        CButton{
            height: 50
            Layout.preferredWidth: loginPage.width - 20
            Layout.alignment: Qt.AlignHCenter
            name: "Delete Employee"
            baseColor: "transparent"
            borderColor: mainAppColor
            onClicked: stackView.push("qrc:/qml/Delete.qml") //registerClicked()
        }


         CButton{
            height: 50
            Layout.preferredWidth: loginPage.width - 20
            Layout.alignment: Qt.AlignHCenter
            name: " Employee Experience"
            baseColor: "transparent"
            borderColor: mainAppColor
            onClicked: stackView.push("qrc:/qml/RegisterScreen.qml", {"uname": "arun", "pword": "some"}) //registerClicked()
        }




        Text {
            id: name
            text: '<html><style type="text/css"></style><a href="http://google.com">About App?</a></html>' //qsTr("Forgot password?")
            linkColor: mainTextCOlor
            Layout.alignment: Qt.AlignHCenter
            font.pointSize: 14
            color: mainTextCOlor
            Layout.margins: 10
            onLinkActivated: forgotPassword()
        }
    }
}
