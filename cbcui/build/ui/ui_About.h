/********************************************************************************
** Form generated from reading UI file 'About.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *ui_OSVersion;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *ui_SWVersion;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *ui_FWVersion;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(320, 213);
        About->setMinimumSize(QSize(320, 213));
        About->setMaximumSize(QSize(320, 213));
        verticalLayout_2 = new QVBoxLayout(About);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_4->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(About);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setUnderline(true);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(About);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(90, 16));
        label_3->setMaximumSize(QSize(90, 16));
        QFont font1;
        font1.setPointSize(11);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        ui_OSVersion = new QLabel(About);
        ui_OSVersion->setObjectName(QString::fromUtf8("ui_OSVersion"));
        ui_OSVersion->setMinimumSize(QSize(40, 16));
        ui_OSVersion->setMaximumSize(QSize(40, 16));
        ui_OSVersion->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ui_OSVersion);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(About);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(90, 16));
        label_5->setMaximumSize(QSize(90, 16));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        ui_SWVersion = new QLabel(About);
        ui_SWVersion->setObjectName(QString::fromUtf8("ui_SWVersion"));
        ui_SWVersion->setMinimumSize(QSize(40, 16));
        ui_SWVersion->setMaximumSize(QSize(40, 16));
        ui_SWVersion->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(ui_SWVersion);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(About);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(90, 16));
        label_7->setMaximumSize(QSize(90, 16));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_7);

        ui_FWVersion = new QLabel(About);
        ui_FWVersion->setObjectName(QString::fromUtf8("ui_FWVersion"));
        ui_FWVersion->setMinimumSize(QSize(40, 16));
        ui_FWVersion->setMaximumSize(QSize(40, 16));
        ui_FWVersion->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(ui_FWVersion);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:14pt; font-weight:600;\">CBC BOTBALL CONTROLLER</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\">Copyright (C) 2009-2011 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\">KISS Institute for Practical Robotics</span></p>\n"
"<p style=\"-qt-paragraph-type:empty"
                        "; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt;\">http://www.kipr.org/</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt;\">http://www.botball.org/</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("About", "CBC Software by:\n"
"Matt Roman\n"
"Logan Cox\n"
"Randy Sargent\n"
"Braden McDorman", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("About", "Version Numbers", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("About", "Operating Sys.", 0, QApplication::UnicodeUTF8));
        ui_OSVersion->setText(QApplication::translate("About", "1.1.1", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("About", "CBC Interface", 0, QApplication::UnicodeUTF8));
        ui_SWVersion->setText(QApplication::translate("About", "A.1.1", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("About", "Firmware", 0, QApplication::UnicodeUTF8));
        ui_FWVersion->setText(QApplication::translate("About", "999", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
