/*************************************************************************
 *
 * Copyright (c) 2018 Qt Company
 * All rights reserved.
 *
 * See the LICENSE.txt file shipped along with this file for the license.
 *
 *************************************************************************/

import QtQuick 2.9

Component {
    Item {
        id: wrapper; width: wrapper.ListView.view.width; height: 86
        Item {
            id: moveMe
            Rectangle { color: "black"; opacity: index % 2 ? 0.2 : 0.4; height: 84; width: wrapper.width; y: 1 }
            Rectangle {
                x: 6; y: 4; width: 77; height: 77; color: "white"; smooth: true

                Image { source: imagePath; x: 1; y: 1 }
                Image { source: "images/gloss.png" }
            }
            Column {
                x: 92; width: wrapper.ListView.view.width - 95; y: 15; spacing: 2
                Text { text: title; color: "white"; width: parent.width; font.pixelSize: 14; font.bold: true; elide: Text.ElideRight; style: Text.Raised; styleColor: "black" }
                Text { text: photoAuthor; width: parent.width; font.pixelSize: 14; elide: Text.ElideLeft; color: "#cccccc"; style: Text.Raised; styleColor: "black" }
                Text { text: photoDate; width: parent.width; font.pixelSize: 14; elide: Text.ElideRight; color: "#cccccc"; style: Text.Raised; styleColor: "black" }
            }
        }
    }
}
