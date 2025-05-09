/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *mainLayout;
    QTabWidget *tabWidget;
    QWidget *controlTab;
    QVBoxLayout *verticalLayout;
    QGroupBox *controlGroup;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_power;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_temp2;
    QSpinBox *sb_temp;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_direct;
    QComboBox *cb_airDirect;
    QGroupBox *gb_sensors;
    QGridLayout *gridLayout;
    QComboBox *cb_pressureUnit;
    QLabel *lbl_pressure;
    QLabel *lbl_temp1;
    QLabel *lbl_humidity;
    QComboBox *cb_tempUnit;
    QLabel *lbl_humidityVal;
    QLabel *lbl_pressureVal;
    QLabel *lbl_tempVal;
    QGroupBox *blocksGroup;
    QVBoxLayout *verticalLayout_3;
    QGraphicsView *blocksView;
    QWidget *settingsTab;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btn_theme;
    QPushButton *btn_operatorWindow;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(1024, 768));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mainLayout = new QVBoxLayout(centralwidget);
        mainLayout->setObjectName("mainLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        controlTab = new QWidget();
        controlTab->setObjectName("controlTab");
        verticalLayout = new QVBoxLayout(controlTab);
        verticalLayout->setObjectName("verticalLayout");
        controlGroup = new QGroupBox(controlTab);
        controlGroup->setObjectName("controlGroup");
        verticalLayout_2 = new QVBoxLayout(controlGroup);
        verticalLayout_2->setObjectName("verticalLayout_2");
        btn_power = new QPushButton(controlGroup);
        btn_power->setObjectName("btn_power");
        btn_power->setCheckable(true);

        verticalLayout_2->addWidget(btn_power);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lbl_temp2 = new QLabel(controlGroup);
        lbl_temp2->setObjectName("lbl_temp2");

        horizontalLayout->addWidget(lbl_temp2);

        sb_temp = new QSpinBox(controlGroup);
        sb_temp->setObjectName("sb_temp");
        sb_temp->setMinimum(10);
        sb_temp->setMaximum(30);
        sb_temp->setValue(22);

        horizontalLayout->addWidget(sb_temp);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lbl_direct = new QLabel(controlGroup);
        lbl_direct->setObjectName("lbl_direct");

        horizontalLayout_2->addWidget(lbl_direct);

        cb_airDirect = new QComboBox(controlGroup);
        cb_airDirect->addItem(QString());
        cb_airDirect->addItem(QString());
        cb_airDirect->addItem(QString());
        cb_airDirect->setObjectName("cb_airDirect");

        horizontalLayout_2->addWidget(cb_airDirect);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(controlGroup);

        gb_sensors = new QGroupBox(controlTab);
        gb_sensors->setObjectName("gb_sensors");
        gridLayout = new QGridLayout(gb_sensors);
        gridLayout->setObjectName("gridLayout");
        cb_pressureUnit = new QComboBox(gb_sensors);
        cb_pressureUnit->addItem(QString());
        cb_pressureUnit->addItem(QString());
        cb_pressureUnit->setObjectName("cb_pressureUnit");

        gridLayout->addWidget(cb_pressureUnit, 2, 2, 1, 1);

        lbl_pressure = new QLabel(gb_sensors);
        lbl_pressure->setObjectName("lbl_pressure");

        gridLayout->addWidget(lbl_pressure, 2, 0, 1, 1);

        lbl_temp1 = new QLabel(gb_sensors);
        lbl_temp1->setObjectName("lbl_temp1");

        gridLayout->addWidget(lbl_temp1, 0, 0, 1, 1);

        lbl_humidity = new QLabel(gb_sensors);
        lbl_humidity->setObjectName("lbl_humidity");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_humidity->sizePolicy().hasHeightForWidth());
        lbl_humidity->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lbl_humidity, 1, 0, 1, 1);

        cb_tempUnit = new QComboBox(gb_sensors);
        cb_tempUnit->addItem(QString());
        cb_tempUnit->addItem(QString());
        cb_tempUnit->addItem(QString());
        cb_tempUnit->setObjectName("cb_tempUnit");

        gridLayout->addWidget(cb_tempUnit, 0, 2, 1, 1);

        lbl_humidityVal = new QLabel(gb_sensors);
        lbl_humidityVal->setObjectName("lbl_humidityVal");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_humidityVal->sizePolicy().hasHeightForWidth());
        lbl_humidityVal->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        lbl_humidityVal->setFont(font);

        gridLayout->addWidget(lbl_humidityVal, 1, 1, 1, 1);

        lbl_pressureVal = new QLabel(gb_sensors);
        lbl_pressureVal->setObjectName("lbl_pressureVal");
        lbl_pressureVal->setFont(font);

        gridLayout->addWidget(lbl_pressureVal, 2, 1, 1, 1);

        lbl_tempVal = new QLabel(gb_sensors);
        lbl_tempVal->setObjectName("lbl_tempVal");
        lbl_tempVal->setFont(font);

        gridLayout->addWidget(lbl_tempVal, 0, 1, 1, 1);


        verticalLayout->addWidget(gb_sensors);

        blocksGroup = new QGroupBox(controlTab);
        blocksGroup->setObjectName("blocksGroup");
        verticalLayout_3 = new QVBoxLayout(blocksGroup);
        verticalLayout_3->setObjectName("verticalLayout_3");
        blocksView = new QGraphicsView(blocksGroup);
        blocksView->setObjectName("blocksView");
        blocksView->setMinimumSize(QSize(0, 100));

        verticalLayout_3->addWidget(blocksView);


        verticalLayout->addWidget(blocksGroup);

        tabWidget->addTab(controlTab, QString());
        settingsTab = new QWidget();
        settingsTab->setObjectName("settingsTab");
        verticalLayout_4 = new QVBoxLayout(settingsTab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        btn_theme = new QPushButton(settingsTab);
        btn_theme->setObjectName("btn_theme");

        verticalLayout_4->addWidget(btn_theme);

        btn_operatorWindow = new QPushButton(settingsTab);
        btn_operatorWindow->setObjectName("btn_operatorWindow");

        verticalLayout_4->addWidget(btn_operatorWindow);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(settingsTab, QString());

        mainLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\272\320\276\320\275\320\264\320\270\321\206\320\270\320\276\320\275\320\265\321\200\320\276\320\274", nullptr));
        controlGroup->setTitle(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        btn_power->setText(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214", nullptr));
        lbl_temp2->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260:", nullptr));
        sb_temp->setSuffix(QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
        lbl_direct->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265:", nullptr));
        cb_airDirect->setItemText(0, QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276", nullptr));
        cb_airDirect->setItemText(1, QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\200\321\205", nullptr));
        cb_airDirect->setItemText(2, QCoreApplication::translate("MainWindow", "\320\222\320\275\320\270\320\267", nullptr));

        gb_sensors->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\320\275\320\270\321\217", nullptr));
        cb_pressureUnit->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\260", nullptr));
        cb_pressureUnit->setItemText(1, QCoreApplication::translate("MainWindow", "\320\274\320\274 \321\200\321\202.\321\201\321\202.", nullptr));

        lbl_pressure->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265:", nullptr));
        lbl_temp1->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260:", nullptr));
        lbl_humidity->setText(QCoreApplication::translate("MainWindow", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214: ", nullptr));
        cb_tempUnit->setItemText(0, QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
        cb_tempUnit->setItemText(1, QCoreApplication::translate("MainWindow", "\302\260F", nullptr));
        cb_tempUnit->setItemText(2, QCoreApplication::translate("MainWindow", "K", nullptr));

        lbl_humidityVal->setText(QCoreApplication::translate("MainWindow", "value", nullptr));
        lbl_pressureVal->setText(QCoreApplication::translate("MainWindow", "value", nullptr));
        lbl_tempVal->setText(QCoreApplication::translate("MainWindow", "value", nullptr));
        blocksGroup->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(controlTab), QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        btn_theme->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\275\320\260\321\217 \321\202\320\265\320\274\320\260", nullptr));
        btn_operatorWindow->setText(QCoreApplication::translate("MainWindow", "\320\236\320\272\320\275\320\276 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(settingsTab), QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
