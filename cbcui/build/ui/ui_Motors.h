/********************************************************************************
** Form generated from reading UI file 'Motors.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTORS_H
#define UI_MOTORS_H

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

class Ui_Motors
{
public:
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *ui_testButton;
    QSpacerItem *spacerItem2;
    QPushButton *ui_tuneButton;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;

    void setupUi(QWidget *Motors)
    {
        if (Motors->objectName().isEmpty())
            Motors->setObjectName(QString::fromUtf8("Motors"));
        Motors->resize(320, 213);
        hboxLayout = new QHBoxLayout(Motors);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        ui_testButton = new QPushButton(Motors);
        ui_testButton->setObjectName(QString::fromUtf8("ui_testButton"));
        ui_testButton->setMinimumSize(QSize(80, 30));
        ui_testButton->setMaximumSize(QSize(80, 30));

        vboxLayout->addWidget(ui_testButton);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        ui_tuneButton = new QPushButton(Motors);
        ui_tuneButton->setObjectName(QString::fromUtf8("ui_tuneButton"));
        ui_tuneButton->setMinimumSize(QSize(80, 30));
        ui_tuneButton->setMaximumSize(QSize(80, 30));

        vboxLayout->addWidget(ui_tuneButton);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);


        hboxLayout->addLayout(vboxLayout);

        spacerItem4 = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);


        retranslateUi(Motors);

        QMetaObject::connectSlotsByName(Motors);
    } // setupUi

    void retranslateUi(QWidget *Motors)
    {
        Motors->setWindowTitle(QApplication::translate("Motors", "Form", 0, QApplication::UnicodeUTF8));
        ui_testButton->setStyleSheet(QApplication::translate("Motors", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_testButton->setText(QApplication::translate("Motors", "Test", 0, QApplication::UnicodeUTF8));
        ui_tuneButton->setStyleSheet(QApplication::translate("Motors", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_tuneButton->setText(QApplication::translate("Motors", "Tune", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Motors: public Ui_Motors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORS_H
