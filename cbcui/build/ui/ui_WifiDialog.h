/********************************************************************************
** Form generated from reading UI file 'WifiDialog.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIFIDIALOG_H
#define UI_WIFIDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WifiDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *ui_ssidLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *ui_macLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *ui_allocationCombo;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *ui_authLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *ui_encrypLabel;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QComboBox *ui_txRateCombo;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QCheckBox *ui_asciiCheck;
    QCheckBox *ui_hexCheck;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *ui_keyLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *ui_connectButton;
    QPushButton *ui_cancelButton;

    void setupUi(QWidget *WifiDialog)
    {
        if (WifiDialog->objectName().isEmpty())
            WifiDialog->setObjectName(QString::fromUtf8("WifiDialog"));
        WifiDialog->resize(235, 240);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WifiDialog->sizePolicy().hasHeightForWidth());
        WifiDialog->setSizePolicy(sizePolicy);
        WifiDialog->setMinimumSize(QSize(235, 240));
        WifiDialog->setMaximumSize(QSize(241, 240));
        WifiDialog->setStyleSheet(QString::fromUtf8("QDialog{border:3px solid blue; border-radius: 5px}"));
        verticalLayout = new QVBoxLayout(WifiDialog);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 9);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ui_ssidLabel = new QLabel(WifiDialog);
        ui_ssidLabel->setObjectName(QString::fromUtf8("ui_ssidLabel"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        ui_ssidLabel->setFont(font);
        ui_ssidLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ui_ssidLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(WifiDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        ui_macLabel = new QLabel(WifiDialog);
        ui_macLabel->setObjectName(QString::fromUtf8("ui_macLabel"));
        ui_macLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(ui_macLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(WifiDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        ui_allocationCombo = new QComboBox(WifiDialog);
        ui_allocationCombo->setObjectName(QString::fromUtf8("ui_allocationCombo"));
        ui_allocationCombo->setMinimumSize(QSize(80, 0));
        ui_allocationCombo->setMaximumSize(QSize(80, 20));

        horizontalLayout_3->addWidget(ui_allocationCombo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(WifiDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(100, 16777215));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_5);

        ui_authLabel = new QLabel(WifiDialog);
        ui_authLabel->setObjectName(QString::fromUtf8("ui_authLabel"));
        ui_authLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(ui_authLabel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(WifiDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setMaximumSize(QSize(100, 16777215));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_6);

        ui_encrypLabel = new QLabel(WifiDialog);
        ui_encrypLabel->setObjectName(QString::fromUtf8("ui_encrypLabel"));
        ui_encrypLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(ui_encrypLabel);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(WifiDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(100, 0));
        label_7->setMaximumSize(QSize(100, 16777215));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        ui_txRateCombo = new QComboBox(WifiDialog);
        ui_txRateCombo->setObjectName(QString::fromUtf8("ui_txRateCombo"));
        ui_txRateCombo->setMinimumSize(QSize(90, 0));
        ui_txRateCombo->setMaximumSize(QSize(90, 20));

        horizontalLayout_9->addWidget(ui_txRateCombo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(WifiDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(100, 0));
        label_8->setMaximumSize(QSize(100, 16777215));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_8);

        ui_asciiCheck = new QCheckBox(WifiDialog);
        ui_asciiCheck->setObjectName(QString::fromUtf8("ui_asciiCheck"));

        horizontalLayout_6->addWidget(ui_asciiCheck);

        ui_hexCheck = new QCheckBox(WifiDialog);
        ui_hexCheck->setObjectName(QString::fromUtf8("ui_hexCheck"));

        horizontalLayout_6->addWidget(ui_hexCheck);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(WifiDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        ui_keyLineEdit = new QLineEdit(WifiDialog);
        ui_keyLineEdit->setObjectName(QString::fromUtf8("ui_keyLineEdit"));
        ui_keyLineEdit->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_7->addWidget(ui_keyLineEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        ui_connectButton = new QPushButton(WifiDialog);
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

        horizontalLayout_8->addWidget(ui_connectButton);

        ui_cancelButton = new QPushButton(WifiDialog);
        ui_cancelButton->setObjectName(QString::fromUtf8("ui_cancelButton"));
        ui_cancelButton->setMinimumSize(QSize(80, 30));
        ui_cancelButton->setMaximumSize(QSize(80, 30));
        ui_cancelButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"}"));

        horizontalLayout_8->addWidget(ui_cancelButton);


        verticalLayout->addLayout(horizontalLayout_8);


        retranslateUi(WifiDialog);

        QMetaObject::connectSlotsByName(WifiDialog);
    } // setupUi

    void retranslateUi(QWidget *WifiDialog)
    {
        WifiDialog->setWindowTitle(QApplication::translate("WifiDialog", "Form", 0, QApplication::UnicodeUTF8));
        ui_ssidLabel->setText(QApplication::translate("WifiDialog", "KIPR", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WifiDialog", "Access Point:", 0, QApplication::UnicodeUTF8));
        ui_macLabel->setText(QApplication::translate("WifiDialog", "00:00:00:00:00:00", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("WifiDialog", "Allocation:", 0, QApplication::UnicodeUTF8));
        ui_allocationCombo->clear();
        ui_allocationCombo->insertItems(0, QStringList()
         << QApplication::translate("WifiDialog", "dhcp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WifiDialog", "static", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("WifiDialog", "Authentication:", 0, QApplication::UnicodeUTF8));
        ui_authLabel->setText(QApplication::translate("WifiDialog", "WPA2PSK", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("WifiDialog", "Encryption:", 0, QApplication::UnicodeUTF8));
        ui_encrypLabel->setText(QApplication::translate("WifiDialog", "TKIP", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("WifiDialog", "Tx Rate:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("WifiDialog", "Encoding:", 0, QApplication::UnicodeUTF8));
        ui_asciiCheck->setText(QApplication::translate("WifiDialog", "ascii", 0, QApplication::UnicodeUTF8));
        ui_hexCheck->setText(QApplication::translate("WifiDialog", "hex", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WifiDialog", "PassKey:", 0, QApplication::UnicodeUTF8));
        ui_connectButton->setText(QApplication::translate("WifiDialog", "Connect", 0, QApplication::UnicodeUTF8));
        ui_cancelButton->setText(QApplication::translate("WifiDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WifiDialog: public Ui_WifiDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIFIDIALOG_H
