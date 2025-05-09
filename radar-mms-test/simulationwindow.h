#ifndef SIMULATIONWINDOW_H
#define SIMULATIONWINDOW_H

#include <QDialog>
#include "conditioner.h"

namespace Ui {
class SimulationWindow;
}

class SimulationWindow : public QDialog
{
    Q_OBJECT

public:
    SimulationWindow(QWidget *parent = nullptr);
    ~SimulationWindow();

    double temperature() const;
    double humidity() const;
    double pressure() const;
    TemperatureUnit temperatureUnit() const;
    PressureUnit pressureUnit() const;

private:
    Ui::SimulationWindow *ui;
};

#endif // SIMULATIONWINDOW_H
