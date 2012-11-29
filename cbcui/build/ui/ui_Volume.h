/********************************************************************************
** Form generated from reading UI file 'Volume.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUME_H
#define UI_VOLUME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Volume
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *ui_volumeLabel;
    QSlider *ui_volume;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Volume)
    {
        if (Volume->objectName().isEmpty())
            Volume->setObjectName(QString::fromUtf8("Volume"));
        Volume->resize(320, 213);
        Volume->setMinimumSize(QSize(320, 213));
        Volume->setMaximumSize(QSize(320, 213));
        gridLayout = new QGridLayout(Volume);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        ui_volumeLabel = new QLabel(Volume);
        ui_volumeLabel->setObjectName(QString::fromUtf8("ui_volumeLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        ui_volumeLabel->setFont(font);
        ui_volumeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(ui_volumeLabel);

        ui_volume = new QSlider(Volume);
        ui_volume->setObjectName(QString::fromUtf8("ui_volume"));
        ui_volume->setMinimumSize(QSize(150, 30));
        ui_volume->setMaximumSize(QSize(200, 40));
        ui_volume->setMinimum(0);
        ui_volume->setMaximum(100);
        ui_volume->setPageStep(10);
        ui_volume->setValue(100);
        ui_volume->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(ui_volume);

        verticalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        retranslateUi(Volume);

        QMetaObject::connectSlotsByName(Volume);
    } // setupUi

    void retranslateUi(QWidget *Volume)
    {
        Volume->setWindowTitle(QApplication::translate("Volume", "Form", 0, QApplication::UnicodeUTF8));
        ui_volumeLabel->setText(QApplication::translate("Volume", "Master Volume", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Volume: public Ui_Volume {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUME_H
