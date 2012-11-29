/********************************************************************************
** Form generated from reading UI file 'Utilities.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UTILITIES_H
#define UI_UTILITIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Utilities
{
public:
    QPushButton *ui_createButton;
    QPushButton *ui_serialButton;
    QPushButton *ui_terminalButton;
    QPushButton *ui_wifiButton;

    void setupUi(QWidget *Utilities)
    {
        if (Utilities->objectName().isEmpty())
            Utilities->setObjectName(QString::fromUtf8("Utilities"));
        Utilities->resize(320, 213);
        ui_createButton = new QPushButton(Utilities);
        ui_createButton->setObjectName(QString::fromUtf8("ui_createButton"));
        ui_createButton->setEnabled(true);
        ui_createButton->setGeometry(QRect(44, 61, 95, 30));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_createButton->sizePolicy().hasHeightForWidth());
        ui_createButton->setSizePolicy(sizePolicy);
        ui_createButton->setMinimumSize(QSize(95, 30));
        ui_createButton->setMaximumSize(QSize(95, 30));
        ui_createButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        ui_serialButton = new QPushButton(Utilities);
        ui_serialButton->setObjectName(QString::fromUtf8("ui_serialButton"));
        ui_serialButton->setGeometry(QRect(181, 61, 95, 30));
        ui_serialButton->setMinimumSize(QSize(95, 30));
        ui_serialButton->setMaximumSize(QSize(95, 30));
        ui_serialButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        ui_terminalButton = new QPushButton(Utilities);
        ui_terminalButton->setObjectName(QString::fromUtf8("ui_terminalButton"));
        ui_terminalButton->setGeometry(QRect(180, 130, 95, 30));
        ui_terminalButton->setMinimumSize(QSize(95, 30));
        ui_terminalButton->setMaximumSize(QSize(95, 30));
        ui_terminalButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        ui_wifiButton = new QPushButton(Utilities);
        ui_wifiButton->setObjectName(QString::fromUtf8("ui_wifiButton"));
        ui_wifiButton->setGeometry(QRect(45, 130, 95, 30));
        ui_wifiButton->setMinimumSize(QSize(95, 30));
        ui_wifiButton->setMaximumSize(QSize(95, 30));
        ui_wifiButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        retranslateUi(Utilities);

        QMetaObject::connectSlotsByName(Utilities);
    } // setupUi

    void retranslateUi(QWidget *Utilities)
    {
        Utilities->setWindowTitle(QApplication::translate("Utilities", "Form", 0, QApplication::UnicodeUTF8));
        ui_createButton->setText(QApplication::translate("Utilities", "iRobot Create", 0, QApplication::UnicodeUTF8));
        ui_serialButton->setText(QApplication::translate("Utilities", "Serial Ports", 0, QApplication::UnicodeUTF8));
        ui_terminalButton->setText(QApplication::translate("Utilities", "Terminal", 0, QApplication::UnicodeUTF8));
        ui_wifiButton->setText(QApplication::translate("Utilities", "WiFi", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Utilities: public Ui_Utilities {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UTILITIES_H
