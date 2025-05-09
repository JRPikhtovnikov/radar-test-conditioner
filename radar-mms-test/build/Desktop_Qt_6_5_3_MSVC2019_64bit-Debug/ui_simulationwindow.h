/********************************************************************************
** Form generated from reading UI file 'simulationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATIONWINDOW_H
#define UI_SIMULATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SimulationWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *tempGroup;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *tempSpin;
    QComboBox *tempUnitCombo;
    QGroupBox *humidityGroup;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *humiditySpin;
    QGroupBox *pressureGroup;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *pressureSpin;
    QComboBox *pressureUnitCombo;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *applyButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *SimulationWindow)
    {
        if (SimulationWindow->objectName().isEmpty())
            SimulationWindow->setObjectName("SimulationWindow");
        SimulationWindow->resize(400, 300);
        SimulationWindow->setMinimumSize(QSize(400, 300));
        SimulationWindow->setMaximumSize(QSize(400, 300));
        SimulationWindow->setModal(true);
        verticalLayout = new QVBoxLayout(SimulationWindow);
        verticalLayout->setObjectName("verticalLayout");
        tempGroup = new QGroupBox(SimulationWindow);
        tempGroup->setObjectName("tempGroup");
        horizontalLayout = new QHBoxLayout(tempGroup);
        horizontalLayout->setObjectName("horizontalLayout");
        tempSpin = new QDoubleSpinBox(tempGroup);
        tempSpin->setObjectName("tempSpin");
        tempSpin->setDecimals(2);
        tempSpin->setMinimum(-273.149999999999977);
        tempSpin->setMaximum(1000.000000000000000);
        tempSpin->setValue(25.000000000000000);

        horizontalLayout->addWidget(tempSpin);

        tempUnitCombo = new QComboBox(tempGroup);
        tempUnitCombo->addItem(QString());
        tempUnitCombo->addItem(QString());
        tempUnitCombo->addItem(QString());
        tempUnitCombo->setObjectName("tempUnitCombo");

        horizontalLayout->addWidget(tempUnitCombo);


        verticalLayout->addWidget(tempGroup);

        humidityGroup = new QGroupBox(SimulationWindow);
        humidityGroup->setObjectName("humidityGroup");
        horizontalLayout_2 = new QHBoxLayout(humidityGroup);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        humiditySpin = new QDoubleSpinBox(humidityGroup);
        humiditySpin->setObjectName("humiditySpin");
        humiditySpin->setDecimals(1);
        humiditySpin->setMinimum(0.000000000000000);
        humiditySpin->setMaximum(100.000000000000000);
        humiditySpin->setValue(50.000000000000000);

        horizontalLayout_2->addWidget(humiditySpin);


        verticalLayout->addWidget(humidityGroup);

        pressureGroup = new QGroupBox(SimulationWindow);
        pressureGroup->setObjectName("pressureGroup");
        horizontalLayout_3 = new QHBoxLayout(pressureGroup);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pressureSpin = new QDoubleSpinBox(pressureGroup);
        pressureSpin->setObjectName("pressureSpin");
        pressureSpin->setDecimals(2);
        pressureSpin->setMinimum(0.000000000000000);
        pressureSpin->setMaximum(200000.000000000000000);
        pressureSpin->setValue(101325.000000000000000);

        horizontalLayout_3->addWidget(pressureSpin);

        pressureUnitCombo = new QComboBox(pressureGroup);
        pressureUnitCombo->addItem(QString());
        pressureUnitCombo->addItem(QString());
        pressureUnitCombo->setObjectName("pressureUnitCombo");

        horizontalLayout_3->addWidget(pressureUnitCombo);


        verticalLayout->addWidget(pressureGroup);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        applyButton = new QPushButton(SimulationWindow);
        applyButton->setObjectName("applyButton");

        horizontalLayout_4->addWidget(applyButton);

        cancelButton = new QPushButton(SimulationWindow);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_4->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(SimulationWindow);

        QMetaObject::connectSlotsByName(SimulationWindow);
    } // setupUi

    void retranslateUi(QDialog *SimulationWindow)
    {
        SimulationWindow->setWindowTitle(QCoreApplication::translate("SimulationWindow", "\320\241\320\270\320\274\321\203\320\273\321\217\321\206\320\270\321\217 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262", nullptr));
        tempGroup->setTitle(QCoreApplication::translate("SimulationWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        tempUnitCombo->setItemText(0, QCoreApplication::translate("SimulationWindow", "\302\260C (\320\246\320\265\320\273\321\214\321\201\320\270\320\271)", nullptr));
        tempUnitCombo->setItemText(1, QCoreApplication::translate("SimulationWindow", "\302\260F (\320\244\320\260\321\200\320\265\320\275\320\263\320\265\320\271\321\202)", nullptr));
        tempUnitCombo->setItemText(2, QCoreApplication::translate("SimulationWindow", "K (\320\232\320\265\320\273\321\214\320\262\320\270\320\275)", nullptr));

        humidityGroup->setTitle(QCoreApplication::translate("SimulationWindow", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        humiditySpin->setSuffix(QCoreApplication::translate("SimulationWindow", "%", nullptr));
        pressureGroup->setTitle(QCoreApplication::translate("SimulationWindow", "\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        pressureUnitCombo->setItemText(0, QCoreApplication::translate("SimulationWindow", "\320\237\320\260 (\320\237\320\260\321\201\320\272\320\260\320\273\321\214)", nullptr));
        pressureUnitCombo->setItemText(1, QCoreApplication::translate("SimulationWindow", "\320\274\320\274 \321\200\321\202.\321\201\321\202.", nullptr));

        applyButton->setText(QCoreApplication::translate("SimulationWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        cancelButton->setText(QCoreApplication::translate("SimulationWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimulationWindow: public Ui_SimulationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATIONWINDOW_H
