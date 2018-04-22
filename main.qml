import QtQuick 2.9
import QtQuick.Window 2.2

/*ce code est généré de manière graphique depuis l'éditeur "Design" de Qt Creator.
Cela permet d'afficher le jeu dans une fenêtre qui intarface le jeu
Les textes et couleurs des éléments du jeu sont modifiées dans ce code de manière à afficher les cases du jeu
selon une communication QML/C++*/
Window { //la fen^tre du jeu
    id: window
    visible: true
    width: 400
    height: 500
    title: qsTr("2048")

    MainForm {
        id: mainForm
        color: qsTr(vueObjetTuile.coulQML[0])

        Text {
            id: text1
            text: qsTr(vueObjetTuile.valQML[0])
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            anchors.fill: parent
            font.family: "Times New Roman"
            font.pixelSize: 40
            focus: true

            Keys.onPressed: { //cela permet de détecter les touches pressées par le joueur et de faire évoluer le jeu en conséquence
                switch (event.key) {
                case Qt.Key_Up:
                    vueObjetTuile.haut();
                    break;
                case Qt.Key_Down:
                    vueObjetTuile.bas();
                    break
                case Qt.Key_Right:
                    vueObjetTuile.droite();
                    break;
                case Qt.Key_Left:
                    vueObjetTuile.gauche();
                    break
                case Qt.Key_Enter:
                    vueObjetTuile.init();
                    break
                }
            }
        }
    }

    MainForm {
        id: mainForm1
        color: qsTr(vueObjetTuile.coulQML[1]) //on change dynamiquement la couleur des tuiles..
        anchors.left: parent.left
        anchors.leftMargin: 100
        anchors.top: parent.top
        anchors.topMargin: 0

        Text {
            id: text2
            text: qsTr(vueObjetTuile.valQML[1]) //...et leur valeur
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.family: "Times New Roman"
            font.pixelSize: 40
            focus: true
        }
    }

    MainForm {
        id: mainForm2
        color: qsTr(vueObjetTuile.coulQML[2])
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
        color: qsTr(vueObjetTuile.coulQML[3])
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
            font.family: "Times New Roman"
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 40
            focus: true
        }
    }

    MainForm {
        id: mainForm4
        color: qsTr(vueObjetTuile.coulQML[4])
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
            font.family: "Times New Roman"
            font.pixelSize: 40
            focus: true
        }
    }

    MainForm {
        id: mainForm5
        color: qsTr(vueObjetTuile.coulQML[5])
        anchors.left: parent.left
        anchors.leftMargin: 100
        anchors.top: parent.top
        anchors.topMargin: 100

        Text {
            id: text6
            text: qsTr(vueObjetTuile.valQML[5])
            anchors.fill: parent
            font.family: "Times New Roman"
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 40
            focus: true
        }
    }

    MainForm {
        id: mainForm6
        color: qsTr(vueObjetTuile.coulQML[6])
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
            font.family: "Times New Roman"
            font.pixelSize: 40
            focus: true
        }
    }

    MainForm {
        id: mainForm7
        color: qsTr(vueObjetTuile.coulQML[7])
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
            font.family: "Times New Roman"
            focus: true
        }
    }

    MainForm {
        id: mainForm8
        color: qsTr(vueObjetTuile.coulQML[8])
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
            font.family: "Times New Roman"
            font.pixelSize: 40
            focus: true
        }
    }

    MainForm {
        id: mainForm9
        color: qsTr(vueObjetTuile.coulQML[9])
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
            font.family: "Times New Roman"
            focus: true
        }
    }

    MainForm {
        id: mainForm10
        color: qsTr(vueObjetTuile.coulQML[10])
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
            font.family: "Times New Roman"
            font.pixelSize: 40
            focus: true
        }
    }

    MainForm {
        id: mainForm11
        color: qsTr(vueObjetTuile.coulQML[11])
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
            font.family: "Times New Roman"
            focus: true
        }
    }

    MainForm {
        id: mainForm12
        color: qsTr(vueObjetTuile.coulQML[12])
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
            font.family: "Times New Roman"
            font.pixelSize: 40
            focus: true
        }
    }

    MainForm {
        id: mainForm13
        color: qsTr(vueObjetTuile.coulQML[13])
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
            font.family: "Times New Roman"
            focus: true
        }
    }

    MainForm {
        id: mainForm14
        color: qsTr(vueObjetTuile.coulQML[14])
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
            font.family: "Times New Roman"
            font.pixelSize: 40
            focus: true
        }
    }

    MainForm {
        id: mainForm15
        color: qsTr(vueObjetTuile.coulQML[15])
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
            font.family: "Times New Roman"
            focus: true
        }
    }

    Rectangle {
        id: rectangle
        width: 400
        height: 100
        color: "#ffffff"
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 0

        Text {
            id: text17
            text: qsTr("(Re)commencer Jeu")
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.bold: true
            font.family: "Times New Roman"
            anchors.fill: parent
            font.pixelSize: 30
        }

        MouseArea {
            id: mouseArea
            anchors.fill: parent
            onClicked: vueObjetTuile.init();
        }
    }
    Rectangle {
        id: rectangle1
        height: 400
        color: qsTr(vueObjetTuile.TextGameOver[1])
        opacity: 0.7
        anchors.top: parent.top
        anchors.topMargin: 0
        anchors.right: parent.right
        anchors.left: parent.left

        Text {
            id: text18
            width: 400
            height: 400
            color: "#cf0707"
            text: qsTr(vueObjetTuile.TextGameOver[0])
            renderType: Text.NativeRendering
            anchors.top: parent.top
            anchors.topMargin: 0
            font.bold: true
            font.family: "Times New Roman"
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 60
        }
    }
}
