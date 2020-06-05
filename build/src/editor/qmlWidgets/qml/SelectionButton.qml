import QtQuick 2.14
import QtQuick.Controls 1.4
import "InternalPalette.js" as Palette

Rectangle
{
    width: 100
    height: 100
    color: Palette.item.clear

    Rectangle
    {
        anchors.centerIn: parent
        width: 96
        height: 96
        color: "#82a6cb"
        border.color: "#5a7ea3"
        border.width: 5
        radius: 10
    }

    Rectangle
    {
        id: iconBox

        width: 46
        height: 46
        anchors.top: parent.top
        anchors.topMargin: 16
        anchors.horizontalCenter: parent.horizontalCenter
        color: Palette.item.clear
        
        Image
        {
            anchors.fill: parent
            source: "qrc:/img/pallet.png"
        }
    }

    Text
    {
        anchors.top: iconBox.bottom
        anchors.topMargin: 4
        anchors.horizontalCenter: parent.horizontalCenter

        text: "Color Palette"
    }
}

//d9d9d9
//b7b7b7

//5a7ea3
//6e92b7

//5a7ea3
//82a6cb

//t
//535353
//1e4267
