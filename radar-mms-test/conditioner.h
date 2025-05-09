#pragma once

#include <QString>
#include <QMap>
#include <algorithm>

#ifndef CONDITIONER_H
#define CONDITIONER_H

enum class AirDirection{
    AUTO = 0,
    DOWN,
    UP
};

enum class TemperatureUnit{
    CELSIUS = 0,
    FAHRENHEIT,
    KELVIN
};

enum class PressureUnit{
    PASCAL = 0,
    MM_HG
};


class Conditioner
{
public:
    Conditioner() {}

    void TurnOn(){
        if(!is_on_){
            is_on_ = true;
        }
    }

    void TurnOff(){
        if(is_on_){
            is_on_ = false;
        }
    }

    bool IsOn() const {
        return is_on_;
    }

    //-----------------//

    void SetTemperature(double value, TemperatureUnit unit){
        temperature_celsius_= ConvertToCelsius(value, unit);
    }

    double GetTemperature(TemperatureUnit unit) const {
        return ConvertFromCelsius(temperature_celsius_, unit);
    }

    TemperatureUnit TemperatureUnitFromString(const QString& temperatureStr) const {
        QString str = temperatureStr.trimmed().toUpper();

        if (str == "°C" || str == "C") return TemperatureUnit::CELSIUS;
        if (str == "°F" || str == "F") return TemperatureUnit::FAHRENHEIT;
        if (str == "K") return TemperatureUnit::KELVIN;

        return TemperatureUnit::CELSIUS;
    }

    QString TemperatureUnitToString(TemperatureUnit unit) const {
        static const QMap<TemperatureUnit, QString> unitToString = {
            {TemperatureUnit::CELSIUS,    "°C"},
            {TemperatureUnit::FAHRENHEIT, "°F"},
            {TemperatureUnit::KELVIN,     "K"}
        };

        return unitToString.value(unit, "°C"); // "°C" по умолчанию
    }

    //-----------------//

    void SetPressure(double value, PressureUnit unit){
        pressure_pascal_ = ConvertPressure(pressure_pascal_, unit, PressureUnit::PASCAL);
    }

    double GetPressure(PressureUnit unit) const {
        return ConvertPressure(pressure_pascal_, PressureUnit::PASCAL, unit);
    }

    PressureUnit PressureUnitFromString(const QString& pressureStr) const {
        QString str = pressureStr.trimmed().toLower();

        if (str == "па") {
            return PressureUnit::PASCAL;
        }
        if (str == "мм рт.ст.") {
            return PressureUnit::MM_HG;
        }

        return PressureUnit::PASCAL;
    }

    //-----------------//

    void SetHumidity(double value){
        humidity_ = std::clamp(value, 0.0, 100.0);
    }

    double GetHumidity() const {
        return humidity_;
    }

    //-----------------//

    void SetAirDirection(AirDirection direction){
        direction_ = direction;
    }

    AirDirection GetAirDirection() const {
        return direction_;
    }

    QString AirDirectionUnitToString(){
        static const QMap<AirDirection, QString> directions = {
            {AirDirection::AUTO, "Авто"},
            {AirDirection::UP, "Вверх"},
            {AirDirection::DOWN, "Вниз"}
        };
        return directions.value(direction_);
    }

    AirDirection AirDirectionUnitFromString(const QString& directionStr) {
        static const QMap<QString, AirDirection> directions = {
            {"Авто", AirDirection::AUTO},
            {"Вверх", AirDirection::UP},
            {"Вниз", AirDirection::DOWN}
        };
        return directions.value(directionStr.trimmed(), AirDirection::AUTO);
    }

private:
    double ConvertToCelsius(double value, TemperatureUnit unit) const {
        switch (unit) {
        case TemperatureUnit::FAHRENHEIT: return (value - 32) * 5.0 / 9.0;
        case TemperatureUnit::KELVIN:     return value - 273.15;
        default:                          return value;
        }
    }

    double ConvertFromCelsius(double celsius, TemperatureUnit unit) const {
        switch (unit) {
        case TemperatureUnit::FAHRENHEIT: return celsius * 9.0 / 5.0 + 32;
        case TemperatureUnit::KELVIN:     return celsius + 273.15;
        default:                          return celsius;
        }
    }

    double ConvertPressure(double value, PressureUnit from_unit, PressureUnit to_unit) const {
        if (from_unit == to_unit) return value;
        const double pascal = (from_unit == PressureUnit::MM_HG) ? value * 133.322 : value;
        return (to_unit == PressureUnit::MM_HG) ? pascal / 133.322 : pascal;
    }

    double temperature_celsius_ = 25.0;
    double humidity_ = 50.0;
    double pressure_pascal_ = 101325.0;
    bool is_on_ = false;
    AirDirection direction_ = AirDirection::AUTO;
};


#endif // CONDITIONER_H
