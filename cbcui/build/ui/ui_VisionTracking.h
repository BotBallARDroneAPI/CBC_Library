/********************************************************************************
** Form generated from reading UI file 'VisionTracking.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISIONTRACKING_H
#define UI_VISIONTRACKING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisionTracking
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QPushButton *RawButton;
    QPushButton *MatchButton;
    QPushButton *TrackButton;
    QStackedWidget *image;
    QVBoxLayout *vboxLayout2;
    QPushButton *Model0Button;
    QPushButton *Model1Button;
    QPushButton *Model2Button;
    QPushButton *Model3Button;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *vboxLayout3;
    QPushButton *TopLeftButton;
    QPushButton *BottomRightButton;
    QLabel *HSVLabel;
    QStackedWidget *hsv;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem;
    QPushButton *UpButton;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout3;
    QPushButton *LeftButton;
    QPushButton *RightButton;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem2;
    QPushButton *DownButton;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *VisionTracking)
    {
        if (VisionTracking->objectName().isEmpty())
            VisionTracking->setObjectName(QString::fromUtf8("VisionTracking"));
        VisionTracking->resize(320, 213);
        VisionTracking->setMinimumSize(QSize(320, 213));
        VisionTracking->setMaximumSize(QSize(320, 213));
        vboxLayout = new QVBoxLayout(VisionTracking);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        RawButton = new QPushButton(VisionTracking);
        RawButton->setObjectName(QString::fromUtf8("RawButton"));
        RawButton->setMinimumSize(QSize(30, 30));
        RawButton->setMaximumSize(QSize(30, 30));
        RawButton->setCheckable(true);

        vboxLayout1->addWidget(RawButton);

        MatchButton = new QPushButton(VisionTracking);
        MatchButton->setObjectName(QString::fromUtf8("MatchButton"));
        MatchButton->setMinimumSize(QSize(30, 30));
        MatchButton->setMaximumSize(QSize(25, 16777215));
        MatchButton->setCheckable(true);

        vboxLayout1->addWidget(MatchButton);

        TrackButton = new QPushButton(VisionTracking);
        TrackButton->setObjectName(QString::fromUtf8("TrackButton"));
        TrackButton->setMinimumSize(QSize(30, 30));
        TrackButton->setMaximumSize(QSize(25, 16777215));
        TrackButton->setCheckable(true);

        vboxLayout1->addWidget(TrackButton);


        hboxLayout->addLayout(vboxLayout1);

        image = new QStackedWidget(VisionTracking);
        image->setObjectName(QString::fromUtf8("image"));
        image->setMinimumSize(QSize(160, 120));
        image->setMaximumSize(QSize(160, 120));
        image->setAutoFillBackground(false);
        image->setFrameShape(QFrame::NoFrame);
        image->setFrameShadow(QFrame::Plain);
        image->setLineWidth(0);

        hboxLayout->addWidget(image);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        Model0Button = new QPushButton(VisionTracking);
        Model0Button->setObjectName(QString::fromUtf8("Model0Button"));
        Model0Button->setMinimumSize(QSize(30, 30));
        Model0Button->setMaximumSize(QSize(30, 30));

        vboxLayout2->addWidget(Model0Button);

        Model1Button = new QPushButton(VisionTracking);
        Model1Button->setObjectName(QString::fromUtf8("Model1Button"));
        Model1Button->setMinimumSize(QSize(30, 30));
        Model1Button->setMaximumSize(QSize(30, 30));

        vboxLayout2->addWidget(Model1Button);

        Model2Button = new QPushButton(VisionTracking);
        Model2Button->setObjectName(QString::fromUtf8("Model2Button"));
        Model2Button->setMinimumSize(QSize(30, 30));
        Model2Button->setMaximumSize(QSize(30, 30));

        vboxLayout2->addWidget(Model2Button);

        Model3Button = new QPushButton(VisionTracking);
        Model3Button->setObjectName(QString::fromUtf8("Model3Button"));
        Model3Button->setMinimumSize(QSize(30, 30));
        Model3Button->setMaximumSize(QSize(30, 30));

        vboxLayout2->addWidget(Model3Button);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        TopLeftButton = new QPushButton(VisionTracking);
        TopLeftButton->setObjectName(QString::fromUtf8("TopLeftButton"));
        TopLeftButton->setMinimumSize(QSize(30, 30));
        TopLeftButton->setMaximumSize(QSize(30, 30));

        vboxLayout3->addWidget(TopLeftButton);

        BottomRightButton = new QPushButton(VisionTracking);
        BottomRightButton->setObjectName(QString::fromUtf8("BottomRightButton"));
        BottomRightButton->setMinimumSize(QSize(30, 30));
        BottomRightButton->setMaximumSize(QSize(30, 30));

        vboxLayout3->addWidget(BottomRightButton);


        horizontalLayout->addLayout(vboxLayout3);


        verticalLayout->addLayout(horizontalLayout);

        HSVLabel = new QLabel(VisionTracking);
        HSVLabel->setObjectName(QString::fromUtf8("HSVLabel"));
        QFont font;
        font.setPointSize(10);
        HSVLabel->setFont(font);
        HSVLabel->setStyleSheet(QString::fromUtf8("color:white;"));

        verticalLayout->addWidget(HSVLabel);


        hboxLayout1->addLayout(verticalLayout);

        hsv = new QStackedWidget(VisionTracking);
        hsv->setObjectName(QString::fromUtf8("hsv"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hsv->sizePolicy().hasHeightForWidth());
        hsv->setSizePolicy(sizePolicy);
        hsv->setMinimumSize(QSize(173, 93));
        hsv->setMaximumSize(QSize(173, 93));
        hsv->setFrameShape(QFrame::StyledPanel);
        hsv->setFrameShadow(QFrame::Raised);

        hboxLayout1->addWidget(hsv);

        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setSpacing(0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem = new QSpacerItem(17, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);

        UpButton = new QPushButton(VisionTracking);
        UpButton->setObjectName(QString::fromUtf8("UpButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(30);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(UpButton->sizePolicy().hasHeightForWidth());
        UpButton->setSizePolicy(sizePolicy1);
        UpButton->setMinimumSize(QSize(30, 30));
        UpButton->setMaximumSize(QSize(30, 30));
        UpButton->setIconSize(QSize(30, 30));
        UpButton->setAutoRepeat(true);
        UpButton->setAutoRepeatDelay(300);
        UpButton->setAutoRepeatInterval(75);

        hboxLayout2->addWidget(UpButton);

        spacerItem1 = new QSpacerItem(17, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);


        vboxLayout4->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        LeftButton = new QPushButton(VisionTracking);
        LeftButton->setObjectName(QString::fromUtf8("LeftButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(LeftButton->sizePolicy().hasHeightForWidth());
        LeftButton->setSizePolicy(sizePolicy2);
        LeftButton->setMinimumSize(QSize(30, 30));
        LeftButton->setMaximumSize(QSize(30, 30));
        LeftButton->setIconSize(QSize(30, 30));
        LeftButton->setAutoRepeat(true);
        LeftButton->setAutoRepeatDelay(150);
        LeftButton->setAutoRepeatInterval(75);

        hboxLayout3->addWidget(LeftButton);

        RightButton = new QPushButton(VisionTracking);
        RightButton->setObjectName(QString::fromUtf8("RightButton"));
        sizePolicy2.setHeightForWidth(RightButton->sizePolicy().hasHeightForWidth());
        RightButton->setSizePolicy(sizePolicy2);
        RightButton->setMinimumSize(QSize(30, 30));
        RightButton->setMaximumSize(QSize(30, 30));
        RightButton->setIconSize(QSize(30, 30));
        RightButton->setAutoRepeat(true);
        RightButton->setAutoRepeatDelay(150);
        RightButton->setAutoRepeatInterval(75);

        hboxLayout3->addWidget(RightButton);


        vboxLayout4->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem2);

        DownButton = new QPushButton(VisionTracking);
        DownButton->setObjectName(QString::fromUtf8("DownButton"));
        sizePolicy2.setHeightForWidth(DownButton->sizePolicy().hasHeightForWidth());
        DownButton->setSizePolicy(sizePolicy2);
        DownButton->setMinimumSize(QSize(30, 30));
        DownButton->setMaximumSize(QSize(30, 30));
        DownButton->setIconSize(QSize(30, 30));
        DownButton->setAutoRepeat(true);
        DownButton->setAutoRepeatDelay(300);
        DownButton->setAutoRepeatInterval(75);

        hboxLayout4->addWidget(DownButton);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem3);


        vboxLayout4->addLayout(hboxLayout4);


        hboxLayout1->addLayout(vboxLayout4);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(VisionTracking);

        QMetaObject::connectSlotsByName(VisionTracking);
    } // setupUi

    void retranslateUi(QWidget *VisionTracking)
    {
        VisionTracking->setWindowTitle(QApplication::translate("VisionTracking", "Form", 0, QApplication::UnicodeUTF8));
        VisionTracking->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
"icon-size:25px;\n"
"border:0px;\n"
"}", 0, QApplication::UnicodeUTF8));
        RawButton->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black\n"
"}\n"
"QPushButton:checked{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        RawButton->setText(QApplication::translate("VisionTracking", "Raw", 0, QApplication::UnicodeUTF8));
        MatchButton->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:checked{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        MatchButton->setText(QApplication::translate("VisionTracking", "Mat", 0, QApplication::UnicodeUTF8));
        TrackButton->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:checked{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        TrackButton->setText(QApplication::translate("VisionTracking", "Trk", 0, QApplication::UnicodeUTF8));
        Model0Button->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:checked{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        Model0Button->setText(QApplication::translate("VisionTracking", "0", 0, QApplication::UnicodeUTF8));
        Model1Button->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:checked{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        Model1Button->setText(QApplication::translate("VisionTracking", "1", 0, QApplication::UnicodeUTF8));
        Model2Button->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:checked{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        Model2Button->setText(QApplication::translate("VisionTracking", "2", 0, QApplication::UnicodeUTF8));
        Model3Button->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:checked{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        Model3Button->setText(QApplication::translate("VisionTracking", "3", 0, QApplication::UnicodeUTF8));
        TopLeftButton->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:checked{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        TopLeftButton->setText(QApplication::translate("VisionTracking", "TL", 0, QApplication::UnicodeUTF8));
        BottomRightButton->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:checked{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        BottomRightButton->setText(QApplication::translate("VisionTracking", "BR", 0, QApplication::UnicodeUTF8));
        HSVLabel->setText(QApplication::translate("VisionTracking", "(300,127,\n"
"    255,255)", 0, QApplication::UnicodeUTF8));
        UpButton->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
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
        UpButton->setText(QString());
        LeftButton->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
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
        LeftButton->setText(QString());
        RightButton->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
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
        RightButton->setText(QString());
        DownButton->setStyleSheet(QApplication::translate("VisionTracking", "QPushButton{\n"
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
        DownButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VisionTracking: public Ui_VisionTracking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISIONTRACKING_H
