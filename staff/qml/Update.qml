import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.1 //RowLayout
import QtQuick.Dialogs 1.2 //TableView
import QtQuick.Controls.Styles 1.3
import QtQuick.Controls.Private 1.0
import QtQuick.Controls 1.3
import QtQuick.Controls 2.12


Item {

     id: upPage

    property string uname: ""
    property string eid: ""
    property string dep: ""
    property string job: ""
    property string gen: ""


     Rectangle{
           width: parent.width
           height: parent.height
           color:backGroundColor


        }

      

      Text {
        id: signupText
        text: qsTr("Update Employee")
        font.pointSize: 24
        anchors.top: parent.top
        anchors.topMargin: 30
        anchors.horizontalCenter: parent.horizontalCenter
        color: mainTextCOlor
    }    

    TableView {
        id: tableView
        anchors.centerIn: parent


        width: 450
        height: 500
        
        

        itemDelegate: Item {

                   Text {
                     anchors.verticalCenter: parent.verticalCenter
                     color: "black"
                     elide: styleData.elideMode
                     text: styleData.value
                     font.pixelSize: 20
                   }
        }



//Verileri siralama islemi
//Data sorting process

        TableViewColumn {

            role: "id"

            title: "ID"

            width: 110

        }
        TableViewColumn {
            role: "name"
            title: qsTr("Name")
           width:110
        }
        TableViewColumn {
            role: "department"
            title: qsTr("Department")
             width: 110
        }

        TableViewColumn {
            role: "gender"
            title: qsTr("Gender")
             width: 110
        }
        TableViewColumn {
            role: "job_position"
            title: qsTr("Job_Position")
           width: 110
        }
      
        model: myModel
 // Fare sol tıklamasını engellemek için TableView'da çizgileri ayarlama
        rowDelegate: Rectangle {
            //anchors.fill: parent
            color: styleData.selected ? 'skyblue' : (styleData.alternate ? 'whitesmoke' : 'white');
            height:50
            width: parent.width


            MouseArea {
                anchors.fill: parent
                acceptedButtons: Qt.RightButton | Qt.LeftButton
                onClicked: {
                    tableView.selection.clear()
                    tableView.selection.select(styleData.row)
                    tableView.currentRow = styleData.row
                    tableView.focus = true



                    switch(mouse.button) {
                    case Qt.LeftButton:
                        contextMenu.popup() // Call the context menu
                        break
                    default:
                        break
                    }
                }
            }
        }
    }


  Menu {
        id: contextMenu

              
        MenuItem{
            text: qsTr("Update Employee") 


            onTriggered:{
            
                console.log("tableView.currentRow : " + tableView.currentRow);
                idField.text = myModel.getId(tableView.currentRow);
                nameField.text = myModel.getName(tableView.currentRow);
                departmentField.text= myModel.getDepartment(tableView.currentRow);
                genderField.text = myModel.getGender(tableView.currentRow);
                job_positionField.text = myModel.getJob_position(tableView.currentRow);
                
                popup.open()

            }
        }

           MenuItem {
            text: qsTr(" Cancel ") 
            onTriggered: {
                /* Satırı veritabanından kaldırma niyetini netleştirecek iletişim kutusunu çağırın
                 * */
                 popup.close()
            }

        }

  }

 Popup{
        id:popup
        background: Rectangle{
            implicitHeight: 100
            implicitWidth: parent.width
            border.color: "green"
        }

 
             contentItem:
             
              ColumnLayout{
            id: columnLayout
            width: 10
            Text{ text: qsTr("Employee_Id") 
            }
            TextField {
                id: idField
                width: 10
            }


            Text {
                
                width: 10
                text: qsTr("Name") 
            }
            TextField { id: nameField}



            Text {text: qsTr(" Department ")}

            TextField 
            { id: departmentField}

            Text {text: qsTr("Gender") }

            TextField {
                id: genderField
            }

            Text {text: qsTr("job_position") }
            TextField {
                id: job_positionField

            }


   Button{
                text: qsTr("Save Changes") 

                onClicked: {

                       dialogDuzenle.open()


                }
            }         

 MessageDialog{
                id: dialogDuzenle
                title: qsTr("Regulation") 
                text: qsTr("Finish Editing?") 
                icon: StandardIcon.Warning
                standardButtons: StandardButton.Yes | StandardButton.No
                onYes: {
                        if(database.update((myModel.getId(tableView.currentRow)),nameField.text , departmentField.text, genderField.text, job_positionField.text))
                        {
                            console.log("Edited successfully")
                            idField.text = "";
                            nameField.text = "";
                            departmentField.text = "";
                            genderField.text = "";
                            job_positionField.text="";
                            myModel.updateModel()

                        }
                    else{
                        console.log("Not edited")
                    }
                   }

                onNo: {
                    console.log("Canceled")
                }

 }

        }

 }
           Item {
            height: 20
        }


        CButton{
            height: 50
            Layout.preferredWidth: parent.width - 20
            Layout.alignment: Qt.AlignHCenter
            name: "Home"
            baseColor: mainAppColor
            borderColor: mainAppColor
            onClicked: logoutSession()
        }

            
        
 }
    



       


       
  

                  
    











