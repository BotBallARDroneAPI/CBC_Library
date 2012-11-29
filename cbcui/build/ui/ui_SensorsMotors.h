/********************************************************************************
** Form generated from reading UI file 'SensorsMotors.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORSMOTORS_H
#define UI_SENSORSMOTORS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SensorsMotors
{
public:
    QGridLayout *gridLayout;
    QPushButton *ui_sensorPortsButton;
    QPushButton *ui_graphButton;
    QPushButton *ui_motorsButton;
    QPushButton *ui_servosButton;

    void setupUi(QWidget *SensorsMotors)
    {
        if (SensorsMotors->objectName().isEmpty())
            SensorsMotors->setObjectName(QString::fromUtf8("SensorsMotors"));
        SensorsMotors->resize(320, 213);
        gridLayout = new QGridLayout(SensorsMotors);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ui_sensorPortsButton = new QPushButton(SensorsMotors);
        ui_sensorPortsButton->setObjectName(QString::fromUtf8("ui_sensorPortsButton"));
        ui_sensorPortsButton->setMinimumSize(QSize(95, 30));
        ui_sensorPortsButton->setMaximumSize(QSize(95, 30));

        gridLayout->addWidget(ui_sensorPortsButton, 0, 0, 1, 1);

        ui_graphButton = new QPushButton(SensorsMotors);
        ui_graphButton->setObjectName(QString::fromUtf8("ui_graphButton"));
        ui_graphButton->setMinimumSize(QSize(95, 30));
        ui_graphButton->setMaximumSize(QSize(95, 30));

        gridLayout->addWidget(ui_graphButton, 1, 0, 1, 1);

        ui_motorsButton = new QPushButton(SensorsMotors);
        ui_motorsButton->setObjectName(QString::fromUtf8("ui_motorsButton"));
        ui_motorsButton->setMinimumSize(QSize(95, 30));
        ui_motorsButton->setMaximumSize(QSize(95, 30));

        gridLayout->addWidget(ui_motorsButton, 0, 1, 1, 1);

        ui_servosButton = new QPushButton(SensorsMotors);
        ui_servosButton->setObjectName(QString::fromUtf8("ui_servosButton"));
        ui_servosButton->setMinimumSize(QSize(95, 30));
        ui_servosButton->setMaximumSize(QSize(95, 30));

        gridLayout->addWidget(ui_servosButton, 1, 1, 1, 1);


        retranslateUi(SensorsMotors);

        QMetaObject::connectSlotsByName(SensorsMotors);
    } // setupUi

    void retranslateUi(QWidget *SensorsMotors)
    {
        SensorsMotors->setWindowTitle(QApplication::translate("SensorsMotors", "Form", 0, QApplication::UnicodeUTF8));
        ui_sensorPortsButton->setStyleSheet(QApplication::translate("SensorsMotors", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30L.png);\n"
"color:black;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30D.png);\n"
"color:white;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_sensorPortsButton->setText(QApplication::translate("SensorsMotors", "Sensor Ports", 0, QApplication::UnicodeUTF8));
        ui_graphButton->setStyleSheet(QApplication::translate("SensorsMotors", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30L.png);\n"
"color:black;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30D.png);\n"
"color:white;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_graphButton->setText(QApplication::translate("SensorsMotors", "Graph", 0, QApplication::UnicodeUTF8));
        ui_motorsButton->setStyleSheet(QApplication::translate("SensorsMotors", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30L.png);\n"
"color:black;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30D.png);\n"
"color:white;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_motorsButton->setText(QApplication::translate("SensorsMotors", "Motors", 0, QApplication::UnicodeUTF8));
        ui_servosButton->setStyleSheet(QApplication::translate("SensorsMotors", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30L.png);\n"
"color:black;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30D.png);\n"
"color:white;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_servosButton->setText(QApplication::translate("SensorsMotors", "Servos", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SensorsMotors: public Ui_SensorsMotors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORSMOTORS_H
