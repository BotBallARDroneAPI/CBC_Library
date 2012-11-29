/********************************************************************************
** Form generated from reading UI file 'FileManager.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEMANAGER_H
#define UI_FILEMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileManager
{
public:
    QHBoxLayout *hboxLayout;
    QListView *ui_directoryBrowser;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *ui_homeButton;
    QPushButton *ui_mountButton;
    QSpacerItem *spacerItem1;
    QPushButton *ui_actionButton;
    QPushButton *ui_stopButton;
    QSpacerItem *spacerItem2;
    QPushButton *ui_stageButton;
    QSpacerItem *verticalSpacer;
    QPushButton *ui_copyButton;
    QPushButton *ui_deleteButton;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *FileManager)
    {
        if (FileManager->objectName().isEmpty())
            FileManager->setObjectName(QString::fromUtf8("FileManager"));
        FileManager->resize(320, 213);
        FileManager->setMinimumSize(QSize(320, 213));
        FileManager->setMaximumSize(QSize(320, 213));
        hboxLayout = new QHBoxLayout(FileManager);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ui_directoryBrowser = new QListView(FileManager);
        ui_directoryBrowser->setObjectName(QString::fromUtf8("ui_directoryBrowser"));
        ui_directoryBrowser->setMinimumSize(QSize(200, 0));
        QFont font;
        font.setPointSize(12);
        ui_directoryBrowser->setFont(font);

        hboxLayout->addWidget(ui_directoryBrowser);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        ui_homeButton = new QPushButton(FileManager);
        ui_homeButton->setObjectName(QString::fromUtf8("ui_homeButton"));
        ui_homeButton->setMinimumSize(QSize(80, 30));
        ui_homeButton->setMaximumSize(QSize(80, 30));
        ui_homeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"}"));

        vboxLayout->addWidget(ui_homeButton);

        ui_mountButton = new QPushButton(FileManager);
        ui_mountButton->setObjectName(QString::fromUtf8("ui_mountButton"));
        ui_mountButton->setMinimumSize(QSize(80, 30));
        ui_mountButton->setMaximumSize(QSize(80, 30));

        vboxLayout->addWidget(ui_mountButton);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        ui_actionButton = new QPushButton(FileManager);
        ui_actionButton->setObjectName(QString::fromUtf8("ui_actionButton"));
        ui_actionButton->setMinimumSize(QSize(80, 30));
        ui_actionButton->setMaximumSize(QSize(80, 30));
        ui_actionButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"}"));

        vboxLayout->addWidget(ui_actionButton);

        ui_stopButton = new QPushButton(FileManager);
        ui_stopButton->setObjectName(QString::fromUtf8("ui_stopButton"));
        ui_stopButton->setMinimumSize(QSize(80, 30));
        ui_stopButton->setMaximumSize(QSize(80, 30));
        ui_stopButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"}"));

        vboxLayout->addWidget(ui_stopButton);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        ui_stageButton = new QPushButton(FileManager);
        ui_stageButton->setObjectName(QString::fromUtf8("ui_stageButton"));
        ui_stageButton->setMinimumSize(QSize(80, 30));
        ui_stageButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"}"));

        vboxLayout->addWidget(ui_stageButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);

        ui_copyButton = new QPushButton(FileManager);
        ui_copyButton->setObjectName(QString::fromUtf8("ui_copyButton"));
        ui_copyButton->setMinimumSize(QSize(80, 30));
        ui_copyButton->setMaximumSize(QSize(80, 30));

        vboxLayout->addWidget(ui_copyButton);

        ui_deleteButton = new QPushButton(FileManager);
        ui_deleteButton->setObjectName(QString::fromUtf8("ui_deleteButton"));
        ui_deleteButton->setMinimumSize(QSize(80, 30));
        ui_deleteButton->setMaximumSize(QSize(80, 30));

        vboxLayout->addWidget(ui_deleteButton);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);


        hboxLayout->addLayout(vboxLayout);


        retranslateUi(FileManager);

        QMetaObject::connectSlotsByName(FileManager);
    } // setupUi

    void retranslateUi(QWidget *FileManager)
    {
        FileManager->setWindowTitle(QApplication::translate("FileManager", "Form", 0, QApplication::UnicodeUTF8));
        ui_homeButton->setText(QApplication::translate("FileManager", "Home", 0, QApplication::UnicodeUTF8));
        ui_mountButton->setStyleSheet(QApplication::translate("FileManager", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_mountButton->setText(QApplication::translate("FileManager", "Mount USB", 0, QApplication::UnicodeUTF8));
        ui_actionButton->setText(QApplication::translate("FileManager", "Open", 0, QApplication::UnicodeUTF8));
        ui_stopButton->setText(QApplication::translate("FileManager", "Stop", 0, QApplication::UnicodeUTF8));
        ui_stageButton->setText(QApplication::translate("FileManager", "Stage", 0, QApplication::UnicodeUTF8));
        ui_copyButton->setStyleSheet(QApplication::translate("FileManager", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_copyButton->setText(QApplication::translate("FileManager", "Copy", 0, QApplication::UnicodeUTF8));
        ui_deleteButton->setStyleSheet(QApplication::translate("FileManager", "QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30L.png);\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet80x30D.png);\n"
"color:white;\n"
"}", 0, QApplication::UnicodeUTF8));
        ui_deleteButton->setText(QApplication::translate("FileManager", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FileManager: public Ui_FileManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEMANAGER_H
