/********************************************************************************
** Form generated from reading UI file 'Console.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Console
{
public:
    QVBoxLayout *vboxLayout;
    QPlainTextEdit *ui_console;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QPushButton *ui_leftButton;
    QVBoxLayout *vboxLayout1;
    QPushButton *ui_upButton;
    QPushButton *ui_downButton;
    QPushButton *ui_rightButton;
    QSpacerItem *spacerItem1;
    QPushButton *ui_aButton;
    QSpacerItem *spacerItem2;
    QPushButton *ui_bButton;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *Console)
    {
        if (Console->objectName().isEmpty())
            Console->setObjectName(QString::fromUtf8("Console"));
        Console->resize(320, 213);
        vboxLayout = new QVBoxLayout(Console);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        ui_console = new QPlainTextEdit(Console);
        ui_console->setObjectName(QString::fromUtf8("ui_console"));

        vboxLayout->addWidget(ui_console);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(3);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        ui_leftButton = new QPushButton(Console);
        ui_leftButton->setObjectName(QString::fromUtf8("ui_leftButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_leftButton->sizePolicy().hasHeightForWidth());
        ui_leftButton->setSizePolicy(sizePolicy);
        ui_leftButton->setMinimumSize(QSize(30, 30));
        ui_leftButton->setMaximumSize(QSize(30, 30));
        ui_leftButton->setIconSize(QSize(30, 30));

        hboxLayout1->addWidget(ui_leftButton);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(3);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setSizeConstraint(QLayout::SetDefaultConstraint);
        ui_upButton = new QPushButton(Console);
        ui_upButton->setObjectName(QString::fromUtf8("ui_upButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(20);
        sizePolicy1.setVerticalStretch(20);
        sizePolicy1.setHeightForWidth(ui_upButton->sizePolicy().hasHeightForWidth());
        ui_upButton->setSizePolicy(sizePolicy1);
        ui_upButton->setMinimumSize(QSize(30, 30));
        ui_upButton->setMaximumSize(QSize(30, 30));
        ui_upButton->setIconSize(QSize(30, 30));

        vboxLayout1->addWidget(ui_upButton);

        ui_downButton = new QPushButton(Console);
        ui_downButton->setObjectName(QString::fromUtf8("ui_downButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ui_downButton->sizePolicy().hasHeightForWidth());
        ui_downButton->setSizePolicy(sizePolicy2);
        ui_downButton->setMinimumSize(QSize(30, 30));
        ui_downButton->setMaximumSize(QSize(30, 30));
        ui_downButton->setIconSize(QSize(30, 30));

        vboxLayout1->addWidget(ui_downButton);


        hboxLayout1->addLayout(vboxLayout1);

        ui_rightButton = new QPushButton(Console);
        ui_rightButton->setObjectName(QString::fromUtf8("ui_rightButton"));
        sizePolicy.setHeightForWidth(ui_rightButton->sizePolicy().hasHeightForWidth());
        ui_rightButton->setSizePolicy(sizePolicy);
        ui_rightButton->setMinimumSize(QSize(30, 30));
        ui_rightButton->setMaximumSize(QSize(30, 30));
        ui_rightButton->setIconSize(QSize(30, 30));

        hboxLayout1->addWidget(ui_rightButton);


        hboxLayout->addLayout(hboxLayout1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        ui_aButton = new QPushButton(Console);
        ui_aButton->setObjectName(QString::fromUtf8("ui_aButton"));
        ui_aButton->setMinimumSize(QSize(80, 30));
        ui_aButton->setMaximumSize(QSize(80, 30));

        hboxLayout->addWidget(ui_aButton);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        ui_bButton = new QPushButton(Console);
        ui_bButton->setObjectName(QString::fromUtf8("ui_bButton"));
        ui_bButton->setMinimumSize(QSize(80, 30));
        ui_bButton->setMaximumSize(QSize(80, 30));

        hboxLayout->addWidget(ui_bButton);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(Console);

        QMetaObject::connectSlotsByName(Console);
    } // setupUi

    void retranslateUi(QWidget *Console)
    {
        Console->setWindowTitle(QApplication::translate("Console", "Form", 0, QApplication::UnicodeUTF8));
        ui_console->setStyleSheet(QString());
        ui_leftButton->setStyleSheet(QApplication::translate("Console", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/arrowLf-30L.png);\n"
"color:black;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/arrowLf-30D.png);\n"
"color:white;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_leftButton->setText(QString());
        ui_upButton->setStyleSheet(QApplication::translate("Console", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/arrowUp-30L.png);\n"
"color:black;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/arrowUp-30D.png);\n"
"color:white;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_upButton->setText(QString());
        ui_downButton->setStyleSheet(QApplication::translate("Console", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/arrowDn-30L.png);\n"
"color:black;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/arrowDn-30D.png);\n"
"color:white;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_downButton->setText(QString());
        ui_rightButton->setStyleSheet(QApplication::translate("Console", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/arrowRt-30L.png);\n"
"color:black;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/arrowRt-30D.png);\n"
"color:white;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_rightButton->setText(QString());
        ui_aButton->setStyleSheet(QApplication::translate("Console", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_aButton->setText(QApplication::translate("Console", "A", 0, QApplication::UnicodeUTF8));
        ui_bButton->setStyleSheet(QApplication::translate("Console", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_bButton->setText(QApplication::translate("Console", "B", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Console: public Ui_Console {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
