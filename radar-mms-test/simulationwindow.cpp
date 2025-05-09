#include "simulationwindow.h"
#include "ui_simulationwindow.h"

SimulationWindow::SimulationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SimulationWindow)
{
    ui->setupUi(this);

    connect(ui->applyButton, &QPushButton::clicked, this, &QDialog::accept);
    connect(ui->cancelButton, &QPushButton::clicked, this, &QDialog::reject);
}

SimulationWindow::~SimulationWindow()
{
    delete ui;
}

double SimulationWindow::temperature() const {
    return ui->tempSpin->value();
}

double SimulationWindow::humidity() const {
    return ui->humiditySpin->value();
}

double SimulationWindow::pressure() const {
    return ui->pressureSpin->value();
}

TemperatureUnit SimulationWindow::temperatureUnit() const {
    return static_cast<TemperatureUnit>(ui->tempUnitCombo->currentIndex());
}

PressureUnit SimulationWindow::pressureUnit() const {
    return static_cast<PressureUnit>(ui->pressureUnitCombo->currentIndex());
}
