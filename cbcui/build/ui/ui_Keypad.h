/********************************************************************************
** Form generated from reading UI file 'Keypad.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYPAD_H
#define UI_KEYPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Keypad
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLineEdit *ui_outputLine;
    QPushButton *ui_clearButton;
    QSpacerItem *spacerItem;
    QGridLayout *gridLayout;
    QPushButton *ui_oneButton;
    QPushButton *ui_twoButton;
    QPushButton *ui_threeButton;
    QPushButton *ui_fourButton;
    QPushButton *ui_fiveButton;
    QPushButton *ui_sixButton;
    QPushButton *ui_sevenButton;
    QPushButton *ui_eightButton;
    QPushButton *ui_nineButton;
    QPushButton *ui_negateButton;
    QPushButton *ui_zeroButton;
    QPushButton *ui_enterButton;

    void setupUi(QWidget *Keypad)
    {
        if (Keypad->objectName().isEmpty())
            Keypad->setObjectName(QString::fromUtf8("Keypad"));
        Keypad->resize(130, 190);
        Keypad->setMinimumSize(QSize(0, 0));
        Keypad->setMaximumSize(QSize(180, 213));
        Keypad->setStyleSheet(QString::fromUtf8("QDialog{background-color:rgb(67, 67, 67); border:1px solid rgb(170, 170, 127);border-radius:6px}\n"
"QLineEdit{border:1px solid red; border-radius:5px}\n"
""));
        vboxLayout = new QVBoxLayout(Keypad);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(4, -1, 4, -1);
        ui_outputLine = new QLineEdit(Keypad);
        ui_outputLine->setObjectName(QString::fromUtf8("ui_outputLine"));
        ui_outputLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(ui_outputLine);

        ui_clearButton = new QPushButton(Keypad);
        ui_clearButton->setObjectName(QString::fromUtf8("ui_clearButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(30);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(ui_clearButton->sizePolicy().hasHeightForWidth());
        ui_clearButton->setSizePolicy(sizePolicy);
        ui_clearButton->setMinimumSize(QSize(30, 30));
        ui_clearButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        hboxLayout->addWidget(ui_clearButton);


        vboxLayout->addLayout(hboxLayout);

        spacerItem = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ui_oneButton = new QPushButton(Keypad);
        ui_oneButton->setObjectName(QString::fromUtf8("ui_oneButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ui_oneButton->sizePolicy().hasHeightForWidth());
        ui_oneButton->setSizePolicy(sizePolicy1);
        ui_oneButton->setMinimumSize(QSize(30, 30));
        ui_oneButton->setMaximumSize(QSize(30, 30));
        ui_oneButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        gridLayout->addWidget(ui_oneButton, 0, 0, 1, 1);

        ui_twoButton = new QPushButton(Keypad);
        ui_twoButton->setObjectName(QString::fromUtf8("ui_twoButton"));
        sizePolicy1.setHeightForWidth(ui_twoButton->sizePolicy().hasHeightForWidth());
        ui_twoButton->setSizePolicy(sizePolicy1);
        ui_twoButton->setMinimumSize(QSize(30, 30));
        ui_twoButton->setMaximumSize(QSize(30, 30));
        ui_twoButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        gridLayout->addWidget(ui_twoButton, 0, 1, 1, 1);

        ui_threeButton = new QPushButton(Keypad);
        ui_threeButton->setObjectName(QString::fromUtf8("ui_threeButton"));
        sizePolicy1.setHeightForWidth(ui_threeButton->sizePolicy().hasHeightForWidth());
        ui_threeButton->setSizePolicy(sizePolicy1);
        ui_threeButton->setMinimumSize(QSize(30, 30));
        ui_threeButton->setMaximumSize(QSize(30, 30));
        ui_threeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        gridLayout->addWidget(ui_threeButton, 0, 2, 1, 1);

        ui_fourButton = new QPushButton(Keypad);
        ui_fourButton->setObjectName(QString::fromUtf8("ui_fourButton"));
        sizePolicy1.setHeightForWidth(ui_fourButton->sizePolicy().hasHeightForWidth());
        ui_fourButton->setSizePolicy(sizePolicy1);
        ui_fourButton->setMinimumSize(QSize(30, 30));
        ui_fourButton->setMaximumSize(QSize(30, 30));
        ui_fourButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        gridLayout->addWidget(ui_fourButton, 1, 0, 1, 1);

        ui_fiveButton = new QPushButton(Keypad);
        ui_fiveButton->setObjectName(QString::fromUtf8("ui_fiveButton"));
        sizePolicy1.setHeightForWidth(ui_fiveButton->sizePolicy().hasHeightForWidth());
        ui_fiveButton->setSizePolicy(sizePolicy1);
        ui_fiveButton->setMinimumSize(QSize(30, 30));
        ui_fiveButton->setMaximumSize(QSize(30, 30));
        ui_fiveButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        gridLayout->addWidget(ui_fiveButton, 1, 1, 1, 1);

        ui_sixButton = new QPushButton(Keypad);
        ui_sixButton->setObjectName(QString::fromUtf8("ui_sixButton"));
        sizePolicy1.setHeightForWidth(ui_sixButton->sizePolicy().hasHeightForWidth());
        ui_sixButton->setSizePolicy(sizePolicy1);
        ui_sixButton->setMinimumSize(QSize(30, 30));
        ui_sixButton->setMaximumSize(QSize(30, 30));
        ui_sixButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        gridLayout->addWidget(ui_sixButton, 1, 2, 1, 1);

        ui_sevenButton = new QPushButton(Keypad);
        ui_sevenButton->setObjectName(QString::fromUtf8("ui_sevenButton"));
        sizePolicy1.setHeightForWidth(ui_sevenButton->sizePolicy().hasHeightForWidth());
        ui_sevenButton->setSizePolicy(sizePolicy1);
        ui_sevenButton->setMinimumSize(QSize(30, 30));
        ui_sevenButton->setMaximumSize(QSize(30, 30));
        ui_sevenButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        gridLayout->addWidget(ui_sevenButton, 2, 0, 1, 1);

        ui_eightButton = new QPushButton(Keypad);
        ui_eightButton->setObjectName(QString::fromUtf8("ui_eightButton"));
        sizePolicy1.setHeightForWidth(ui_eightButton->sizePolicy().hasHeightForWidth());
        ui_eightButton->setSizePolicy(sizePolicy1);
        ui_eightButton->setMinimumSize(QSize(30, 30));
        ui_eightButton->setMaximumSize(QSize(30, 30));
        ui_eightButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        gridLayout->addWidget(ui_eightButton, 2, 1, 1, 1);

        ui_nineButton = new QPushButton(Keypad);
        ui_nineButton->setObjectName(QString::fromUtf8("ui_nineButton"));
        sizePolicy1.setHeightForWidth(ui_nineButton->sizePolicy().hasHeightForWidth());
        ui_nineButton->setSizePolicy(sizePolicy1);
        ui_nineButton->setMinimumSize(QSize(30, 30));
        ui_nineButton->setMaximumSize(QSize(30, 30));
        ui_nineButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        gridLayout->addWidget(ui_nineButton, 2, 2, 1, 1);

        ui_negateButton = new QPushButton(Keypad);
        ui_negateButton->setObjectName(QString::fromUtf8("ui_negateButton"));
        sizePolicy1.setHeightForWidth(ui_negateButton->sizePolicy().hasHeightForWidth());
        ui_negateButton->setSizePolicy(sizePolicy1);
        ui_negateButton->setMinimumSize(QSize(30, 30));
        ui_negateButton->setMaximumSize(QSize(30, 30));
        ui_negateButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        gridLayout->addWidget(ui_negateButton, 3, 0, 1, 1);

        ui_zeroButton = new QPushButton(Keypad);
        ui_zeroButton->setObjectName(QString::fromUtf8("ui_zeroButton"));
        sizePolicy1.setHeightForWidth(ui_zeroButton->sizePolicy().hasHeightForWidth());
        ui_zeroButton->setSizePolicy(sizePolicy1);
        ui_zeroButton->setMinimumSize(QSize(30, 30));
        ui_zeroButton->setMaximumSize(QSize(30, 30));
        ui_zeroButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        gridLayout->addWidget(ui_zeroButton, 3, 1, 1, 1);

        ui_enterButton = new QPushButton(Keypad);
        ui_enterButton->setObjectName(QString::fromUtf8("ui_enterButton"));
        sizePolicy1.setHeightForWidth(ui_enterButton->sizePolicy().hasHeightForWidth());
        ui_enterButton->setSizePolicy(sizePolicy1);
        ui_enterButton->setMinimumSize(QSize(30, 30));
        ui_enterButton->setMaximumSize(QSize(30, 30));
        ui_enterButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet30x30D.png);\n"
"color:white;\n"
"}"));

        gridLayout->addWidget(ui_enterButton, 3, 2, 1, 1);


        vboxLayout->addLayout(gridLayout);


        retranslateUi(Keypad);

        QMetaObject::connectSlotsByName(Keypad);
    } // setupUi

    void retranslateUi(QWidget *Keypad)
    {
        Keypad->setWindowTitle(QApplication::translate("Keypad", "Keypad", 0, QApplication::UnicodeUTF8));
        ui_outputLine->setText(QString());
        ui_clearButton->setText(QApplication::translate("Keypad", "C", 0, QApplication::UnicodeUTF8));
        ui_oneButton->setText(QApplication::translate("Keypad", "1", 0, QApplication::UnicodeUTF8));
        ui_twoButton->setText(QApplication::translate("Keypad", "2", 0, QApplication::UnicodeUTF8));
        ui_threeButton->setText(QApplication::translate("Keypad", "3", 0, QApplication::UnicodeUTF8));
        ui_fourButton->setText(QApplication::translate("Keypad", "4", 0, QApplication::UnicodeUTF8));
        ui_fiveButton->setText(QApplication::translate("Keypad", "5", 0, QApplication::UnicodeUTF8));
        ui_sixButton->setText(QApplication::translate("Keypad", "6", 0, QApplication::UnicodeUTF8));
        ui_sevenButton->setText(QApplication::translate("Keypad", "7", 0, QApplication::UnicodeUTF8));
        ui_eightButton->setText(QApplication::translate("Keypad", "8", 0, QApplication::UnicodeUTF8));
        ui_nineButton->setText(QApplication::translate("Keypad", "9", 0, QApplication::UnicodeUTF8));
        ui_negateButton->setText(QApplication::translate("Keypad", "+/-", 0, QApplication::UnicodeUTF8));
        ui_zeroButton->setText(QApplication::translate("Keypad", "0", 0, QApplication::UnicodeUTF8));
        ui_enterButton->setText(QApplication::translate("Keypad", "Ent.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Keypad: public Ui_Keypad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYPAD_H
