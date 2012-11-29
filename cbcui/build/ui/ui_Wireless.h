/********************************************************************************
** Form generated from reading UI file 'Wireless.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIRELESS_H
#define UI_WIRELESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wireless
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *ui_ssidListWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *ui_ipLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *ui_connectButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ui_refreshButton;

    void setupUi(QWidget *Wireless)
    {
        if (Wireless->objectName().isEmpty())
            Wireless->setObjectName(QString::fromUtf8("Wireless"));
        Wireless->resize(320, 213);
        Wireless->setMinimumSize(QSize(320, 213));
        Wireless->setMaximumSize(QSize(320, 213));
        QFont font;
        font.setPointSize(9);
        Wireless->setFont(font);
        verticalLayout = new QVBoxLayout(Wireless);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 6);
        ui_ssidListWidget = new QListWidget(Wireless);
        ui_ssidListWidget->setObjectName(QString::fromUtf8("ui_ssidListWidget"));

        verticalLayout->addWidget(ui_ssidListWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ui_ipLabel = new QLabel(Wireless);
        ui_ipLabel->setObjectName(QString::fromUtf8("ui_ipLabel"));
        ui_ipLabel->setMinimumSize(QSize(100, 0));
        ui_ipLabel->setMaximumSize(QSize(100, 16777215));
        QFont font1;
        font1.setPointSize(10);
        ui_ipLabel->setFont(font1);
        ui_ipLabel->setStyleSheet(QString::fromUtf8("color:white"));
        ui_ipLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ui_ipLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ui_connectButton = new QPushButton(Wireless);
        ui_connectButton->setObjectName(QString::fromUtf8("ui_connectButton"));
        ui_connectButton->setMinimumSize(QSize(80, 30));
        ui_connectButton->setMaximumSize(QSize(80, 30));
        ui_connectButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"}"));

        horizontalLayout->addWidget(ui_connectButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ui_refreshButton = new QPushButton(Wireless);
        ui_refreshButton->setObjectName(QString::fromUtf8("ui_refreshButton"));
        ui_refreshButton->setMinimumSize(QSize(80, 30));
        ui_refreshButton->setMaximumSize(QSize(80, 30));
        ui_refreshButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"}"));

        horizontalLayout->addWidget(ui_refreshButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Wireless);

        QMetaObject::connectSlotsByName(Wireless);
    } // setupUi

    void retranslateUi(QWidget *Wireless)
    {
        Wireless->setWindowTitle(QApplication::translate("Wireless", "Form", 0, QApplication::UnicodeUTF8));
        ui_ipLabel->setText(QApplication::translate("Wireless", "KIPR\n"
"192.168.123.111", 0, QApplication::UnicodeUTF8));
        ui_connectButton->setText(QApplication::translate("Wireless", "Connect", 0, QApplication::UnicodeUTF8));
        ui_refreshButton->setText(QApplication::translate("Wireless", "Refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Wireless: public Ui_Wireless {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIRELESS_H
