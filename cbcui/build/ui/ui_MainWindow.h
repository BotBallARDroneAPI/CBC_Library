/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *ui_backButton;
    QSpacerItem *spacerItem;
    QPushButton *ui_runstopButton;
    QPushButton *ui_estopButton;
    QSpacerItem *spacerItem1;
    QPushButton *ui_closeButton;
    QWidget *ui_widget;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(320, 250);
        MainWindow->setSizeGripEnabled(false);
        MainWindow->setModal(false);
        vboxLayout = new QVBoxLayout(MainWindow);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        ui_backButton = new QPushButton(MainWindow);
        ui_backButton->setObjectName(QString::fromUtf8("ui_backButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_backButton->sizePolicy().hasHeightForWidth());
        ui_backButton->setSizePolicy(sizePolicy);
        ui_backButton->setMinimumSize(QSize(60, 30));
        ui_backButton->setMaximumSize(QSize(60, 30));
        ui_backButton->setFocusPolicy(Qt::NoFocus);
        ui_backButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/back-60L.png);\n"
"color:black;\n"
"font-size:11pt;\n"
"text-align:left;\n"
"}\n"
"QPushButton:pressed{\n"
"background-image:url(:/actions/back-60D.png);\n"
"color:black;\n"
"font-size:11pt;\n"
"text-align:left;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        ui_backButton->setIcon(icon);
        ui_backButton->setIconSize(QSize(54, 27));
        ui_backButton->setFlat(true);

        hboxLayout->addWidget(ui_backButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        ui_runstopButton = new QPushButton(MainWindow);
        ui_runstopButton->setObjectName(QString::fromUtf8("ui_runstopButton"));
        ui_runstopButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ui_runstopButton->sizePolicy().hasHeightForWidth());
        ui_runstopButton->setSizePolicy(sizePolicy1);
        ui_runstopButton->setMinimumSize(QSize(95, 30));
        ui_runstopButton->setMaximumSize(QSize(95, 30));
        ui_runstopButton->setSizeIncrement(QSize(0, 0));
        ui_runstopButton->setBaseSize(QSize(0, 0));
        ui_runstopButton->setFocusPolicy(Qt::NoFocus);
        ui_runstopButton->setLayoutDirection(Qt::LeftToRight);
        ui_runstopButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30L.png);\n"
"color:black;\n"
"font-size:10pt;\n"
"padding-left:5px;\n"
"font:bold;\n"
"}\n"
"QPushButton:checked{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30Green.png);\n"
"color:white;\n"
"font:bold;\n"
"}\n"
"QPushButton:disabled{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30L.png);\n"
"color:yellow;\n"
"font:bold;\n"
"}"));
        ui_runstopButton->setCheckable(true);
        ui_runstopButton->setFlat(true);

        hboxLayout->addWidget(ui_runstopButton);

        ui_estopButton = new QPushButton(MainWindow);
        ui_estopButton->setObjectName(QString::fromUtf8("ui_estopButton"));
        sizePolicy.setHeightForWidth(ui_estopButton->sizePolicy().hasHeightForWidth());
        ui_estopButton->setSizePolicy(sizePolicy);
        ui_estopButton->setMinimumSize(QSize(95, 30));
        ui_estopButton->setMaximumSize(QSize(95, 30));

        hboxLayout->addWidget(ui_estopButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        ui_closeButton = new QPushButton(MainWindow);
        ui_closeButton->setObjectName(QString::fromUtf8("ui_closeButton"));
        sizePolicy.setHeightForWidth(ui_closeButton->sizePolicy().hasHeightForWidth());
        ui_closeButton->setSizePolicy(sizePolicy);
        ui_closeButton->setMinimumSize(QSize(60, 30));
        ui_closeButton->setMaximumSize(QSize(60, 30));
        ui_closeButton->setFocusPolicy(Qt::NoFocus);
        ui_closeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/close-60L.png);\n"
"color:black;\n"
"font-size:11pt;\n"
"text-align:left;\n"
"}\n"
"QPushButton:pressed{\n"
"background-image:url(:/actions/close-60D.png);\n"
"color:black;\n"
"font-size:11pt;\n"
"text-align:left;\n"
"}"));
        ui_closeButton->setIconSize(QSize(54, 27));
        ui_closeButton->setAutoExclusive(false);
        ui_closeButton->setDefault(false);
        ui_closeButton->setFlat(true);

        hboxLayout->addWidget(ui_closeButton);


        vboxLayout->addLayout(hboxLayout);

        ui_widget = new QWidget(MainWindow);
        ui_widget->setObjectName(QString::fromUtf8("ui_widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ui_widget->sizePolicy().hasHeightForWidth());
        ui_widget->setSizePolicy(sizePolicy2);
        ui_widget->setMinimumSize(QSize(320, 213));
        ui_widget->setMaximumSize(QSize(320, 213));

        vboxLayout->addWidget(ui_widget);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        MainWindow->setStyleSheet(QApplication::translate("MainWindow", "QDialog { background-image: url(:/background-inverted.png) }", 0, QApplication::UnicodeUTF8));
        ui_backButton->setText(QString());
        ui_runstopButton->setText(QApplication::translate("MainWindow", "Run ---", 0, QApplication::UnicodeUTF8));
        ui_estopButton->setStyleSheet(QApplication::translate("MainWindow", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30Red.png);\n"
"color:white;\n"
"font:bold;\n"
"font-size:14pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_estopButton->setText(QApplication::translate("MainWindow", "E-Stop", 0, QApplication::UnicodeUTF8));
        ui_closeButton->setText(QApplication::translate("MainWindow", "100%", 0, QApplication::UnicodeUTF8));
        ui_widget->setStyleSheet(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
