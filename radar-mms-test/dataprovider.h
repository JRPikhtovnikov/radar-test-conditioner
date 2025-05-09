#pragma once

#ifndef DATAPROVIDER_H
#define DATAPROVIDER_H

#include <QObject>
#include <QString>
#include <QFile>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include "conditioner.h"

class DataProvider : public QObject
{
    Q_OBJECT

public:

    struct UserSettings {
        TemperatureUnit temp_unit;
        PressureUnit press_unit;
    };

    explicit DataProvider(QObject *parent = nullptr);

    void SaveSettings(const UserSettings& settings);
    UserSettings LoadSettings();
    static QString GetSettingsFilePath();

private:
    void WriteSettingsToXml(QXmlStreamWriter& writer, const UserSettings& settings);
    void ReadSettingsFromXml(QXmlStreamReader& reader, UserSettings& settings);
};

#endif // DATAPROVIDER_H
