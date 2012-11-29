/********************************************************************************
** Form generated from reading UI file 'VisionRawDisplay.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISIONRAWDISPLAY_H
#define UI_VISIONRAWDISPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisionRawDisplay
{
public:
    QHBoxLayout *hboxLayout;
    QLabel *label;

    void setupUi(QWidget *VisionRawDisplay)
    {
        if (VisionRawDisplay->objectName().isEmpty())
            VisionRawDisplay->setObjectName(QString::fromUtf8("VisionRawDisplay"));
        VisionRawDisplay->resize(320, 213);
        VisionRawDisplay->setMinimumSize(QSize(320, 213));
        VisionRawDisplay->setMaximumSize(QSize(320, 213));
        hboxLayout = new QHBoxLayout(VisionRawDisplay);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(VisionRawDisplay);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);


        retranslateUi(VisionRawDisplay);

        QMetaObject::connectSlotsByName(VisionRawDisplay);
    } // setupUi

    void retranslateUi(QWidget *VisionRawDisplay)
    {
        VisionRawDisplay->setWindowTitle(QApplication::translate("VisionRawDisplay", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VisionRawDisplay", "Vision Raw Display", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VisionRawDisplay: public Ui_VisionRawDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISIONRAWDISPLAY_H
