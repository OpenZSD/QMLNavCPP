import QtQuick 2.14
import QtQuick.Controls 1.4
import QtQml.Models 2.14
import QtQuick.Controls.Styles 1.4
import "."

Rectangle
{
    SystemPalette
    { 
        id: myPalette
        colorGroup: SystemPalette.Active
    }

    color: myPalette.window
    ScrollView
    {
        anchors.fill: parent
        anchors.topMargin: 10

        ListView
        {
            anchors.fill: parent

            delegate: SelectionButton {
            }

            model: ListModel{
                ListElement { color: "red" }
            }
        }
    }
}
