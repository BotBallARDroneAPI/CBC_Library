/********************************************************************************
** Form generated from reading UI file 'CreateStatus.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATESTATUS_H
#define UI_CREATESTATUS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateStatus
{
public:
    QHBoxLayout *hboxLayout;
    QLabel *label;

    void setupUi(QWidget *CreateStatus)
    {
        if (CreateStatus->objectName().isEmpty())
            CreateStatus->setObjectName(QString::fromUtf8("CreateStatus"));
        CreateStatus->resize(320, 213);
        CreateStatus->setMinimumSize(QSize(320, 213));
        CreateStatus->setMaximumSize(QSize(320, 213));
        hboxLayout = new QHBoxLayout(CreateStatus);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(CreateStatus);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);


        retranslateUi(CreateStatus);

        QMetaObject::connectSlotsByName(CreateStatus);
    } // setupUi

    void retranslateUi(QWidget *CreateStatus)
    {
        CreateStatus->setWindowTitle(QApplication::translate("CreateStatus", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CreateStatus", "Create Status Widget", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateStatus: public Ui_CreateStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATESTATUS_H
