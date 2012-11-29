/********************************************************************************
** Form generated from reading UI file 'Brightness.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRIGHTNESS_H
#define UI_BRIGHTNESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Brightness
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *ui_brightnessLabel;
    QSlider *ui_brightness;
    QSpacerItem *verticalSpacer_2;
    QLabel *ui_dimTime;
    QComboBox *ui_dimCombo;
    QHBoxLayout *horizontalLayout;
    QCheckBox *ui_dimCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Brightness)
    {
        if (Brightness->objectName().isEmpty())
            Brightness->setObjectName(QString::fromUtf8("Brightness"));
        Brightness->resize(320, 213);
        Brightness->setMinimumSize(QSize(320, 213));
        Brightness->setMaximumSize(QSize(320, 213));
        gridLayout = new QGridLayout(Brightness);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        ui_brightnessLabel = new QLabel(Brightness);
        ui_brightnessLabel->setObjectName(QString::fromUtf8("ui_brightnessLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        ui_brightnessLabel->setFont(font);
        ui_brightnessLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(ui_brightnessLabel);

        ui_brightness = new QSlider(Brightness);
        ui_brightness->setObjectName(QString::fromUtf8("ui_brightness"));
        ui_brightness->setMinimumSize(QSize(150, 30));
        ui_brightness->setMaximumSize(QSize(200, 40));
        ui_brightness->setMinimum(0);
        ui_brightness->setMaximum(512);
        ui_brightness->setPageStep(20);
        ui_brightness->setValue(500);
        ui_brightness->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(ui_brightness);

        verticalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        ui_dimTime = new QLabel(Brightness);
        ui_dimTime->setObjectName(QString::fromUtf8("ui_dimTime"));
        QFont font1;
        font1.setPointSize(12);
        ui_dimTime->setFont(font1);
        ui_dimTime->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(ui_dimTime);

        ui_dimCombo = new QComboBox(Brightness);
        ui_dimCombo->setObjectName(QString::fromUtf8("ui_dimCombo"));
        ui_dimCombo->setMinimumSize(QSize(200, 20));
        ui_dimCombo->setMaximumSize(QSize(200, 40));
        ui_dimCombo->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_2->addWidget(ui_dimCombo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ui_dimCheckBox = new QCheckBox(Brightness);
        ui_dimCheckBox->setObjectName(QString::fromUtf8("ui_dimCheckBox"));
        ui_dimCheckBox->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(ui_dimCheckBox);

        horizontalSpacer_3 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        retranslateUi(Brightness);

        QMetaObject::connectSlotsByName(Brightness);
    } // setupUi

    void retranslateUi(QWidget *Brightness)
    {
        Brightness->setWindowTitle(QApplication::translate("Brightness", "Form", 0, QApplication::UnicodeUTF8));
        ui_brightnessLabel->setText(QApplication::translate("Brightness", "Brightness", 0, QApplication::UnicodeUTF8));
        ui_dimTime->setText(QApplication::translate("Brightness", "Auto Dim Delay", 0, QApplication::UnicodeUTF8));
        ui_dimCheckBox->setText(QApplication::translate("Brightness", "Screen off when dim", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Brightness: public Ui_Brightness {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRIGHTNESS_H
