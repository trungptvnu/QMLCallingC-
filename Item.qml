import QtQuick 2.0
// This is available in all editors.
Rectangle
{

    id: rect
    color: "red"
    width: 200
    height: 200
    MouseArea
    {
        id: mouseArea
        anchors.fill: parent
        onClicked:
        {
            console.log(applicationData.print())
        }
    }
}
