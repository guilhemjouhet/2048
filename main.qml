import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    id: window
    visible: true
    width: 400
    height: 400
    color: "#aa0000"
    title: qsTr("2018")



    Rectangle {
        id: rectangle
        x: 32
        y: 399
        width: 200
        height: 200
        color: "#ffffff"


        /*Text {
            id: text1
            text: vueToutesTuiles[0].val().cptQML
            anchors.fill: parent
            font.pixelSize: 12
            focus: true
            Keys.onPressed: {
                switch (event.key){
                case Qt.Key_Up:
                    vueToutesTuiles.fusionH();
                    break;
                }
            }
        }*/
    }

    CaseForm {
        id: caseForm0
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 0
        //text: vueToutesTuiles.getTuile1().cptQML
    }

    CaseForm {
        id: caseForm1
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 100
        anchors.top: parent.top
        anchors.topMargin: 0
    }

    CaseForm {
        id: caseForm2
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 200
        anchors.top: parent.top
        anchors.topMargin: 0
    }

    CaseForm {
        id: caseForm3
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 300
        anchors.top: parent.top
        anchors.topMargin: 0
    }

    CaseForm {
        id: caseForm4
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 100
    }

    CaseForm {
        id: caseForm5
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 100
        anchors.top: parent.top
        anchors.topMargin: 100
    }

    CaseForm {
        id: caseForm6
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 200
        anchors.top: parent.top
        anchors.topMargin: 100
    }

    CaseForm {
        id: caseForm7
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 300
        anchors.top: parent.top
        anchors.topMargin: 100
    }

    CaseForm {
        id: caseForm8
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 200
    }

    CaseForm {
        id: caseForm9
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 100
        anchors.top: parent.top
        anchors.topMargin: 200
    }

    CaseForm {
        id: caseForm10
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 200
        anchors.top: parent.top
        anchors.topMargin: 200
    }

    CaseForm {
        id: caseForm11
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 300
        anchors.top: parent.top
        anchors.topMargin: 200
    }

    CaseForm {
        id: caseForm12
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 300
    }

    CaseForm {
        id: caseForm13
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 100
        anchors.top: parent.top
        anchors.topMargin: 300
    }

    CaseForm {
        id: caseForm14
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 200
        anchors.top: parent.top
        anchors.topMargin: 300
    }

    CaseForm {
        id: caseForm15
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 300
        anchors.top: parent.top
        anchors.topMargin: 300
    }
}
