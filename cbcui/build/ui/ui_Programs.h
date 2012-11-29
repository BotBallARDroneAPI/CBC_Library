/********************************************************************************
** Form generated from reading UI file 'Programs.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMS_H
#define UI_PROGRAMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Programs
{
public:
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *ui_fileManagerButton;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem4;
    QPushButton *ui_consoleButton;
    QSpacerItem *spacerItem5;
    QSpacerItem *spacerItem6;

    void setupUi(QWidget *Programs)
    {
        if (Programs->objectName().isEmpty())
            Programs->setObjectName(QString::fromUtf8("Programs"));
        Programs->resize(320, 213);
        vboxLayout = new QVBoxLayout(Programs);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        ui_fileManagerButton = new QPushButton(Programs);
        ui_fileManagerButton->setObjectName(QString::fromUtf8("ui_fileManagerButton"));
        ui_fileManagerButton->setMinimumSize(QSize(95, 30));
        ui_fileManagerButton->setMaximumSize(QSize(95, 30));

        hboxLayout->addWidget(ui_fileManagerButton);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);


        vboxLayout->addLayout(hboxLayout);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);

        ui_consoleButton = new QPushButton(Programs);
        ui_consoleButton->setObjectName(QString::fromUtf8("ui_consoleButton"));
        ui_consoleButton->setMinimumSize(QSize(95, 30));
        ui_consoleButton->setMaximumSize(QSize(95, 30));

        hboxLayout1->addWidget(ui_consoleButton);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem5);


        vboxLayout->addLayout(hboxLayout1);

        spacerItem6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem6);


        retranslateUi(Programs);

        QMetaObject::connectSlotsByName(Programs);
    } // setupUi

    void retranslateUi(QWidget *Programs)
    {
        Programs->setWindowTitle(QApplication::translate("Programs", "Form", 0, QApplication::UnicodeUTF8));
        Programs->setStyleSheet(QString());
        ui_fileManagerButton->setStyleSheet(QApplication::translate("Programs", "QPushButton{\n"
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
        ui_fileManagerButton->setText(QApplication::translate("Programs", "File Manager", 0, QApplication::UnicodeUTF8));
        ui_consoleButton->setStyleSheet(QApplication::translate("Programs", "QPushButton{\n"
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
        ui_consoleButton->setText(QApplication::translate("Programs", "Console", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Programs: public Ui_Programs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMS_H
