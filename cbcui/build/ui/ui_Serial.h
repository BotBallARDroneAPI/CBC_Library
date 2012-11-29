/********************************************************************************
** Form generated from reading UI file 'Serial.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIAL_H
#define UI_SERIAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialPage
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *ui_portComboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QComboBox *ui_baudComboBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *ui_byteCodeCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *ui_commandLineEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ui_sendButton;
    QLabel *label;
    QPlainTextEdit *ui_outputConsole;

    void setupUi(QWidget *SerialPage)
    {
        if (SerialPage->objectName().isEmpty())
            SerialPage->setObjectName(QString::fromUtf8("SerialPage"));
        SerialPage->resize(320, 212);
        SerialPage->setMinimumSize(QSize(320, 212));
        SerialPage->setMaximumSize(QSize(329, 212));
        vboxLayout = new QVBoxLayout(SerialPage);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 3, -1, 3);
        ui_portComboBox = new QComboBox(SerialPage);
        ui_portComboBox->setObjectName(QString::fromUtf8("ui_portComboBox"));
        ui_portComboBox->setMinimumSize(QSize(155, 20));
        ui_portComboBox->setMaximumSize(QSize(155, 20));

        horizontalLayout_5->addWidget(ui_portComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        label_3 = new QLabel(SerialPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(65, 20));
        label_3->setMaximumSize(QSize(65, 20));

        horizontalLayout_5->addWidget(label_3);

        ui_baudComboBox = new QComboBox(SerialPage);
        ui_baudComboBox->setObjectName(QString::fromUtf8("ui_baudComboBox"));
        ui_baudComboBox->setMinimumSize(QSize(85, 0));
        ui_baudComboBox->setMaximumSize(QSize(85, 20));

        horizontalLayout_5->addWidget(ui_baudComboBox);


        vboxLayout->addLayout(horizontalLayout_5);

        line = new QFrame(SerialPage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(SerialPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        ui_byteCodeCheckBox = new QCheckBox(SerialPage);
        ui_byteCodeCheckBox->setObjectName(QString::fromUtf8("ui_byteCodeCheckBox"));
        ui_byteCodeCheckBox->setChecked(true);

        horizontalLayout_8->addWidget(ui_byteCodeCheckBox);


        vboxLayout->addLayout(horizontalLayout_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(9);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ui_commandLineEdit = new QLineEdit(SerialPage);
        ui_commandLineEdit->setObjectName(QString::fromUtf8("ui_commandLineEdit"));
        ui_commandLineEdit->setMinimumSize(QSize(225, 0));
        ui_commandLineEdit->setMaximumSize(QSize(225, 25));

        horizontalLayout_3->addWidget(ui_commandLineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        ui_sendButton = new QPushButton(SerialPage);
        ui_sendButton->setObjectName(QString::fromUtf8("ui_sendButton"));
        ui_sendButton->setMinimumSize(QSize(80, 30));
        ui_sendButton->setMaximumSize(QSize(80, 30));
        ui_sendButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}"));

        horizontalLayout_3->addWidget(ui_sendButton);


        vboxLayout->addLayout(horizontalLayout_3);

        label = new QLabel(SerialPage);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        ui_outputConsole = new QPlainTextEdit(SerialPage);
        ui_outputConsole->setObjectName(QString::fromUtf8("ui_outputConsole"));
        ui_outputConsole->setMinimumSize(QSize(0, 110));
        ui_outputConsole->setMaximumSize(QSize(320, 120));

        vboxLayout->addWidget(ui_outputConsole);


        retranslateUi(SerialPage);

        QMetaObject::connectSlotsByName(SerialPage);
    } // setupUi

    void retranslateUi(QWidget *SerialPage)
    {
        SerialPage->setWindowTitle(QApplication::translate("SerialPage", "Form", 0, QApplication::UnicodeUTF8));
        ui_portComboBox->clear();
        ui_portComboBox->insertItems(0, QStringList()
         << QApplication::translate("SerialPage", "CBC_Serial", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("SerialPage", "Baud Rate", 0, QApplication::UnicodeUTF8));
        ui_baudComboBox->clear();
        ui_baudComboBox->insertItems(0, QStringList()
         << QApplication::translate("SerialPage", "1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SerialPage", "1800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SerialPage", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SerialPage", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SerialPage", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SerialPage", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SerialPage", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SerialPage", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SerialPage", "76800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SerialPage", "115200", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("SerialPage", "Command", 0, QApplication::UnicodeUTF8));
        ui_byteCodeCheckBox->setText(QApplication::translate("SerialPage", "byte code format", 0, QApplication::UnicodeUTF8));
        ui_sendButton->setText(QApplication::translate("SerialPage", "Send", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SerialPage", "Output", 0, QApplication::UnicodeUTF8));
        ui_outputConsole->setStyleSheet(QString());
    } // retranslateUi

};

namespace Ui {
    class SerialPage: public Ui_SerialPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_H
