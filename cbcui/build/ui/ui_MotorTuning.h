/********************************************************************************
** Form generated from reading UI file 'MotorTuning.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTORTUNING_H
#define UI_MOTORTUNING_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MotorTuning
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QPushButton *ui_MotorDecButton;
    QLabel *ui_MotorNumberLabel;
    QPushButton *ui_MotorIncButton;
    QLabel *title;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout;
    QComboBox *ui_GainComboBox;
    QSpacerItem *spacerItem2;
    QCheckBox *ui_motorCheck0;
    QCheckBox *ui_motorCheck1;
    QCheckBox *ui_motorCheck2;
    QCheckBox *ui_motorCheck3;
    QSpacerItem *spacerItem3;
    QGridLayout *gridLayout1;
    QSlider *ui_DivSlider;
    QSlider *ui_MultSlider;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QLabel *label;
    QLabel *label_2;
    QLabel *ui_MultLabel;
    QLabel *ui_DivLabel;
    QCheckBox *ui_NegCheck;
    QLabel *label_3;
    QLabel *ui_GainValueLabel;
    QSpacerItem *spacerItem6;
    QSpacerItem *spacerItem7;
    QSpacerItem *spacerItem8;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem9;
    QLabel *label_4;
    QLineEdit *ui_TargetSpeedLine;
    QSpacerItem *spacerItem10;
    QLabel *label_6;
    QLineEdit *ui_TargetPositionLine;
    QSpacerItem *spacerItem11;
    QHBoxLayout *hboxLayout2;
    QPushButton *ui_ClearButton;
    QSpacerItem *spacerItem12;
    QLabel *positionLabel;
    QLabel *ui_MotorPositionLabel;
    QSpacerItem *spacerItem13;
    QPushButton *ui_PlayButton;

    void setupUi(QWidget *MotorTuning)
    {
        if (MotorTuning->objectName().isEmpty())
            MotorTuning->setObjectName(QString::fromUtf8("MotorTuning"));
        MotorTuning->resize(320, 213);
        MotorTuning->setMinimumSize(QSize(320, 213));
        MotorTuning->setMaximumSize(QSize(320, 213));
        vboxLayout = new QVBoxLayout(MotorTuning);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 5, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(0);
        ui_MotorDecButton = new QPushButton(MotorTuning);
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

        gridLayout->addWidget(ui_MotorDecButton, 0, 0, 2, 1);

        ui_MotorNumberLabel = new QLabel(MotorTuning);
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

        gridLayout->addWidget(ui_MotorNumberLabel, 0, 1, 2, 1);

        ui_MotorIncButton = new QPushButton(MotorTuning);
        ui_MotorIncButton->setObjectName(QString::fromUtf8("ui_MotorIncButton"));
        sizePolicy.setHeightForWidth(ui_MotorIncButton->sizePolicy().hasHeightForWidth());
        ui_MotorIncButton->setSizePolicy(sizePolicy);
        ui_MotorIncButton->setMinimumSize(QSize(30, 30));
        ui_MotorIncButton->setMaximumSize(QSize(30, 30));
        ui_MotorIncButton->setIconSize(QSize(40, 40));
        ui_MotorIncButton->setAutoRepeat(false);
        ui_MotorIncButton->setFlat(false);

        gridLayout->addWidget(ui_MotorIncButton, 0, 2, 2, 1);

        title = new QLabel(MotorTuning);
        title->setObjectName(QString::fromUtf8("title"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(30);
        sizePolicy2.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy2);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title, 0, 4, 2, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 5, 2, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 3, 2, 1);


        vboxLayout->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ui_GainComboBox = new QComboBox(MotorTuning);
        ui_GainComboBox->setObjectName(QString::fromUtf8("ui_GainComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(100);
        sizePolicy3.setVerticalStretch(20);
        sizePolicy3.setHeightForWidth(ui_GainComboBox->sizePolicy().hasHeightForWidth());
        ui_GainComboBox->setSizePolicy(sizePolicy3);
        ui_GainComboBox->setMinimumSize(QSize(100, 20));
        ui_GainComboBox->setMaximumSize(QSize(100, 20));

        hboxLayout->addWidget(ui_GainComboBox);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        ui_motorCheck0 = new QCheckBox(MotorTuning);
        ui_motorCheck0->setObjectName(QString::fromUtf8("ui_motorCheck0"));

        hboxLayout->addWidget(ui_motorCheck0);

        ui_motorCheck1 = new QCheckBox(MotorTuning);
        ui_motorCheck1->setObjectName(QString::fromUtf8("ui_motorCheck1"));

        hboxLayout->addWidget(ui_motorCheck1);

        ui_motorCheck2 = new QCheckBox(MotorTuning);
        ui_motorCheck2->setObjectName(QString::fromUtf8("ui_motorCheck2"));

        hboxLayout->addWidget(ui_motorCheck2);

        ui_motorCheck3 = new QCheckBox(MotorTuning);
        ui_motorCheck3->setObjectName(QString::fromUtf8("ui_motorCheck3"));

        hboxLayout->addWidget(ui_motorCheck3);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);


        vboxLayout->addLayout(hboxLayout);

        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(3);
        gridLayout1->setVerticalSpacing(3);
        ui_DivSlider = new QSlider(MotorTuning);
        ui_DivSlider->setObjectName(QString::fromUtf8("ui_DivSlider"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(15);
        sizePolicy4.setHeightForWidth(ui_DivSlider->sizePolicy().hasHeightForWidth());
        ui_DivSlider->setSizePolicy(sizePolicy4);
        ui_DivSlider->setMinimumSize(QSize(0, 15));
        ui_DivSlider->setMaximumSize(QSize(16777215, 20));
        ui_DivSlider->setLayoutDirection(Qt::RightToLeft);
        ui_DivSlider->setMinimum(1);
        ui_DivSlider->setMaximum(100);
        ui_DivSlider->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(ui_DivSlider, 2, 3, 1, 4);

        ui_MultSlider = new QSlider(MotorTuning);
        ui_MultSlider->setObjectName(QString::fromUtf8("ui_MultSlider"));
        sizePolicy4.setHeightForWidth(ui_MultSlider->sizePolicy().hasHeightForWidth());
        ui_MultSlider->setSizePolicy(sizePolicy4);
        ui_MultSlider->setMinimumSize(QSize(200, 15));
        ui_MultSlider->setMaximumSize(QSize(16777215, 20));
        ui_MultSlider->setLayoutDirection(Qt::RightToLeft);
        ui_MultSlider->setMinimum(0);
        ui_MultSlider->setMaximum(100);
        ui_MultSlider->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(ui_MultSlider, 0, 3, 1, 4);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem4, 0, 0, 5, 1);

        spacerItem5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem5, 0, 7, 5, 1);

        label = new QLabel(MotorTuning);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 20));
        label->setMaximumSize(QSize(16777215, 20));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label, 2, 1, 1, 1);

        label_2 = new QLabel(MotorTuning);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 20));
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_2, 0, 1, 1, 1);

        ui_MultLabel = new QLabel(MotorTuning);
        ui_MultLabel->setObjectName(QString::fromUtf8("ui_MultLabel"));
        ui_MultLabel->setMinimumSize(QSize(30, 0));
        ui_MultLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(ui_MultLabel, 0, 2, 1, 1);

        ui_DivLabel = new QLabel(MotorTuning);
        ui_DivLabel->setObjectName(QString::fromUtf8("ui_DivLabel"));
        ui_DivLabel->setMinimumSize(QSize(30, 0));
        ui_DivLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(ui_DivLabel, 2, 2, 1, 1);

        ui_NegCheck = new QCheckBox(MotorTuning);
        ui_NegCheck->setObjectName(QString::fromUtf8("ui_NegCheck"));

        gridLayout1->addWidget(ui_NegCheck, 3, 1, 1, 2);

        label_3 = new QLabel(MotorTuning);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_3, 3, 4, 1, 1);

        ui_GainValueLabel = new QLabel(MotorTuning);
        ui_GainValueLabel->setObjectName(QString::fromUtf8("ui_GainValueLabel"));
        ui_GainValueLabel->setMinimumSize(QSize(30, 0));
        ui_GainValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(ui_GainValueLabel, 3, 5, 1, 1);

        spacerItem6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem6, 1, 1, 1, 6);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem7, 3, 3, 1, 1);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem8, 3, 6, 1, 1);


        vboxLayout->addLayout(gridLayout1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem9);

        label_4 = new QLabel(MotorTuning);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout1->addWidget(label_4);

        ui_TargetSpeedLine = new QLineEdit(MotorTuning);
        ui_TargetSpeedLine->setObjectName(QString::fromUtf8("ui_TargetSpeedLine"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(40);
        sizePolicy5.setVerticalStretch(20);
        sizePolicy5.setHeightForWidth(ui_TargetSpeedLine->sizePolicy().hasHeightForWidth());
        ui_TargetSpeedLine->setSizePolicy(sizePolicy5);
        ui_TargetSpeedLine->setMinimumSize(QSize(45, 20));
        ui_TargetSpeedLine->setMaximumSize(QSize(45, 20));
        ui_TargetSpeedLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(ui_TargetSpeedLine);

        spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem10);

        label_6 = new QLabel(MotorTuning);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        hboxLayout1->addWidget(label_6);

        ui_TargetPositionLine = new QLineEdit(MotorTuning);
        ui_TargetPositionLine->setObjectName(QString::fromUtf8("ui_TargetPositionLine"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(20);
        sizePolicy6.setHeightForWidth(ui_TargetPositionLine->sizePolicy().hasHeightForWidth());
        ui_TargetPositionLine->setSizePolicy(sizePolicy6);
        ui_TargetPositionLine->setMinimumSize(QSize(100, 20));
        ui_TargetPositionLine->setMaximumSize(QSize(100, 20));
        ui_TargetPositionLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(ui_TargetPositionLine);

        spacerItem11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem11);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(10);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(-1, -1, -1, 3);
        ui_ClearButton = new QPushButton(MotorTuning);
        ui_ClearButton->setObjectName(QString::fromUtf8("ui_ClearButton"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(80);
        sizePolicy7.setVerticalStretch(30);
        sizePolicy7.setHeightForWidth(ui_ClearButton->sizePolicy().hasHeightForWidth());
        ui_ClearButton->setSizePolicy(sizePolicy7);
        ui_ClearButton->setMinimumSize(QSize(80, 30));
        ui_ClearButton->setMaximumSize(QSize(80, 30));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        ui_ClearButton->setFont(font1);

        hboxLayout2->addWidget(ui_ClearButton);

        spacerItem12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem12);

        positionLabel = new QLabel(MotorTuning);
        positionLabel->setObjectName(QString::fromUtf8("positionLabel"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        positionLabel->setFont(font2);
        positionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(positionLabel);

        ui_MotorPositionLabel = new QLabel(MotorTuning);
        ui_MotorPositionLabel->setObjectName(QString::fromUtf8("ui_MotorPositionLabel"));
        ui_MotorPositionLabel->setMinimumSize(QSize(100, 30));
        ui_MotorPositionLabel->setMaximumSize(QSize(100, 30));
        ui_MotorPositionLabel->setFont(font2);
        ui_MotorPositionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(ui_MotorPositionLabel);

        spacerItem13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem13);

        ui_PlayButton = new QPushButton(MotorTuning);
        ui_PlayButton->setObjectName(QString::fromUtf8("ui_PlayButton"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(ui_PlayButton->sizePolicy().hasHeightForWidth());
        ui_PlayButton->setSizePolicy(sizePolicy8);
        ui_PlayButton->setMinimumSize(QSize(40, 40));
        ui_PlayButton->setMaximumSize(QSize(40, 40));
        QFont font3;
        ui_PlayButton->setFont(font3);
        ui_PlayButton->setIconSize(QSize(40, 40));
        ui_PlayButton->setCheckable(true);
        ui_PlayButton->setFlat(false);

        hboxLayout2->addWidget(ui_PlayButton);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(MotorTuning);

        QMetaObject::connectSlotsByName(MotorTuning);
    } // setupUi

    void retranslateUi(QWidget *MotorTuning)
    {
        MotorTuning->setWindowTitle(QApplication::translate("MotorTuning", "Form", 0, QApplication::UnicodeUTF8));
        ui_MotorDecButton->setStyleSheet(QApplication::translate("MotorTuning", "QPushButton{\n"
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
        ui_MotorNumberLabel->setStyleSheet(QApplication::translate("MotorTuning", "color:black;\n"
"font:bold;\n"
"font-size:20pt;", 0, QApplication::UnicodeUTF8));
        ui_MotorNumberLabel->setText(QApplication::translate("MotorTuning", "0", 0, QApplication::UnicodeUTF8));
        ui_MotorIncButton->setStyleSheet(QApplication::translate("MotorTuning", "QPushButton{\n"
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
        title->setStyleSheet(QApplication::translate("MotorTuning", "color:black;\n"
"font:bold;\n"
"font-size:20pt;", 0, QApplication::UnicodeUTF8));
        title->setText(QApplication::translate("MotorTuning", "Motor Tune", 0, QApplication::UnicodeUTF8));
        ui_motorCheck0->setText(QApplication::translate("MotorTuning", "0", 0, QApplication::UnicodeUTF8));
        ui_motorCheck1->setText(QApplication::translate("MotorTuning", "1", 0, QApplication::UnicodeUTF8));
        ui_motorCheck2->setText(QApplication::translate("MotorTuning", "2", 0, QApplication::UnicodeUTF8));
        ui_motorCheck3->setText(QApplication::translate("MotorTuning", "3", 0, QApplication::UnicodeUTF8));
        ui_DivSlider->setStyleSheet(QString());
        label->setText(QApplication::translate("MotorTuning", "Divider:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MotorTuning", "Multiplier:", 0, QApplication::UnicodeUTF8));
        ui_MultLabel->setText(QApplication::translate("MotorTuning", "0", 0, QApplication::UnicodeUTF8));
        ui_DivLabel->setText(QApplication::translate("MotorTuning", "0", 0, QApplication::UnicodeUTF8));
        ui_NegCheck->setText(QApplication::translate("MotorTuning", "Neg. Gain", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MotorTuning", "Mul/Div = ", 0, QApplication::UnicodeUTF8));
        ui_GainValueLabel->setText(QApplication::translate("MotorTuning", "0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MotorTuning", "Speed", 0, QApplication::UnicodeUTF8));
        ui_TargetSpeedLine->setText(QApplication::translate("MotorTuning", "100", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MotorTuning", "Position", 0, QApplication::UnicodeUTF8));
        ui_TargetPositionLine->setText(QApplication::translate("MotorTuning", "1000", 0, QApplication::UnicodeUTF8));
        ui_ClearButton->setStyleSheet(QApplication::translate("MotorTuning", "QPushButton{\n"
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
        ui_ClearButton->setText(QApplication::translate("MotorTuning", "Clear", 0, QApplication::UnicodeUTF8));
        positionLabel->setStyleSheet(QApplication::translate("MotorTuning", "color:black;\n"
"font:bold;\n"
"font-size:16pt;", 0, QApplication::UnicodeUTF8));
        positionLabel->setText(QApplication::translate("MotorTuning", "Position", 0, QApplication::UnicodeUTF8));
        ui_MotorPositionLabel->setStyleSheet(QApplication::translate("MotorTuning", "color:black;\n"
"font:bold;\n"
"font-size:16pt;", 0, QApplication::UnicodeUTF8));
        ui_MotorPositionLabel->setText(QApplication::translate("MotorTuning", "100000", 0, QApplication::UnicodeUTF8));
        ui_PlayButton->setStyleSheet(QApplication::translate("MotorTuning", "QPushButton{\n"
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
    class MotorTuning: public Ui_MotorTuning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORTUNING_H
