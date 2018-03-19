import QtQuick 2.9
import QtQuick.Window 2.2


Window {
    id: window
    visible: true
    width: 400
    height: 400
    title: qsTr("2048")

    MainForm {
        id: mainForm

        Text {
            id: text1
            text: qsTr(vueObjetCpt0.cptQML)
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            anchors.fill: parent
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm1
        anchors.left: parent.left
        anchors.leftMargin: 100
        anchors.top: parent.top
        anchors.topMargin: 0

        Text {
            id: text2
            text: qsTr(vueObjetCpt1.cptQML)
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm2
        anchors.left: parent.left
        anchors.leftMargin: 200
        anchors.top: parent.top
        anchors.topMargin: 0

        Text {
            id: text3
            text: qsTr(vueObjetCpt2.cptQML)
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.family: "Times New Roman"
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm3
        width: 100
        height: 100
        anchors.left: parent.left
        anchors.leftMargin: 300
        anchors.top: parent.top
        anchors.topMargin: 0

        Text {
            id: text4
            text: qsTr(vueObjetCpt3.cptQML)
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm4
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 100

        Text {
            id: text5
            text: qsTr(vueObjetCpt4.cptQML)
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm5
        anchors.left: parent.left
        anchors.leftMargin: 100
        anchors.top: parent.top
        anchors.topMargin: 100

        Text {
            id: text6
            text: qsTr(vueObjetCpt5.cptQML)
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm6
        anchors.left: parent.left
        anchors.leftMargin: 200
        anchors.top: parent.top
        anchors.topMargin: 100

        Text {
            id: text7
            text: qsTr(vueObjetCpt6.cptQML)
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm7
        anchors.left: parent.left
        anchors.leftMargin: 300
        anchors.top: parent.top
        anchors.topMargin: 100

        Text {
            id: text8
            text: qsTr(vueObjetCpt7.cptQML)
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm8
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 200

        Text {
            id: text9
            text: qsTr(vueObjetCpt8.cptQML)
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm9
        anchors.left: parent.left
        anchors.leftMargin: 100
        anchors.top: parent.top
        anchors.topMargin: 200

        Text {
            id: text10
            text: qsTr(vueObjetCpt9.cptQML)
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm10
        anchors.left: parent.left
        anchors.leftMargin: 200
        anchors.top: parent.top
        anchors.topMargin: 200

        Text {
            id: text11
            text: qsTr(vueObjetCpt10.cptQML)
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm11
        anchors.left: parent.left
        anchors.leftMargin: 300
        anchors.top: parent.top
        anchors.topMargin: 200

        Text {
            id: text12
            text: qsTr(vueObjetCpt11.cptQML)
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm12
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 300

        Text {
            id: text13
            text: qsTr(vueObjetCpt12.cptQML)
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm13
        anchors.left: parent.left
        anchors.leftMargin: 100
        anchors.top: parent.top
        anchors.topMargin: 300

        Text {
            id: text14
            text: qsTr(vueObjetCpt13.cptQML)
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm14
        anchors.left: parent.left
        anchors.leftMargin: 200
        anchors.top: parent.top
        anchors.topMargin: 300

        Text {
            id: text15
            text: qsTr(vueObjetCpt14.cptQML)
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 12
        }
    }

    MainForm {
        id: mainForm15
        anchors.left: parent.left
        anchors.leftMargin: 300
        anchors.top: parent.top
        anchors.topMargin: 300

        Text {
            id: text16
            text: qsTr(vueObjetCpt15.cptQML)
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 12
        }
    }


}
