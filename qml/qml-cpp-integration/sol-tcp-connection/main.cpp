/*************************************************************************
 *
 * Copyright (c) 2018 Qt Company
 * All rights reserved.
 *
 * See the LICENSE.txt file shipped along with this file for the license.
 *
 *************************************************************************/

#include "tcpconnectionelement.h"
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QUrl>
#include <qqml.h> // for qmlRegisterType
#include "runtype.h"

#include <QtDebug>

int main(int argc, char *argv[])
{
    qmlRegisterType<TcpConnectionElement>("TCP", 1, 0, "TcpConnectionElement");
    QApplication app(argc, argv);
    QQmlApplicationEngine engine;
    RunType::Type type = RunType::Server;

    if (argc == 2) {
        if (qstrcmp(argv[1],"server") == 0)
            type = RunType::Server;
        else if (qstrcmp(argv[1],"client") == 0)
            type = RunType::Client;
        else
            qFatal("Please specify either client or server");
    }
    else
        type = RunType().getRunType();

    if (type == RunType::Client)
        engine.load(QUrl(QStringLiteral("qrc:/Client.qml")));
    else
        engine.load(QUrl(QStringLiteral("qrc:/Server.qml")));
    return app.exec();
}
