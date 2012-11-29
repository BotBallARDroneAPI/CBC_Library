/********************************************************************************
** Form generated from reading UI file 'Graph.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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

class Ui_Graph
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QComboBox *ui_xSelect;
    QSpacerItem *spacerItem1;
    QComboBox *ui_ySelect;
    QSpacerItem *spacerItem2;
    QComboBox *ui_zSelect;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem4;
    QWidget *ui_graphWidget;
    QSpacerItem *spacerItem5;
    QHBoxLayout *hboxLayout2;
    QPushButton *ui_resetButton;
    QSpacerItem *spacerItem6;
    QLabel *ui_xValue;
    QSpacerItem *spacerItem7;
    QLabel *ui_yValue;
    QSpacerItem *spacerItem8;
    QLabel *ui_zValue;
    QSpacerItem *spacerItem9;
    QLineEdit *ui_delTimeLine;
    QLabel *label;
    QSpacerItem *spacerItem10;

    void setupUi(QWidget *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName(QString::fromUtf8("Graph"));
        Graph->resize(320, 213);
        Graph->setMinimumSize(QSize(320, 213));
        Graph->setMaximumSize(QSize(320, 213));
        vboxLayout = new QVBoxLayout(Graph);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        ui_xSelect = new QComboBox(Graph);
        ui_xSelect->setObjectName(QString::fromUtf8("ui_xSelect"));
        QFont font;
        ui_xSelect->setFont(font);
        ui_xSelect->setEditable(false);
        ui_xSelect->setMaxVisibleItems(11);

        hboxLayout->addWidget(ui_xSelect);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        ui_ySelect = new QComboBox(Graph);
        ui_ySelect->setObjectName(QString::fromUtf8("ui_ySelect"));
        ui_ySelect->setFont(font);
        ui_ySelect->setEditable(false);
        ui_ySelect->setMaxVisibleItems(11);

        hboxLayout->addWidget(ui_ySelect);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        ui_zSelect = new QComboBox(Graph);
        ui_zSelect->setObjectName(QString::fromUtf8("ui_zSelect"));
        ui_zSelect->setFont(font);
        ui_zSelect->setEditable(false);
        ui_zSelect->setMaxVisibleItems(11);

        hboxLayout->addWidget(ui_zSelect);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);

        ui_graphWidget = new QWidget(Graph);
        ui_graphWidget->setObjectName(QString::fromUtf8("ui_graphWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(ui_graphWidget->sizePolicy().hasHeightForWidth());
        ui_graphWidget->setSizePolicy(sizePolicy);
        ui_graphWidget->setMinimumSize(QSize(280, 160));
        ui_graphWidget->setMaximumSize(QSize(280, 160));

        hboxLayout1->addWidget(ui_graphWidget);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem5);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        ui_resetButton = new QPushButton(Graph);
        ui_resetButton->setObjectName(QString::fromUtf8("ui_resetButton"));
        ui_resetButton->setMinimumSize(QSize(80, 30));
        ui_resetButton->setMaximumSize(QSize(80, 30));

        hboxLayout2->addWidget(ui_resetButton);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem6);

        ui_xValue = new QLabel(Graph);
        ui_xValue->setObjectName(QString::fromUtf8("ui_xValue"));
        ui_xValue->setMinimumSize(QSize(40, 0));
        ui_xValue->setAlignment(Qt::AlignCenter);

        hboxLayout2->addWidget(ui_xValue);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem7);

        ui_yValue = new QLabel(Graph);
        ui_yValue->setObjectName(QString::fromUtf8("ui_yValue"));
        ui_yValue->setMinimumSize(QSize(40, 0));
        ui_yValue->setAlignment(Qt::AlignCenter);

        hboxLayout2->addWidget(ui_yValue);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem8);

        ui_zValue = new QLabel(Graph);
        ui_zValue->setObjectName(QString::fromUtf8("ui_zValue"));
        ui_zValue->setMinimumSize(QSize(40, 0));
        ui_zValue->setAlignment(Qt::AlignCenter);

        hboxLayout2->addWidget(ui_zValue);

        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem9);

        ui_delTimeLine = new QLineEdit(Graph);
        ui_delTimeLine->setObjectName(QString::fromUtf8("ui_delTimeLine"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ui_delTimeLine->sizePolicy().hasHeightForWidth());
        ui_delTimeLine->setSizePolicy(sizePolicy1);
        ui_delTimeLine->setMaximumSize(QSize(60, 16777215));
        ui_delTimeLine->setLayoutDirection(Qt::RightToLeft);

        hboxLayout2->addWidget(ui_delTimeLine);

        label = new QLabel(Graph);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout2->addWidget(label);

        spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem10);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(Graph);

        ui_xSelect->setCurrentIndex(1);
        ui_ySelect->setCurrentIndex(2);
        ui_zSelect->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QWidget *Graph)
    {
        Graph->setWindowTitle(QApplication::translate("Graph", "Form", 0, QApplication::UnicodeUTF8));
        ui_xSelect->clear();
        ui_xSelect->insertItems(0, QStringList()
         << QApplication::translate("Graph", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Acc X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Acc Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Acc Z", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 15", 0, QApplication::UnicodeUTF8)
        );
        ui_xSelect->setStyleSheet(QApplication::translate("Graph", "background:rgb(30,255,30);", 0, QApplication::UnicodeUTF8));
        ui_ySelect->clear();
        ui_ySelect->insertItems(0, QStringList()
         << QApplication::translate("Graph", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Acc X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Acc Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Acc Z", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 15", 0, QApplication::UnicodeUTF8)
        );
        ui_ySelect->setStyleSheet(QApplication::translate("Graph", "background:yellow;", 0, QApplication::UnicodeUTF8));
        ui_zSelect->clear();
        ui_zSelect->insertItems(0, QStringList()
         << QApplication::translate("Graph", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Acc X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Acc Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Acc Z", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Ang 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Graph", "Dig 15", 0, QApplication::UnicodeUTF8)
        );
        ui_zSelect->setStyleSheet(QApplication::translate("Graph", "background:red;", 0, QApplication::UnicodeUTF8));
        ui_resetButton->setStyleSheet(QApplication::translate("Graph", "QPushButton{\n"
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
        ui_resetButton->setText(QApplication::translate("Graph", "Reset", 0, QApplication::UnicodeUTF8));
        ui_xValue->setStyleSheet(QApplication::translate("Graph", "color:rgb(30,255,30);\n"
"font-size:12pt;\n"
"font:bold;", 0, QApplication::UnicodeUTF8));
        ui_xValue->setText(QApplication::translate("Graph", "9999", 0, QApplication::UnicodeUTF8));
        ui_yValue->setStyleSheet(QApplication::translate("Graph", "color:yellow;\n"
"font-size:12pt;\n"
"font:bold;", 0, QApplication::UnicodeUTF8));
        ui_yValue->setText(QApplication::translate("Graph", "9999", 0, QApplication::UnicodeUTF8));
        ui_zValue->setStyleSheet(QApplication::translate("Graph", "color:red;\n"
"font-size:12pt;\n"
"font:bold;", 0, QApplication::UnicodeUTF8));
        ui_zValue->setText(QApplication::translate("Graph", "9999", 0, QApplication::UnicodeUTF8));
        ui_delTimeLine->setText(QApplication::translate("Graph", "600", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Graph", "ms", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
