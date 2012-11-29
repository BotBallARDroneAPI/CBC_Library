/********************************************************************************
** Form generated from reading UI file 'Compiler.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPILER_H
#define UI_COMPILER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Compiler
{
public:
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *ui_output;

    void setupUi(QWidget *Compiler)
    {
        if (Compiler->objectName().isEmpty())
            Compiler->setObjectName(QString::fromUtf8("Compiler"));
        Compiler->resize(320, 213);
        Compiler->setMinimumSize(QSize(320, 213));
        Compiler->setMaximumSize(QSize(320, 213));
        horizontalLayout = new QHBoxLayout(Compiler);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ui_output = new QPlainTextEdit(Compiler);
        ui_output->setObjectName(QString::fromUtf8("ui_output"));

        horizontalLayout->addWidget(ui_output);


        retranslateUi(Compiler);

        QMetaObject::connectSlotsByName(Compiler);
    } // setupUi

    void retranslateUi(QWidget *Compiler)
    {
        Compiler->setWindowTitle(QApplication::translate("Compiler", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Compiler: public Ui_Compiler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPILER_H
