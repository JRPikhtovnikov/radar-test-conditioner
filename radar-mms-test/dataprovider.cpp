#include "dataprovider.h"
#include <QStandardPaths>
#include <QDir>
#include <QDebug>
#include <QCoreApplication>

DataProvider::DataProvider(QObject *parent) : QObject(parent) {}

void DataProvider::SaveSettings(const UserSettings& settings){
    QFile file(GetSettingsFilePath());
    if (!file.open(QIODevice::WriteOnly)) {
        qWarning() << "Ошибка открытия файла для записи";
        return;
    }

    QXmlStreamWriter writer(&file);
    writer.setAutoFormatting(true);
    writer.writeStartDocument();
    WriteSettingsToXml(writer, settings);
    writer.writeEndDocument();
    file.close();
}

DataProvider::UserSettings DataProvider::LoadSettings(){
    UserSettings settings;
    settings.temp_unit = TemperatureUnit::CELSIUS;
    settings.press_unit = PressureUnit::PASCAL;

    QFile file(GetSettingsFilePath());
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Не найдено настроек";
        return settings;
    }

    QXmlStreamReader reader(&file);
    while (!reader.atEnd() && !reader.hasError()) {
        if (reader.isStartElement() && reader.name() == QString("Settings")) {
            ReadSettingsFromXml(reader, settings);
        }
        reader.readNext();
    }

    if (reader.hasError()) {
        qWarning() << "XML ошибка:" << reader.errorString();
    }

    file.close();
    return settings;
}

QString DataProvider::GetSettingsFilePath(){
    QString dirPath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QDir dir(dirPath);
    if (!dir.exists()) {
        dir.mkpath(".");
    }
    return QCoreApplication::applicationDirPath() + "/user_settings.xml";
}

void DataProvider::WriteSettingsToXml(QXmlStreamWriter& writer, const UserSettings& settings){
    writer.writeStartElement("Settings");

    writer.writeStartElement("Temperature");
    writer.writeAttribute("unit", QString::number(static_cast<int>(settings.temp_unit)));
    writer.writeEndElement();

    writer.writeStartElement("Pressure");
    writer.writeAttribute("unit", QString::number(static_cast<int>(settings.press_unit)));
    writer.writeEndElement();

    writer.writeEndElement();
}

void DataProvider::ReadSettingsFromXml(QXmlStreamReader& reader, UserSettings& settings){
    while (!reader.atEnd() && !reader.hasError()) {
        reader.readNext();

        if (reader.isEndElement() && reader.name() == QString("Settings")) {
            break;
        }

        if (reader.isStartElement()) {
            if (reader.name() == QString("Temperature")) {
                QXmlStreamAttributes attrs = reader.attributes();
                if (attrs.hasAttribute("unit")) {
                    settings.temp_unit = static_cast<TemperatureUnit>(
                        attrs.value("unit").toInt());
                }
            }
            if (reader.name() == QString("Pressure")) {
                QXmlStreamAttributes attrs = reader.attributes();
                if (attrs.hasAttribute("unit")) {
                    settings.press_unit = static_cast<PressureUnit>(
                        attrs.value("unit").toInt());
                }
            }
        }
    }
}
