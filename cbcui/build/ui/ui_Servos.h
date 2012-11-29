/********************************************************************************
** Form generated from reading UI file 'Servos.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVOS_H
#define UI_SERVOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Servos
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *ui_ServoDecButton;
    QLabel *ui_ServoNumberLabel;
    QPushButton *ui_ServoIncButton;
    QSpacerItem *spacerItem;
    QLabel *title_2;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QRadioButton *ui_OneRadio;
    QRadioButton *ui_TenRadio;
    QRadioButton *ui_HundredRadio;
    QSpacerItem *spacerItem3;
    QGridLayout *gridLayout;
    QPushButton *ui_ServoLeftButton;
    QSpacerItem *spacerItem4;
    QLineEdit *ui_ServoPositionLine;
    QSpacerItem *spacerItem5;
    QPushButton *ui_ServoRightButton;
    QGridLayout *gridLayout1;
    QPushButton *ui_CenterButton;
    QSpacerItem *spacerItem6;
    QPushButton *ui_UpdateButton;
    QCheckBox *ui_AutoCheck;

    void setupUi(QWidget *Servos)
    {
        if (Servos->objectName().isEmpty())
            Servos->setObjectName(QString::fromUtf8("Servos"));
        Servos->resize(320, 213);
        Servos->setMinimumSize(QSize(320, 213));
        Servos->setMaximumSize(QSize(320, 213));
        vboxLayout = new QVBoxLayout(Servos);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 5, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ui_ServoDecButton = new QPushButton(Servos);
        ui_ServoDecButton->setObjectName(QString::fromUtf8("ui_ServoDecButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(40);
        sizePolicy.setVerticalStretch(40);
        sizePolicy.setHeightForWidth(ui_ServoDecButton->sizePolicy().hasHeightForWidth());
        ui_ServoDecButton->setSizePolicy(sizePolicy);
        ui_ServoDecButton->setMinimumSize(QSize(30, 30));
        ui_ServoDecButton->setMaximumSize(QSize(30, 30));
        ui_ServoDecButton->setIconSize(QSize(40, 40));
        ui_ServoDecButton->setAutoRepeat(false);
        ui_ServoDecButton->setFlat(false);

        hboxLayout->addWidget(ui_ServoDecButton);

        ui_ServoNumberLabel = new QLabel(Servos);
        ui_ServoNumberLabel->setObjectName(QString::fromUtf8("ui_ServoNumberLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(30);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(ui_ServoNumberLabel->sizePolicy().hasHeightForWidth());
        ui_ServoNumberLabel->setSizePolicy(sizePolicy1);
        ui_ServoNumberLabel->setMinimumSize(QSize(30, 30));
        ui_ServoNumberLabel->setMaximumSize(QSize(30, 50));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        ui_ServoNumberLabel->setFont(font);
        ui_ServoNumberLabel->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(ui_ServoNumberLabel);

        ui_ServoIncButton = new QPushButton(Servos);
        ui_ServoIncButton->setObjectName(QString::fromUtf8("ui_ServoIncButton"));
        sizePolicy.setHeightForWidth(ui_ServoIncButton->sizePolicy().hasHeightForWidth());
        ui_ServoIncButton->setSizePolicy(sizePolicy);
        ui_ServoIncButton->setMinimumSize(QSize(30, 30));
        ui_ServoIncButton->setMaximumSize(QSize(30, 30));
        ui_ServoIncButton->setIconSize(QSize(40, 40));
        ui_ServoIncButton->setAutoRepeat(false);
        ui_ServoIncButton->setFlat(false);

        hboxLayout->addWidget(ui_ServoIncButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        title_2 = new QLabel(Servos);
        title_2->setObjectName(QString::fromUtf8("title_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(30);
        sizePolicy2.setHeightForWidth(title_2->sizePolicy().hasHeightForWidth());
        title_2->setSizePolicy(sizePolicy2);
        title_2->setFont(font);
        title_2->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(title_2);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label = new QLabel(Servos);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout1->addWidget(label);

        ui_OneRadio = new QRadioButton(Servos);
        ui_OneRadio->setObjectName(QString::fromUtf8("ui_OneRadio"));
        ui_OneRadio->setChecked(true);

        vboxLayout1->addWidget(ui_OneRadio);

        ui_TenRadio = new QRadioButton(Servos);
        ui_TenRadio->setObjectName(QString::fromUtf8("ui_TenRadio"));

        vboxLayout1->addWidget(ui_TenRadio);

        ui_HundredRadio = new QRadioButton(Servos);
        ui_HundredRadio->setObjectName(QString::fromUtf8("ui_HundredRadio"));

        vboxLayout1->addWidget(ui_HundredRadio);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem3);


        hboxLayout1->addLayout(vboxLayout1);


        vboxLayout->addLayout(hboxLayout1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(0);
        ui_ServoLeftButton = new QPushButton(Servos);
        ui_ServoLeftButton->setObjectName(QString::fromUtf8("ui_ServoLeftButton"));
        ui_ServoLeftButton->setMinimumSize(QSize(30, 30));
        ui_ServoLeftButton->setMaximumSize(QSize(30, 30));
        ui_ServoLeftButton->setIconSize(QSize(35, 35));
        ui_ServoLeftButton->setAutoRepeat(true);
        ui_ServoLeftButton->setAutoRepeatDelay(100);
        ui_ServoLeftButton->setAutoRepeatInterval(50);
        ui_ServoLeftButton->setFlat(false);

        gridLayout->addWidget(ui_ServoLeftButton, 0, 1, 1, 1);

        spacerItem4 = new QSpacerItem(65, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem4, 0, 0, 1, 1);

        ui_ServoPositionLine = new QLineEdit(Servos);
        ui_ServoPositionLine->setObjectName(QString::fromUtf8("ui_ServoPositionLine"));
        ui_ServoPositionLine->setMinimumSize(QSize(60, 20));
        ui_ServoPositionLine->setMaximumSize(QSize(60, 20));
        ui_ServoPositionLine->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ui_ServoPositionLine, 0, 2, 1, 1);

        spacerItem5 = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem5, 0, 4, 1, 1);

        ui_ServoRightButton = new QPushButton(Servos);
        ui_ServoRightButton->setObjectName(QString::fromUtf8("ui_ServoRightButton"));
        ui_ServoRightButton->setMinimumSize(QSize(30, 30));
        ui_ServoRightButton->setMaximumSize(QSize(30, 30));
        ui_ServoRightButton->setIconSize(QSize(35, 35));
        ui_ServoRightButton->setAutoRepeat(true);
        ui_ServoRightButton->setAutoRepeatDelay(200);
        ui_ServoRightButton->setAutoRepeatInterval(50);
        ui_ServoRightButton->setFlat(false);

        gridLayout->addWidget(ui_ServoRightButton, 0, 3, 1, 1);


        vboxLayout->addLayout(gridLayout);

        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(0);
        gridLayout1->setVerticalSpacing(0);
        gridLayout1->setContentsMargins(-1, -1, -1, 5);
        ui_CenterButton = new QPushButton(Servos);
        ui_CenterButton->setObjectName(QString::fromUtf8("ui_CenterButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ui_CenterButton->sizePolicy().hasHeightForWidth());
        ui_CenterButton->setSizePolicy(sizePolicy3);
        ui_CenterButton->setMinimumSize(QSize(80, 30));
        ui_CenterButton->setMaximumSize(QSize(80, 30));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        ui_CenterButton->setFont(font1);

        gridLayout1->addWidget(ui_CenterButton, 0, 0, 2, 1);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem6, 0, 1, 2, 1);

        ui_UpdateButton = new QPushButton(Servos);
        ui_UpdateButton->setObjectName(QString::fromUtf8("ui_UpdateButton"));
        sizePolicy3.setHeightForWidth(ui_UpdateButton->sizePolicy().hasHeightForWidth());
        ui_UpdateButton->setSizePolicy(sizePolicy3);
        ui_UpdateButton->setMinimumSize(QSize(80, 30));
        ui_UpdateButton->setMaximumSize(QSize(80, 30));
        ui_UpdateButton->setFont(font1);
        ui_UpdateButton->setAutoRepeat(true);

        gridLayout1->addWidget(ui_UpdateButton, 0, 3, 2, 1);

        ui_AutoCheck = new QCheckBox(Servos);
        ui_AutoCheck->setObjectName(QString::fromUtf8("ui_AutoCheck"));

        gridLayout1->addWidget(ui_AutoCheck, 0, 2, 2, 1);


        vboxLayout->addLayout(gridLayout1);


        retranslateUi(Servos);

        QMetaObject::connectSlotsByName(Servos);
    } // setupUi

    void retranslateUi(QWidget *Servos)
    {
        Servos->setWindowTitle(QApplication::translate("Servos", "Form", 0, QApplication::UnicodeUTF8));
        ui_ServoDecButton->setStyleSheet(QApplication::translate("Servos", "QPushButton{\n"
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
        ui_ServoDecButton->setText(QString());
        ui_ServoNumberLabel->setStyleSheet(QApplication::translate("Servos", "color:black;\n"
"font:bold;\n"
"font-size:20pt;", 0, QApplication::UnicodeUTF8));
        ui_ServoNumberLabel->setText(QApplication::translate("Servos", "0", 0, QApplication::UnicodeUTF8));
        ui_ServoIncButton->setStyleSheet(QApplication::translate("Servos", "QPushButton{\n"
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
        ui_ServoIncButton->setText(QString());
        title_2->setStyleSheet(QApplication::translate("Servos", "color:black;\n"
"font:bold;\n"
"font-size:20pt;", 0, QApplication::UnicodeUTF8));
        title_2->setText(QApplication::translate("Servos", "Servo Test", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Servos", "Increment", 0, QApplication::UnicodeUTF8));
        ui_OneRadio->setText(QApplication::translate("Servos", "1x", 0, QApplication::UnicodeUTF8));
        ui_TenRadio->setText(QApplication::translate("Servos", "10x", 0, QApplication::UnicodeUTF8));
        ui_HundredRadio->setText(QApplication::translate("Servos", "100x", 0, QApplication::UnicodeUTF8));
        ui_ServoLeftButton->setStyleSheet(QApplication::translate("Servos", "QPushButton{\n"
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
        ui_ServoLeftButton->setText(QString());
        ui_ServoPositionLine->setInputMask(QString());
        ui_ServoPositionLine->setText(QApplication::translate("Servos", "0", 0, QApplication::UnicodeUTF8));
        ui_ServoRightButton->setStyleSheet(QApplication::translate("Servos", "QPushButton{\n"
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
        ui_ServoRightButton->setText(QString());
        ui_CenterButton->setStyleSheet(QApplication::translate("Servos", "QPushButton{\n"
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
        ui_CenterButton->setText(QApplication::translate("Servos", "Center", 0, QApplication::UnicodeUTF8));
        ui_UpdateButton->setStyleSheet(QApplication::translate("Servos", "QPushButton{\n"
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
        ui_UpdateButton->setText(QApplication::translate("Servos", "Update", 0, QApplication::UnicodeUTF8));
        ui_AutoCheck->setText(QApplication::translate("Servos", "Automatic", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Servos: public Ui_Servos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVOS_H
