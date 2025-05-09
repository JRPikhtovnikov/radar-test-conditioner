#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "conditioner.h"
#include "dataprovider.h"
#include "thememanager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void SetStatus(bool status);
    void GetConditionerInfo();
    void ApplyUserSettings(const DataProvider::UserSettings& settings);
    DataProvider::UserSettings GetCurrentSettings() const;

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_btn_power_clicked();
    void on_cb_tempUnit_currentTextChanged();
    void on_cb_pressureUnit_currentTextChanged();
    void on_btn_theme_clicked();
    void on_btn_operatorWindow_clicked();
    void on_sb_temp_textChanged(const QString &value);

private:
    Ui::MainWindow *ui;
    Conditioner conditioner_;
    DataProvider data_provider_;
    ThemeManager theme_manager_;
};

#endif // MAINWINDOW_H
