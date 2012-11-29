/********************************************************************************
** Form generated from reading UI file 'Settings.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *vboxLayout;
    QPushButton *ui_recalibrateMotorsButton;
    QSpacerItem *spacerItem;
    QPushButton *ui_recalibrateAccelerometerButton;
    QSpacerItem *spacerItem1;
    QPushButton *ui_recalibrateTouchscreenButton;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QPushButton *ui_resetPIDButton;
    QPushButton *ui_brightnessButton;
    QPushButton *ui_cameraDefaultButton;
    QPushButton *ui_volumeButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *ui_consoleShowBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(320, 213);
        Settings->setMinimumSize(QSize(320, 213));
        Settings->setMaximumSize(QSize(320, 213));
        verticalLayout = new QVBoxLayout(Settings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        ui_recalibrateMotorsButton = new QPushButton(Settings);
        ui_recalibrateMotorsButton->setObjectName(QString::fromUtf8("ui_recalibrateMotorsButton"));
        ui_recalibrateMotorsButton->setEnabled(true);
        ui_recalibrateMotorsButton->setMinimumSize(QSize(160, 30));
        ui_recalibrateMotorsButton->setMaximumSize(QSize(160, 30));

        vboxLayout->addWidget(ui_recalibrateMotorsButton);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        ui_recalibrateAccelerometerButton = new QPushButton(Settings);
        ui_recalibrateAccelerometerButton->setObjectName(QString::fromUtf8("ui_recalibrateAccelerometerButton"));
        ui_recalibrateAccelerometerButton->setEnabled(true);
        ui_recalibrateAccelerometerButton->setMinimumSize(QSize(160, 30));
        ui_recalibrateAccelerometerButton->setMaximumSize(QSize(160, 30));
        ui_recalibrateAccelerometerButton->setIconSize(QSize(30, 30));

        vboxLayout->addWidget(ui_recalibrateAccelerometerButton);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        ui_recalibrateTouchscreenButton = new QPushButton(Settings);
        ui_recalibrateTouchscreenButton->setObjectName(QString::fromUtf8("ui_recalibrateTouchscreenButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(160);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(ui_recalibrateTouchscreenButton->sizePolicy().hasHeightForWidth());
        ui_recalibrateTouchscreenButton->setSizePolicy(sizePolicy);
        ui_recalibrateTouchscreenButton->setMinimumSize(QSize(160, 30));
        ui_recalibrateTouchscreenButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet160x30L.png);\n"
"color:black;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet160x30D.png);\n"
"color:white;\n"
"font-size:12pt;\n"
"}"));

        vboxLayout->addWidget(ui_recalibrateTouchscreenButton);


        horizontalLayout_2->addLayout(vboxLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ui_resetPIDButton = new QPushButton(Settings);
        ui_resetPIDButton->setObjectName(QString::fromUtf8("ui_resetPIDButton"));
        ui_resetPIDButton->setMinimumSize(QSize(95, 30));
        ui_resetPIDButton->setMaximumSize(QSize(95, 30));
        ui_resetPIDButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}"));

        gridLayout->addWidget(ui_resetPIDButton, 2, 1, 1, 1);

        ui_brightnessButton = new QPushButton(Settings);
        ui_brightnessButton->setObjectName(QString::fromUtf8("ui_brightnessButton"));
        ui_brightnessButton->setMinimumSize(QSize(95, 30));
        ui_brightnessButton->setMaximumSize(QSize(95, 30));
        ui_brightnessButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}"));

        gridLayout->addWidget(ui_brightnessButton, 1, 0, 1, 1);

        ui_cameraDefaultButton = new QPushButton(Settings);
        ui_cameraDefaultButton->setObjectName(QString::fromUtf8("ui_cameraDefaultButton"));
        ui_cameraDefaultButton->setMinimumSize(QSize(95, 30));
        ui_cameraDefaultButton->setMaximumSize(QSize(95, 30));
        ui_cameraDefaultButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}"));

        gridLayout->addWidget(ui_cameraDefaultButton, 1, 1, 1, 1);

        ui_volumeButton = new QPushButton(Settings);
        ui_volumeButton->setObjectName(QString::fromUtf8("ui_volumeButton"));
        ui_volumeButton->setMinimumSize(QSize(95, 30));
        ui_volumeButton->setMaximumSize(QSize(95, 30));
        ui_volumeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}"));

        gridLayout->addWidget(ui_volumeButton, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ui_consoleShowBox = new QCheckBox(Settings);
        ui_consoleShowBox->setObjectName(QString::fromUtf8("ui_consoleShowBox"));
        ui_consoleShowBox->setLayoutDirection(Qt::RightToLeft);
        ui_consoleShowBox->setChecked(true);

        horizontalLayout->addWidget(ui_consoleShowBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", 0, QApplication::UnicodeUTF8));
        ui_recalibrateMotorsButton->setStyleSheet(QApplication::translate("Settings", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet160x30L.png);\n"
"color:black;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet160x30D.png);\n"
"color:white;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_recalibrateMotorsButton->setText(QApplication::translate("Settings", "Recalibrate Motors", 0, QApplication::UnicodeUTF8));
        ui_recalibrateAccelerometerButton->setStyleSheet(QApplication::translate("Settings", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet160x30L.png);\n"
"color:black;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet160x30D.png);\n"
"color:white;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_recalibrateAccelerometerButton->setText(QApplication::translate("Settings", "Recal. Accelerometer", 0, QApplication::UnicodeUTF8));
        ui_recalibrateTouchscreenButton->setText(QApplication::translate("Settings", "Recal. Touch Screen", 0, QApplication::UnicodeUTF8));
        ui_resetPIDButton->setText(QApplication::translate("Settings", "Reset PID", 0, QApplication::UnicodeUTF8));
        ui_brightnessButton->setText(QApplication::translate("Settings", "Brightness", 0, QApplication::UnicodeUTF8));
        ui_cameraDefaultButton->setText(QApplication::translate("Settings", "Vision Defaults", 0, QApplication::UnicodeUTF8));
        ui_volumeButton->setText(QApplication::translate("Settings", "Volume", 0, QApplication::UnicodeUTF8));
        ui_consoleShowBox->setText(QApplication::translate("Settings", "Show Console on Run", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
