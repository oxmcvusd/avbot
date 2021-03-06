﻿/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -v org.avplayer.avbot.xml -a avbotrpc_adaptor -i dbusrpc.hpp
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "avbotrpc_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class AvbotAdaptor
 */

AvbotAdaptor::AvbotAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

AvbotAdaptor::~AvbotAdaptor()
{
    // destructor
}

int AvbotAdaptor::add_qq_account(const QString &qqnumber, const QString &qqpassword)
{
    // handle method call org.avplayer.avbot.add_qq_account
    int out0;
    QMetaObject::invokeMethod(parent(), "add_qq_account", Q_RETURN_ARG(int, out0), Q_ARG(QString, qqnumber), Q_ARG(QString, qqpassword));
    return out0;
}

void AvbotAdaptor::quit()
{
    // handle method call org.avplayer.avbot.quit
    QMetaObject::invokeMethod(parent(), "quit");
}

SearchResult AvbotAdaptor::search(const QString &searchstring)
{
    // handle method call org.avplayer.avbot.search
    SearchResult out0;
    QMetaObject::invokeMethod(parent(), "search", Q_RETURN_ARG(SearchResult, out0), Q_ARG(QString, searchstring));
    return out0;
}

