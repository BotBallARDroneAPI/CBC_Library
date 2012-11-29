/********************************************************************************
** Form generated from reading UI file 'VisionSelect.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISIONSELECT_H
#define UI_VISIONSELECT_H

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

class Ui_VisionSelect
{
public:
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *ui_trackingButton;
    QSpacerItem *spacerItem2;
    QPushButton *ui_settingButton;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;

    void setupUi(QWidget *VisionSelect)
    {
        if (VisionSelect->objectName().isEmpty())
            VisionSelect->setObjectName(QString::fromUtf8("VisionSelect"));
        VisionSelect->resize(320, 213);
        hboxLayout = new QHBoxLayout(VisionSelect);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(102, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacerItem1 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        ui_trackingButton = new QPushButton(VisionSelect);
        ui_trackingButton->setObjectName(QString::fromUtf8("ui_trackingButton"));
        ui_trackingButton->setMinimumSize(QSize(95, 30));
        ui_trackingButton->setMaximumSize(QSize(95, 30));

        vboxLayout->addWidget(ui_trackingButton);

        spacerItem2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        ui_settingButton = new QPushButton(VisionSelect);
        ui_settingButton->setObjectName(QString::fromUtf8("ui_settingButton"));
        ui_settingButton->setEnabled(true);
        ui_settingButton->setMinimumSize(QSize(95, 30));
        ui_settingButton->setMaximumSize(QSize(95, 30));
        QFont font;
        font.setPointSize(9);
        ui_settingButton->setFont(font);
        ui_settingButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30L.png);\n"
"color:black;\n"
"font-size:9pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30D.png);\n"
"color:white;\n"
"}"));

        vboxLayout->addWidget(ui_settingButton);

        spacerItem3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);


        hboxLayout->addLayout(vboxLayout);

        spacerItem4 = new QSpacerItem(102, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);


        retranslateUi(VisionSelect);

        QMetaObject::connectSlotsByName(VisionSelect);
    } // setupUi

    void retranslateUi(QWidget *VisionSelect)
    {
        VisionSelect->setWindowTitle(QApplication::translate("VisionSelect", "Form", 0, QApplication::UnicodeUTF8));
        ui_trackingButton->setStyleSheet(QApplication::translate("VisionSelect", "QPushButton{\n"
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
        ui_trackingButton->setText(QApplication::translate("VisionSelect", "Tracking", 0, QApplication::UnicodeUTF8));
        ui_settingButton->setText(QApplication::translate("VisionSelect", "Camera\n"
"Parameters", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VisionSelect: public Ui_VisionSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISIONSELECT_H
