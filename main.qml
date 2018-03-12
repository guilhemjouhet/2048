import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 400
    height: 400
    color: "#aa0000"
    title: qsTr("2018")

    Rectangle {
        id: rectangle
        x: 200
        y: 428
        width: 200
        height: 200
        color: "#ffffff"


        Text {
            id: text1
            x: -94
            y: 8
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
