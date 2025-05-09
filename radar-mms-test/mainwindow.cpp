#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "simulationwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , data_provider_()
{
    ui->setupUi(this);
    theme_manager_.ApplyTheme(Theme::LIGHT);

    DataProvider::UserSettings settings = data_provider_.LoadSettings();
    ApplyUserSettings(settings);

    SetStatus(conditioner_.IsOn());
    GetConditionerInfo();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ApplyUserSettings(const DataProvider::UserSettings& settings)
{
    ui->cb_tempUnit->blockSignals(true);
    ui->cb_pressureUnit->blockSignals(true);

    ui->cb_tempUnit->setCurrentIndex(static_cast<int>(settings.temp_unit));
    ui->cb_pressureUnit->setCurrentIndex(static_cast<int>(settings.press_unit));

    ui->cb_tempUnit->blockSignals(false);
    ui->cb_pressureUnit->blockSignals(false);

    GetConditionerInfo();
}

DataProvider::UserSettings MainWindow::GetCurrentSettings() const
{
    DataProvider::UserSettings settings;
    settings.temp_unit = conditioner_.TemperatureUnitFromString(ui->cb_tempUnit->currentText());
    settings.press_unit = conditioner_.PressureUnitFromString(ui->cb_pressureUnit->currentText());
    return settings;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    data_provider_.SaveSettings(GetCurrentSettings());
    QMainWindow::closeEvent(event);
}

void MainWindow::SetStatus(bool status){
    ui->sb_temp->setEnabled(status);
    ui->cb_airDirect->setEnabled(status);
    ui->gb_sensors->setEnabled(status);
    ui->btn_operatorWindow->setEnabled(status);
}

void MainWindow::GetConditionerInfo()
{
    auto temperature = conditioner_.GetTemperature(conditioner_.TemperatureUnitFromString(ui->cb_tempUnit->currentText()));
    auto pressure = conditioner_.GetPressure(conditioner_.PressureUnitFromString(ui->cb_pressureUnit->currentText()));
    auto humidity = conditioner_.GetHumidity();

    ui->lbl_tempVal->setText(QString::number(temperature, 'f', 2));
    ui->lbl_pressureVal->setText(QString::number(pressure, 'f', 2));
    ui->lbl_humidityVal->setText(QString::number(humidity, 'f', 1) + "%");
    ui->sb_temp->setValue(conditioner_.GetTemperature(TemperatureUnit::CELSIUS));
}

void MainWindow::on_btn_power_clicked()
{
    bool is_on = conditioner_.IsOn();
    if(!is_on){
        conditioner_.TurnOn();
        ui->btn_power->setText("Выключить");
        SetStatus(true);
    }else{
        conditioner_.TurnOff();
        ui->btn_power->setText("Включить");
        SetStatus(false);
    }
}

void MainWindow::on_cb_tempUnit_currentTextChanged()
{
    GetConditionerInfo();
}

void MainWindow::on_cb_pressureUnit_currentTextChanged()
{
    GetConditionerInfo();
}

void MainWindow::on_btn_theme_clicked()
{
    Theme theme = (theme_manager_.GetTheme() == Theme::DARK)
    ? Theme::LIGHT
    : Theme::DARK;

    theme_manager_.ApplyTheme(theme);
    ui->btn_theme->setText(theme_manager_.GetCurrentThemeString() + " тема");
}

void MainWindow::on_btn_operatorWindow_clicked()
{
    SimulationWindow simWindow(this);
    simWindow.setModal(true);

    if (simWindow.exec() == QDialog::Accepted) {
        conditioner_.SetTemperature(simWindow.temperature(), simWindow.temperatureUnit());
        conditioner_.SetHumidity(simWindow.humidity());
        conditioner_.SetPressure(simWindow.pressure(), simWindow.pressureUnit());

        GetConditionerInfo();
    }
}

void MainWindow::on_sb_temp_textChanged(const QString &value)
{
    conditioner_.SetTemperature(ui->sb_temp->value(), TemperatureUnit::CELSIUS);
    GetConditionerInfo();
}

