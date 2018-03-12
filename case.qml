import QtQuick 2.0

Item {
    width: 40
    height: 40

    Rectangle {
        id: rectangle
        color: "#ffffff"
        anchors.fill: parent

        Text {
            id: text1
            text: vueToutesTuiles.cptQML
            font.pixelSize: 12
        }
    }

}
