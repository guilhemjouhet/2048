import QtQuick 2.9
import QtQuick.Window 2.2



Window {
    visible: true
    width: 640
    height: 480
    color: "#aa0000"
    title: qsTr("Hello World")

    Rectangle {
        id: rectangle
        x: 220
        y: 96
        width: 200
        height: 200
        color: "#ffffff"

        Text {
            id: text1
            width: 200
            height: 200
            text: vueToutesTuiles.cptQML
            font.pixelSize: 12
            focus: true
            Keys.onPressed: {
                switch (event.key){
                case Qt.Key_Up:
                    vueToutesTuiles.fusionH();
                    break;
                }
            }
        }
    }
}
