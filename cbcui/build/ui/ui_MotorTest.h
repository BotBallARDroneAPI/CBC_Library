/********************************************************************************
** Form generated from reading UI file 'MotorTest.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTORTEST_H
#define UI_MOTORTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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

class Ui_MotorTest
{
public:
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QPushButton *ui_MotorDecButton;
    QLabel *ui_MotorNumberLabel;
    QPushButton *ui_MotorIncButton;
    QSpacerItem *spacerItem;
    QLabel *title;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QRadioButton *ui_PowerRadio;
    QRadioButton *ui_VelocityRadio;
    QRadioButton *ui_PositionRadio;
    QSpacerItem *spacerItem3;
    QGridLayout *gridLayout;
    QLabel *ui_TargetSpeedPowerLabel;
    QLineEdit *ui_TargetSpeedPowerLine;
    QLabel *ui_TargetPositionLabel;
    QLineEdit *ui_TargetPositionLine;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QSpacerItem *spacerItem6;
    QSpacerItem *spacerItem7;
    QHBoxLayout *hboxLayout2;
    QPushButton *ui_ClearButton;
    QLabel *label_4;
    QSpacerItem *spacerItem8;
    QLabel *ui_MotorPositionLabel;
    QPushButton *ui_PlayButton;

    void setupUi(QWidget *MotorTest)
    {
        if (MotorTest->objectName().isEmpty())
            MotorTest->setObjectName(QString::fromUtf8("MotorTest"));
        MotorTest->resize(320, 213);
        MotorTest->setMinimumSize(QSize(320, 213));
        MotorTest->setMaximumSize(QSize(320, 213));
        vboxLayout = new QVBoxLayout(MotorTest);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 5, 0, 0);
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ui_MotorDecButton = new QPushButton(MotorTest);
        ui_MotorDecButton->setObjectName(QString::fromUtf8("ui_MotorDecButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(40);
        sizePolicy.setVerticalStretch(40);
        sizePolicy.setHeightForWidth(ui_MotorDecButton->sizePolicy().hasHeightForWidth());
        ui_MotorDecButton->setSizePolicy(sizePolicy);
        ui_MotorDecButton->setMinimumSize(QSize(30, 30));
        ui_MotorDecButton->setMaximumSize(QSize(30, 30));
        ui_MotorDecButton->setIconSize(QSize(40, 40));
        ui_MotorDecButton->setAutoRepeat(false);
        ui_MotorDecButton->setFlat(false);

        hboxLayout->addWidget(ui_MotorDecButton);

        ui_MotorNumberLabel = new QLabel(MotorTest);
        ui_MotorNumberLabel->setObjectName(QString::fromUtf8("ui_MotorNumberLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(30);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(ui_MotorNumberLabel->sizePolicy().hasHeightForWidth());
        ui_MotorNumberLabel->setSizePolicy(sizePolicy1);
        ui_MotorNumberLabel->setMinimumSize(QSize(30, 30));
        ui_MotorNumberLabel->setMaximumSize(QSize(30, 50));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        ui_MotorNumberLabel->setFont(font);
        ui_MotorNumberLabel->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(ui_MotorNumberLabel);

        ui_MotorIncButton = new QPushButton(MotorTest);
        ui_MotorIncButton->setObjectName(QString::fromUtf8("ui_MotorIncButton"));
        sizePolicy.setHeightForWidth(ui_MotorIncButton->sizePolicy().hasHeightForWidth());
        ui_MotorIncButton->setSizePolicy(sizePolicy);
        ui_MotorIncButton->setMinimumSize(QSize(30, 30));
        ui_MotorIncButton->setMaximumSize(QSize(30, 30));
        ui_MotorIncButton->setIconSize(QSize(40, 40));
        ui_MotorIncButton->setCheckable(false);
        ui_MotorIncButton->setAutoRepeat(false);
        ui_MotorIncButton->setAutoExclusive(false);
        ui_MotorIncButton->setAutoDefault(false);
        ui_MotorIncButton->setDefault(false);
        ui_MotorIncButton->setFlat(false);

        hboxLayout->addWidget(ui_MotorIncButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        title = new QLabel(MotorTest);
        title->setObjectName(QString::fromUtf8("title"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(30);
        sizePolicy2.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy2);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(title);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout1->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        ui_PowerRadio = new QRadioButton(MotorTest);
        ui_PowerRadio->setObjectName(QString::fromUtf8("ui_PowerRadio"));
        ui_PowerRadio->setChecked(false);

        hboxLayout1->addWidget(ui_PowerRadio);

        ui_VelocityRadio = new QRadioButton(MotorTest);
        ui_VelocityRadio->setObjectName(QString::fromUtf8("ui_VelocityRadio"));

        hboxLayout1->addWidget(ui_VelocityRadio);

        ui_PositionRadio = new QRadioButton(MotorTest);
        ui_PositionRadio->setObjectName(QString::fromUtf8("ui_PositionRadio"));
        ui_PositionRadio->setChecked(true);

        hboxLayout1->addWidget(ui_PositionRadio);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);


        vboxLayout1->addLayout(hboxLayout1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        ui_TargetSpeedPowerLabel = new QLabel(MotorTest);
        ui_TargetSpeedPowerLabel->setObjectName(QString::fromUtf8("ui_TargetSpeedPowerLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ui_TargetSpeedPowerLabel->sizePolicy().hasHeightForWidth());
        ui_TargetSpeedPowerLabel->setSizePolicy(sizePolicy3);
        ui_TargetSpeedPowerLabel->setMinimumSize(QSize(100, 28));
        ui_TargetSpeedPowerLabel->setMaximumSize(QSize(100, 28));
        ui_TargetSpeedPowerLabel->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(ui_TargetSpeedPowerLabel, 1, 1, 1, 1);

        ui_TargetSpeedPowerLine = new QLineEdit(MotorTest);
        ui_TargetSpeedPowerLine->setObjectName(QString::fromUtf8("ui_TargetSpeedPowerLine"));
        sizePolicy3.setHeightForWidth(ui_TargetSpeedPowerLine->sizePolicy().hasHeightForWidth());
        ui_TargetSpeedPowerLine->setSizePolicy(sizePolicy3);
        ui_TargetSpeedPowerLine->setMinimumSize(QSize(100, 26));
        ui_TargetSpeedPowerLine->setMaximumSize(QSize(100, 26));
        QFont font1;
        font1.setPointSize(12);
        ui_TargetSpeedPowerLine->setFont(font1);
        ui_TargetSpeedPowerLine->setLayoutDirection(Qt::LeftToRight);
        ui_TargetSpeedPowerLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ui_TargetSpeedPowerLine, 1, 2, 1, 1);

        ui_TargetPositionLabel = new QLabel(MotorTest);
        ui_TargetPositionLabel->setObjectName(QString::fromUtf8("ui_TargetPositionLabel"));
        sizePolicy3.setHeightForWidth(ui_TargetPositionLabel->sizePolicy().hasHeightForWidth());
        ui_TargetPositionLabel->setSizePolicy(sizePolicy3);
        ui_TargetPositionLabel->setMinimumSize(QSize(100, 28));
        ui_TargetPositionLabel->setMaximumSize(QSize(100, 28));
        ui_TargetPositionLabel->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(ui_TargetPositionLabel, 2, 1, 1, 1);

        ui_TargetPositionLine = new QLineEdit(MotorTest);
        ui_TargetPositionLine->setObjectName(QString::fromUtf8("ui_TargetPositionLine"));
        sizePolicy3.setHeightForWidth(ui_TargetPositionLine->sizePolicy().hasHeightForWidth());
        ui_TargetPositionLine->setSizePolicy(sizePolicy3);
        ui_TargetPositionLine->setMinimumSize(QSize(100, 26));
        ui_TargetPositionLine->setMaximumSize(QSize(100, 26));
        ui_TargetPositionLine->setFont(font1);
        ui_TargetPositionLine->setLayoutDirection(Qt::LeftToRight);
        ui_TargetPositionLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ui_TargetPositionLine, 2, 2, 1, 1);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem4, 1, 0, 2, 1);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem5, 1, 3, 2, 1);

        spacerItem6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem6, 0, 0, 1, 4);

        spacerItem7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem7, 3, 0, 1, 4);


        vboxLayout1->addLayout(gridLayout);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(10);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(-1, -1, -1, 3);
        ui_ClearButton = new QPushButton(MotorTest);
        ui_ClearButton->setObjectName(QString::fromUtf8("ui_ClearButton"));
        ui_ClearButton->setMinimumSize(QSize(80, 30));
        ui_ClearButton->setMaximumSize(QSize(80, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        ui_ClearButton->setFont(font2);
        ui_ClearButton->setIconSize(QSize(80, 24));

        hboxLayout2->addWidget(ui_ClearButton);

        label_4 = new QLabel(MotorTest);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout2->addWidget(label_4);

        spacerItem8 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem8);

        ui_MotorPositionLabel = new QLabel(MotorTest);
        ui_MotorPositionLabel->setObjectName(QString::fromUtf8("ui_MotorPositionLabel"));
        ui_MotorPositionLabel->setMinimumSize(QSize(100, 30));
        ui_MotorPositionLabel->setMaximumSize(QSize(16777215, 30));
        ui_MotorPositionLabel->setLayoutDirection(Qt::LeftToRight);
        ui_MotorPositionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(ui_MotorPositionLabel);

        ui_PlayButton = new QPushButton(MotorTest);
        ui_PlayButton->setObjectName(QString::fromUtf8("ui_PlayButton"));
        sizePolicy3.setHeightForWidth(ui_PlayButton->sizePolicy().hasHeightForWidth());
        ui_PlayButton->setSizePolicy(sizePolicy3);
        ui_PlayButton->setMinimumSize(QSize(40, 40));
        ui_PlayButton->setMaximumSize(QSize(40, 40));
        ui_PlayButton->setIconSize(QSize(40, 40));
        ui_PlayButton->setCheckable(true);
        ui_PlayButton->setFlat(false);

        hboxLayout2->addWidget(ui_PlayButton);


        vboxLayout1->addLayout(hboxLayout2);


        vboxLayout->addLayout(vboxLayout1);


        retranslateUi(MotorTest);

        QMetaObject::connectSlotsByName(MotorTest);
    } // setupUi

    void retranslateUi(QWidget *MotorTest)
    {
        MotorTest->setWindowTitle(QApplication::translate("MotorTest", "Form", 0, QApplication::UnicodeUTF8));
        ui_MotorDecButton->setStyleSheet(QApplication::translate("MotorTest", "QPushButton{\n"
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
        ui_MotorDecButton->setText(QString());
        ui_MotorNumberLabel->setStyleSheet(QApplication::translate("MotorTest", "color:black;\n"
"font:bold;\n"
"font-size:20pt;", 0, QApplication::UnicodeUTF8));
        ui_MotorNumberLabel->setText(QApplication::translate("MotorTest", "0", 0, QApplication::UnicodeUTF8));
        ui_MotorIncButton->setStyleSheet(QApplication::translate("MotorTest", "QPushButton{\n"
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
        ui_MotorIncButton->setText(QString());
        title->setStyleSheet(QApplication::translate("MotorTest", "color:black;\n"
"font:bold;\n"
"font-size:20pt;", 0, QApplication::UnicodeUTF8));
        title->setText(QApplication::translate("MotorTest", "Motor Test", 0, QApplication::UnicodeUTF8));
        ui_PowerRadio->setText(QApplication::translate("MotorTest", "Power", 0, QApplication::UnicodeUTF8));
        ui_VelocityRadio->setText(QApplication::translate("MotorTest", "Velocity", 0, QApplication::UnicodeUTF8));
        ui_PositionRadio->setText(QApplication::translate("MotorTest", "Position", 0, QApplication::UnicodeUTF8));
        ui_TargetSpeedPowerLabel->setStyleSheet(QApplication::translate("MotorTest", "font-size:12pt;", 0, QApplication::UnicodeUTF8));
        ui_TargetSpeedPowerLabel->setText(QApplication::translate("MotorTest", "Target Speed", 0, QApplication::UnicodeUTF8));
        ui_TargetSpeedPowerLine->setStyleSheet(QString());
        ui_TargetSpeedPowerLine->setText(QApplication::translate("MotorTest", "0", 0, QApplication::UnicodeUTF8));
        ui_TargetPositionLabel->setStyleSheet(QApplication::translate("MotorTest", "font-size:12pt;", 0, QApplication::UnicodeUTF8));
        ui_TargetPositionLabel->setText(QApplication::translate("MotorTest", "Target Position", 0, QApplication::UnicodeUTF8));
        ui_TargetPositionLine->setStyleSheet(QString());
        ui_TargetPositionLine->setText(QApplication::translate("MotorTest", "0", 0, QApplication::UnicodeUTF8));
        ui_ClearButton->setStyleSheet(QApplication::translate("MotorTest", "QPushButton{\n"
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
        ui_ClearButton->setText(QApplication::translate("MotorTest", "Clear", 0, QApplication::UnicodeUTF8));
        label_4->setStyleSheet(QApplication::translate("MotorTest", "color:black;\n"
"font:bold;\n"
"font-size:16pt;", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MotorTest", "Position", 0, QApplication::UnicodeUTF8));
        ui_MotorPositionLabel->setStyleSheet(QApplication::translate("MotorTest", "color:black;\n"
"font:bold;\n"
"font-size:16pt;", 0, QApplication::UnicodeUTF8));
        ui_MotorPositionLabel->setText(QApplication::translate("MotorTest", "100000", 0, QApplication::UnicodeUTF8));
        ui_PlayButton->setStyleSheet(QApplication::translate("MotorTest", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30Go.png);\n"
"}\n"
"QPushButton:checked{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30Stop.png);\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_PlayButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MotorTest: public Ui_MotorTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORTEST_H
