/********************************************************************************
** Form generated from reading UI file 'WifiItem.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIFIITEM_H
#define UI_WIFIITEM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WifiItem
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *ui_signalStrengthFrame;
    QLabel *ui_ssidLabel;
    QSpacerItem *horizontalSpacer;
    QWidget *ui_lockWidget;
    QLabel *ui_accessPointLabel;

    void setupUi(QWidget *WifiItem)
    {
        if (WifiItem->objectName().isEmpty())
            WifiItem->setObjectName(QString::fromUtf8("WifiItem"));
        WifiItem->resize(300, 35);
        WifiItem->setMinimumSize(QSize(300, 35));
        WifiItem->setMaximumSize(QSize(300, 35));
        WifiItem->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(WifiItem);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 0, 3, 0);
        ui_signalStrengthFrame = new QFrame(WifiItem);
        ui_signalStrengthFrame->setObjectName(QString::fromUtf8("ui_signalStrengthFrame"));
        ui_signalStrengthFrame->setMinimumSize(QSize(30, 30));
        ui_signalStrengthFrame->setMaximumSize(QSize(30, 30));
        ui_signalStrengthFrame->setStyleSheet(QString::fromUtf8("QFrame{border:0px;\n"
"background-image:url(:/actions/botguy_wifi3.png);\n"
"}"));
        ui_signalStrengthFrame->setFrameShape(QFrame::NoFrame);
        ui_signalStrengthFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(ui_signalStrengthFrame);

        ui_ssidLabel = new QLabel(WifiItem);
        ui_ssidLabel->setObjectName(QString::fromUtf8("ui_ssidLabel"));
        ui_ssidLabel->setMinimumSize(QSize(125, 0));
        ui_ssidLabel->setMaximumSize(QSize(200, 16777215));
        QFont font;
        font.setPointSize(14);
        ui_ssidLabel->setFont(font);
        ui_ssidLabel->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(ui_ssidLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ui_lockWidget = new QWidget(WifiItem);
        ui_lockWidget->setObjectName(QString::fromUtf8("ui_lockWidget"));
        ui_lockWidget->setMinimumSize(QSize(20, 22));
        ui_lockWidget->setMaximumSize(QSize(20, 22));
        ui_lockWidget->setStyleSheet(QString::fromUtf8("QWidget{border:0px;\n"
"background-image:url(:/actions/lock.png);\n"
"}"));

        horizontalLayout->addWidget(ui_lockWidget);

        ui_accessPointLabel = new QLabel(WifiItem);
        ui_accessPointLabel->setObjectName(QString::fromUtf8("ui_accessPointLabel"));
        ui_accessPointLabel->setMaximumSize(QSize(130, 16777215));

        horizontalLayout->addWidget(ui_accessPointLabel);


        retranslateUi(WifiItem);

        QMetaObject::connectSlotsByName(WifiItem);
    } // setupUi

    void retranslateUi(QWidget *WifiItem)
    {
        WifiItem->setWindowTitle(QApplication::translate("WifiItem", "Form", 0, QApplication::UnicodeUTF8));
        ui_ssidLabel->setText(QApplication::translate("WifiItem", "SSID", 0, QApplication::UnicodeUTF8));
        ui_accessPointLabel->setText(QApplication::translate("WifiItem", "00:00:00:00:00:00", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WifiItem: public Ui_WifiItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIFIITEM_H
