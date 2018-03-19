import QtQuick 2.4

Item {
    width: 100
    height: 100

    Rectangle {
        id: rectangle
        color: "#ffffff"
        anchors.fill: parent

        Text {
            id: text1
            text: vueToutesTuiles.tuileQML
            anchors.fill: parent
            font.pixelSize: 12
        }
    }
}
