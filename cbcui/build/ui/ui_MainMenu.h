/********************************************************************************
** Form generated from reading UI file 'MainMenu.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *ui_cbcLabel;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QVBoxLayout *vboxLayout1;
    QSpacerItem *spacerItem3;
    QPushButton *ui_programsButton;
    QSpacerItem *spacerItem4;
    QPushButton *ui_utilitiesButton;
    QSpacerItem *spacerItem5;
    QSpacerItem *spacerItem6;
    QVBoxLayout *vboxLayout2;
    QSpacerItem *spacerItem7;
    QPushButton *ui_visionButton;
    QSpacerItem *spacerItem8;
    QPushButton *ui_sensorsmotorsButton;
    QSpacerItem *spacerItem9;
    QSpacerItem *spacerItem10;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem11;
    QPushButton *ui_aboutButton;
    QSpacerItem *spacerItem12;
    QPushButton *ui_settingsButton;
    QSpacerItem *spacerItem13;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(320, 212);
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        MainMenu->setFont(font);
        vboxLayout = new QVBoxLayout(MainMenu);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(-1, 12, -1, -1);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        ui_cbcLabel = new QLabel(MainMenu);
        ui_cbcLabel->setObjectName(QString::fromUtf8("ui_cbcLabel"));
        ui_cbcLabel->setMinimumSize(QSize(100, 30));
        ui_cbcLabel->setMaximumSize(QSize(100, 30));
        QFont font1;
        ui_cbcLabel->setFont(font1);
        ui_cbcLabel->setPixmap(QPixmap(QString::fromUtf8(":/actions/cbc_2.png")));
        ui_cbcLabel->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(ui_cbcLabel);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        spacerItem3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem3);

        ui_programsButton = new QPushButton(MainMenu);
        ui_programsButton->setObjectName(QString::fromUtf8("ui_programsButton"));
        ui_programsButton->setMinimumSize(QSize(95, 30));
        ui_programsButton->setMaximumSize(QSize(95, 30));

        vboxLayout1->addWidget(ui_programsButton);

        spacerItem4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem4);

        ui_utilitiesButton = new QPushButton(MainMenu);
        ui_utilitiesButton->setObjectName(QString::fromUtf8("ui_utilitiesButton"));
        ui_utilitiesButton->setMinimumSize(QSize(95, 30));
        ui_utilitiesButton->setMaximumSize(QSize(95, 30));

        vboxLayout1->addWidget(ui_utilitiesButton);

        spacerItem5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem5);


        hboxLayout1->addLayout(vboxLayout1);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem6);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        spacerItem7 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem7);

        ui_visionButton = new QPushButton(MainMenu);
        ui_visionButton->setObjectName(QString::fromUtf8("ui_visionButton"));
        ui_visionButton->setMinimumSize(QSize(95, 30));
        ui_visionButton->setMaximumSize(QSize(95, 30));

        vboxLayout2->addWidget(ui_visionButton);

        spacerItem8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem8);

        ui_sensorsmotorsButton = new QPushButton(MainMenu);
        ui_sensorsmotorsButton->setObjectName(QString::fromUtf8("ui_sensorsmotorsButton"));
        ui_sensorsmotorsButton->setMinimumSize(QSize(95, 30));
        ui_sensorsmotorsButton->setMaximumSize(QSize(95, 30));

        vboxLayout2->addWidget(ui_sensorsmotorsButton);

        spacerItem9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem9);


        hboxLayout1->addLayout(vboxLayout2);

        spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem10);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem11);

        ui_aboutButton = new QPushButton(MainMenu);
        ui_aboutButton->setObjectName(QString::fromUtf8("ui_aboutButton"));
        ui_aboutButton->setMinimumSize(QSize(80, 30));
        ui_aboutButton->setMaximumSize(QSize(80, 30));

        hboxLayout2->addWidget(ui_aboutButton);

        spacerItem12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem12);

        ui_settingsButton = new QPushButton(MainMenu);
        ui_settingsButton->setObjectName(QString::fromUtf8("ui_settingsButton"));
        ui_settingsButton->setMinimumSize(QSize(80, 30));
        ui_settingsButton->setMaximumSize(QSize(80, 30));

        hboxLayout2->addWidget(ui_settingsButton);

        spacerItem13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem13);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Form", 0, QApplication::UnicodeUTF8));
        ui_cbcLabel->setStyleSheet(QApplication::translate("MainMenu", "QLabel{\n"
"border:0px;\n"
"background-image:url(:/actions/cbc_2.png);\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_cbcLabel->setText(QString());
        ui_programsButton->setStyleSheet(QApplication::translate("MainMenu", "QPushButton{\n"
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
        ui_programsButton->setText(QApplication::translate("MainMenu", "Programs", 0, QApplication::UnicodeUTF8));
        ui_utilitiesButton->setStyleSheet(QApplication::translate("MainMenu", "QPushButton{\n"
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
        ui_utilitiesButton->setText(QApplication::translate("MainMenu", "Utilities", 0, QApplication::UnicodeUTF8));
        ui_visionButton->setStyleSheet(QApplication::translate("MainMenu", "QPushButton{\n"
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
        ui_visionButton->setText(QApplication::translate("MainMenu", "Vision", 0, QApplication::UnicodeUTF8));
        ui_sensorsmotorsButton->setStyleSheet(QApplication::translate("MainMenu", "QPushButton{\n"
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
        ui_sensorsmotorsButton->setText(QApplication::translate("MainMenu", "Sensors/Motors", 0, QApplication::UnicodeUTF8));
        ui_aboutButton->setStyleSheet(QApplication::translate("MainMenu", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"font-size:10pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"font-size:10pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_aboutButton->setText(QApplication::translate("MainMenu", "About", 0, QApplication::UnicodeUTF8));
        ui_settingsButton->setStyleSheet(QApplication::translate("MainMenu", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"font-size:10pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"font-size:10pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_settingsButton->setText(QApplication::translate("MainMenu", "Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
