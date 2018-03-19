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
            text: qsTr(vueObjetTuile.valQML[0])
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            anchors.fill: parent
            font.pixelSize: 40
            focus: true

            Keys.onPressed: {
                switch (event.key) {
                  case Qt.Key_Up:
                    vueObjetTuile.Haut();
                    break;
                  case Qt.Key_Down:
                    vueObjetTuile.Bas();
                    break
                  case Qt.Key_Right:
                    vueObjetTuile.Droite();
                    break;
                  case Qt.Key_Left:
                    vueObjetTuile.Gauche();
                    break
                }
            }
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
            text: qsTr(vueObjetTuile.valQML[1])
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[2])
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.family: "Times New Roman"
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[3])
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[4])
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[5])
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[6])
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[7])
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[8])
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[9])
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[10])
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[11])
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[12])
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[13])
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[14])
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 40
            focus: true
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
            text: qsTr(vueObjetTuile.valQML[15])
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 40
            focus: true
        }
    }
}
