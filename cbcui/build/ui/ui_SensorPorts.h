/********************************************************************************
** Form generated from reading UI file 'SensorPorts.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORPORTS_H
#define UI_SENSORPORTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SensorPorts
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *label_49;
    QLabel *label_41;
    QLabel *ui_Analog8;
    QLabel *label_42;
    QLabel *ui_Analog9;
    QLabel *label_43;
    QLabel *ui_Analog10;
    QLabel *label_44;
    QLabel *ui_Analog11;
    QLabel *label_45;
    QLabel *ui_Analog12;
    QLabel *label_46;
    QLabel *ui_Analog13;
    QLabel *label_47;
    QLabel *ui_Analog14;
    QLabel *label_48;
    QLabel *ui_Analog15;
    QSpacerItem *spacerItem;
    QCheckBox *ui_floatingAnalog0;
    QCheckBox *ui_floatingAnalog1;
    QCheckBox *ui_floatingAnalog2;
    QCheckBox *ui_floatingAnalog3;
    QCheckBox *ui_floatingAnalog4;
    QCheckBox *ui_floatingAnalog5;
    QCheckBox *ui_floatingAnalog6;
    QCheckBox *ui_floatingAnalog7;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout1;
    QLabel *label_40;
    QLabel *label_11;
    QLabel *ui_Digital0;
    QLabel *label_33;
    QLabel *ui_Digital1;
    QLabel *label_34;
    QLabel *ui_Digital2;
    QLabel *label_35;
    QLabel *ui_Digital3;
    QLabel *label_36;
    QLabel *ui_Digital4;
    QLabel *label_37;
    QLabel *ui_Digital5;
    QLabel *label_38;
    QLabel *ui_Digital6;
    QLabel *label_39;
    QLabel *ui_Digital7;
    QSpacerItem *spacerItem1;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout2;
    QLabel *label;
    QSpacerItem *spacerItem2;
    QLabel *label_3;
    QLabel *ui_AccelerometerX;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QLabel *label_50;
    QLabel *ui_AccelerometerY;
    QSpacerItem *spacerItem5;
    QSpacerItem *spacerItem6;
    QLabel *label_51;
    QLabel *ui_AccelerometerZ;
    QSpacerItem *spacerItem7;
    QLabel *label_2;
    QSpacerItem *spacerItem8;
    QLabel *label_52;
    QLabel *ui_BatteryVoltage;
    QSpacerItem *spacerItem9;
    QSpacerItem *spacerItem10;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout3;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QLabel *label_56;
    QLabel *label_57;
    QLabel *ui_Motor0Power;
    QLabel *ui_Motor1Power;
    QLabel *ui_Motor2Power;
    QLabel *ui_Motor3Power;
    QLabel *label_58;
    QLabel *ui_Motor0Position;
    QLabel *ui_Motor1Position;
    QLabel *ui_Motor2Position;
    QLabel *ui_Motor3Position;
    QLabel *label_59;

    void setupUi(QWidget *SensorPorts)
    {
        if (SensorPorts->objectName().isEmpty())
            SensorPorts->setObjectName(QString::fromUtf8("SensorPorts"));
        SensorPorts->resize(320, 213);
        SensorPorts->setMinimumSize(QSize(320, 213));
        SensorPorts->setMaximumSize(QSize(320, 227));
        vboxLayout = new QVBoxLayout(SensorPorts);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(3);
        label_49 = new QLabel(SensorPorts);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_49->setFont(font);
        label_49->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_49, 0, 0, 1, 2);

        label_41 = new QLabel(SensorPorts);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setMinimumSize(QSize(17, 12));
        label_41->setMaximumSize(QSize(17, 12));
        label_41->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_41, 1, 0, 1, 1);

        ui_Analog8 = new QLabel(SensorPorts);
        ui_Analog8->setObjectName(QString::fromUtf8("ui_Analog8"));
        ui_Analog8->setMinimumSize(QSize(40, 12));
        ui_Analog8->setMaximumSize(QSize(40, 12));
        ui_Analog8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ui_Analog8, 1, 1, 1, 1);

        label_42 = new QLabel(SensorPorts);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setMinimumSize(QSize(17, 12));
        label_42->setMaximumSize(QSize(17, 12));
        label_42->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_42, 2, 0, 1, 1);

        ui_Analog9 = new QLabel(SensorPorts);
        ui_Analog9->setObjectName(QString::fromUtf8("ui_Analog9"));
        ui_Analog9->setMinimumSize(QSize(40, 12));
        ui_Analog9->setMaximumSize(QSize(40, 12));
        ui_Analog9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ui_Analog9, 2, 1, 1, 1);

        label_43 = new QLabel(SensorPorts);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setMinimumSize(QSize(17, 12));
        label_43->setMaximumSize(QSize(17, 12));
        label_43->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_43, 3, 0, 1, 1);

        ui_Analog10 = new QLabel(SensorPorts);
        ui_Analog10->setObjectName(QString::fromUtf8("ui_Analog10"));
        ui_Analog10->setMinimumSize(QSize(40, 12));
        ui_Analog10->setMaximumSize(QSize(40, 12));
        ui_Analog10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ui_Analog10, 3, 1, 1, 1);

        label_44 = new QLabel(SensorPorts);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setMinimumSize(QSize(17, 12));
        label_44->setMaximumSize(QSize(17, 12));
        label_44->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_44, 4, 0, 1, 1);

        ui_Analog11 = new QLabel(SensorPorts);
        ui_Analog11->setObjectName(QString::fromUtf8("ui_Analog11"));
        ui_Analog11->setMinimumSize(QSize(40, 12));
        ui_Analog11->setMaximumSize(QSize(40, 12));
        ui_Analog11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ui_Analog11, 4, 1, 1, 1);

        label_45 = new QLabel(SensorPorts);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setMinimumSize(QSize(17, 12));
        label_45->setMaximumSize(QSize(17, 12));
        label_45->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_45, 5, 0, 1, 1);

        ui_Analog12 = new QLabel(SensorPorts);
        ui_Analog12->setObjectName(QString::fromUtf8("ui_Analog12"));
        ui_Analog12->setMinimumSize(QSize(40, 12));
        ui_Analog12->setMaximumSize(QSize(40, 12));
        ui_Analog12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ui_Analog12, 5, 1, 1, 1);

        label_46 = new QLabel(SensorPorts);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setMinimumSize(QSize(17, 12));
        label_46->setMaximumSize(QSize(17, 12));
        label_46->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_46, 6, 0, 1, 1);

        ui_Analog13 = new QLabel(SensorPorts);
        ui_Analog13->setObjectName(QString::fromUtf8("ui_Analog13"));
        ui_Analog13->setMinimumSize(QSize(40, 12));
        ui_Analog13->setMaximumSize(QSize(40, 12));
        ui_Analog13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ui_Analog13, 6, 1, 1, 1);

        label_47 = new QLabel(SensorPorts);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setMinimumSize(QSize(17, 12));
        label_47->setMaximumSize(QSize(17, 12));
        label_47->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_47, 7, 0, 1, 1);

        ui_Analog14 = new QLabel(SensorPorts);
        ui_Analog14->setObjectName(QString::fromUtf8("ui_Analog14"));
        ui_Analog14->setMinimumSize(QSize(40, 12));
        ui_Analog14->setMaximumSize(QSize(40, 12));
        ui_Analog14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ui_Analog14, 7, 1, 1, 1);

        label_48 = new QLabel(SensorPorts);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setMinimumSize(QSize(17, 12));
        label_48->setMaximumSize(QSize(17, 12));
        label_48->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_48, 8, 0, 1, 1);

        ui_Analog15 = new QLabel(SensorPorts);
        ui_Analog15->setObjectName(QString::fromUtf8("ui_Analog15"));
        ui_Analog15->setMinimumSize(QSize(40, 12));
        ui_Analog15->setMaximumSize(QSize(40, 12));
        ui_Analog15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ui_Analog15, 8, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 9, 0, 1, 1);

        ui_floatingAnalog0 = new QCheckBox(SensorPorts);
        ui_floatingAnalog0->setObjectName(QString::fromUtf8("ui_floatingAnalog0"));
        ui_floatingAnalog0->setMinimumSize(QSize(14, 14));
        ui_floatingAnalog0->setMaximumSize(QSize(14, 14));
        QFont font1;
        font1.setKerning(false);
        ui_floatingAnalog0->setFont(font1);
        ui_floatingAnalog0->setIconSize(QSize(20, 20));

        gridLayout->addWidget(ui_floatingAnalog0, 1, 2, 1, 1);

        ui_floatingAnalog1 = new QCheckBox(SensorPorts);
        ui_floatingAnalog1->setObjectName(QString::fromUtf8("ui_floatingAnalog1"));
        ui_floatingAnalog1->setMinimumSize(QSize(14, 14));
        ui_floatingAnalog1->setMaximumSize(QSize(14, 14));
        ui_floatingAnalog1->setFont(font1);
        ui_floatingAnalog1->setIconSize(QSize(20, 20));

        gridLayout->addWidget(ui_floatingAnalog1, 2, 2, 1, 1);

        ui_floatingAnalog2 = new QCheckBox(SensorPorts);
        ui_floatingAnalog2->setObjectName(QString::fromUtf8("ui_floatingAnalog2"));
        ui_floatingAnalog2->setMinimumSize(QSize(14, 14));
        ui_floatingAnalog2->setMaximumSize(QSize(14, 14));
        ui_floatingAnalog2->setFont(font1);
        ui_floatingAnalog2->setIconSize(QSize(20, 20));

        gridLayout->addWidget(ui_floatingAnalog2, 3, 2, 1, 1);

        ui_floatingAnalog3 = new QCheckBox(SensorPorts);
        ui_floatingAnalog3->setObjectName(QString::fromUtf8("ui_floatingAnalog3"));
        ui_floatingAnalog3->setMinimumSize(QSize(14, 14));
        ui_floatingAnalog3->setMaximumSize(QSize(14, 14));
        ui_floatingAnalog3->setFont(font1);
        ui_floatingAnalog3->setIconSize(QSize(20, 20));

        gridLayout->addWidget(ui_floatingAnalog3, 4, 2, 1, 1);

        ui_floatingAnalog4 = new QCheckBox(SensorPorts);
        ui_floatingAnalog4->setObjectName(QString::fromUtf8("ui_floatingAnalog4"));
        ui_floatingAnalog4->setMinimumSize(QSize(14, 14));
        ui_floatingAnalog4->setMaximumSize(QSize(14, 14));
        ui_floatingAnalog4->setFont(font1);
        ui_floatingAnalog4->setIconSize(QSize(20, 20));

        gridLayout->addWidget(ui_floatingAnalog4, 5, 2, 1, 1);

        ui_floatingAnalog5 = new QCheckBox(SensorPorts);
        ui_floatingAnalog5->setObjectName(QString::fromUtf8("ui_floatingAnalog5"));
        ui_floatingAnalog5->setMinimumSize(QSize(14, 14));
        ui_floatingAnalog5->setMaximumSize(QSize(14, 14));
        ui_floatingAnalog5->setFont(font1);
        ui_floatingAnalog5->setIconSize(QSize(20, 20));

        gridLayout->addWidget(ui_floatingAnalog5, 6, 2, 1, 1);

        ui_floatingAnalog6 = new QCheckBox(SensorPorts);
        ui_floatingAnalog6->setObjectName(QString::fromUtf8("ui_floatingAnalog6"));
        ui_floatingAnalog6->setMinimumSize(QSize(14, 14));
        ui_floatingAnalog6->setMaximumSize(QSize(14, 14));
        ui_floatingAnalog6->setFont(font1);
        ui_floatingAnalog6->setIconSize(QSize(20, 20));

        gridLayout->addWidget(ui_floatingAnalog6, 7, 2, 1, 1);

        ui_floatingAnalog7 = new QCheckBox(SensorPorts);
        ui_floatingAnalog7->setObjectName(QString::fromUtf8("ui_floatingAnalog7"));
        ui_floatingAnalog7->setMinimumSize(QSize(14, 14));
        ui_floatingAnalog7->setMaximumSize(QSize(14, 14));
        ui_floatingAnalog7->setFont(font1);
        ui_floatingAnalog7->setIconSize(QSize(20, 20));

        gridLayout->addWidget(ui_floatingAnalog7, 8, 2, 1, 1);


        hboxLayout->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(0);
        gridLayout1->setVerticalSpacing(3);
        label_40 = new QLabel(SensorPorts);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setFont(font);
        label_40->setAlignment(Qt::AlignCenter);

        gridLayout1->addWidget(label_40, 0, 0, 1, 2);

        label_11 = new QLabel(SensorPorts);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(22, 14));
        label_11->setMaximumSize(QSize(22, 14));

        gridLayout1->addWidget(label_11, 1, 0, 1, 1);

        ui_Digital0 = new QLabel(SensorPorts);
        ui_Digital0->setObjectName(QString::fromUtf8("ui_Digital0"));
        ui_Digital0->setMinimumSize(QSize(22, 12));
        ui_Digital0->setMaximumSize(QSize(22, 12));

        gridLayout1->addWidget(ui_Digital0, 1, 1, 1, 1);

        label_33 = new QLabel(SensorPorts);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMinimumSize(QSize(22, 14));
        label_33->setMaximumSize(QSize(22, 14));

        gridLayout1->addWidget(label_33, 2, 0, 1, 1);

        ui_Digital1 = new QLabel(SensorPorts);
        ui_Digital1->setObjectName(QString::fromUtf8("ui_Digital1"));
        ui_Digital1->setMinimumSize(QSize(22, 12));
        ui_Digital1->setMaximumSize(QSize(22, 12));

        gridLayout1->addWidget(ui_Digital1, 2, 1, 1, 1);

        label_34 = new QLabel(SensorPorts);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setMinimumSize(QSize(22, 14));
        label_34->setMaximumSize(QSize(22, 14));

        gridLayout1->addWidget(label_34, 3, 0, 1, 1);

        ui_Digital2 = new QLabel(SensorPorts);
        ui_Digital2->setObjectName(QString::fromUtf8("ui_Digital2"));
        ui_Digital2->setMinimumSize(QSize(22, 12));
        ui_Digital2->setMaximumSize(QSize(22, 12));

        gridLayout1->addWidget(ui_Digital2, 3, 1, 1, 1);

        label_35 = new QLabel(SensorPorts);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setMinimumSize(QSize(22, 14));
        label_35->setMaximumSize(QSize(22, 14));

        gridLayout1->addWidget(label_35, 4, 0, 1, 1);

        ui_Digital3 = new QLabel(SensorPorts);
        ui_Digital3->setObjectName(QString::fromUtf8("ui_Digital3"));
        ui_Digital3->setMinimumSize(QSize(22, 12));
        ui_Digital3->setMaximumSize(QSize(22, 12));

        gridLayout1->addWidget(ui_Digital3, 4, 1, 1, 1);

        label_36 = new QLabel(SensorPorts);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setMinimumSize(QSize(22, 14));
        label_36->setMaximumSize(QSize(22, 14));

        gridLayout1->addWidget(label_36, 5, 0, 1, 1);

        ui_Digital4 = new QLabel(SensorPorts);
        ui_Digital4->setObjectName(QString::fromUtf8("ui_Digital4"));
        ui_Digital4->setMinimumSize(QSize(22, 12));
        ui_Digital4->setMaximumSize(QSize(22, 12));

        gridLayout1->addWidget(ui_Digital4, 5, 1, 1, 1);

        label_37 = new QLabel(SensorPorts);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setMinimumSize(QSize(22, 14));
        label_37->setMaximumSize(QSize(22, 14));

        gridLayout1->addWidget(label_37, 6, 0, 1, 1);

        ui_Digital5 = new QLabel(SensorPorts);
        ui_Digital5->setObjectName(QString::fromUtf8("ui_Digital5"));
        ui_Digital5->setMinimumSize(QSize(22, 12));
        ui_Digital5->setMaximumSize(QSize(22, 12));

        gridLayout1->addWidget(ui_Digital5, 6, 1, 1, 1);

        label_38 = new QLabel(SensorPorts);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setMinimumSize(QSize(22, 14));
        label_38->setMaximumSize(QSize(22, 14));

        gridLayout1->addWidget(label_38, 7, 0, 1, 1);

        ui_Digital6 = new QLabel(SensorPorts);
        ui_Digital6->setObjectName(QString::fromUtf8("ui_Digital6"));
        ui_Digital6->setMinimumSize(QSize(22, 12));
        ui_Digital6->setMaximumSize(QSize(22, 12));

        gridLayout1->addWidget(ui_Digital6, 7, 1, 1, 1);

        label_39 = new QLabel(SensorPorts);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setMinimumSize(QSize(22, 14));
        label_39->setMaximumSize(QSize(22, 14));

        gridLayout1->addWidget(label_39, 8, 0, 1, 1);

        ui_Digital7 = new QLabel(SensorPorts);
        ui_Digital7->setObjectName(QString::fromUtf8("ui_Digital7"));
        ui_Digital7->setMinimumSize(QSize(22, 12));
        ui_Digital7->setMaximumSize(QSize(22, 12));

        gridLayout1->addWidget(ui_Digital7, 8, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 9, 0, 1, 1);


        hboxLayout->addLayout(gridLayout1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);

        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setHorizontalSpacing(0);
        gridLayout2->setVerticalSpacing(3);
        label = new QLabel(SensorPorts);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout2->addWidget(label, 0, 0, 1, 4);

        spacerItem2 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 1, 0, 1, 1);

        label_3 = new QLabel(SensorPorts);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout2->addWidget(label_3, 1, 1, 1, 1);

        ui_AccelerometerX = new QLabel(SensorPorts);
        ui_AccelerometerX->setObjectName(QString::fromUtf8("ui_AccelerometerX"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_AccelerometerX->sizePolicy().hasHeightForWidth());
        ui_AccelerometerX->setSizePolicy(sizePolicy);
        ui_AccelerometerX->setMinimumSize(QSize(45, 0));
        ui_AccelerometerX->setMaximumSize(QSize(20, 16777215));
        ui_AccelerometerX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(ui_AccelerometerX, 1, 2, 1, 1);

        spacerItem3 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem3, 1, 3, 1, 1);

        spacerItem4 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem4, 2, 0, 1, 1);

        label_50 = new QLabel(SensorPorts);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        gridLayout2->addWidget(label_50, 2, 1, 1, 1);

        ui_AccelerometerY = new QLabel(SensorPorts);
        ui_AccelerometerY->setObjectName(QString::fromUtf8("ui_AccelerometerY"));
        sizePolicy.setHeightForWidth(ui_AccelerometerY->sizePolicy().hasHeightForWidth());
        ui_AccelerometerY->setSizePolicy(sizePolicy);
        ui_AccelerometerY->setMinimumSize(QSize(45, 0));
        ui_AccelerometerY->setMaximumSize(QSize(20, 16777215));
        ui_AccelerometerY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(ui_AccelerometerY, 2, 2, 1, 1);

        spacerItem5 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem5, 2, 3, 1, 1);

        spacerItem6 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem6, 3, 0, 1, 1);

        label_51 = new QLabel(SensorPorts);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        gridLayout2->addWidget(label_51, 3, 1, 1, 1);

        ui_AccelerometerZ = new QLabel(SensorPorts);
        ui_AccelerometerZ->setObjectName(QString::fromUtf8("ui_AccelerometerZ"));
        sizePolicy.setHeightForWidth(ui_AccelerometerZ->sizePolicy().hasHeightForWidth());
        ui_AccelerometerZ->setSizePolicy(sizePolicy);
        ui_AccelerometerZ->setMinimumSize(QSize(45, 0));
        ui_AccelerometerZ->setMaximumSize(QSize(20, 16777215));
        ui_AccelerometerZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(ui_AccelerometerZ, 3, 2, 1, 1);

        spacerItem7 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem7, 3, 3, 1, 1);

        label_2 = new QLabel(SensorPorts);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout2->addWidget(label_2, 4, 0, 1, 4);

        spacerItem8 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem8, 5, 0, 1, 1);

        label_52 = new QLabel(SensorPorts);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        gridLayout2->addWidget(label_52, 5, 1, 1, 1);

        ui_BatteryVoltage = new QLabel(SensorPorts);
        ui_BatteryVoltage->setObjectName(QString::fromUtf8("ui_BatteryVoltage"));
        ui_BatteryVoltage->setMinimumSize(QSize(40, 0));
        ui_BatteryVoltage->setMaximumSize(QSize(40, 16777215));
        ui_BatteryVoltage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(ui_BatteryVoltage, 5, 2, 1, 1);

        spacerItem9 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem9, 5, 3, 1, 1);

        spacerItem10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem10, 6, 2, 1, 1);


        hboxLayout->addLayout(gridLayout2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_4);


        vboxLayout->addLayout(hboxLayout);

        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(3);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        label_53 = new QLabel(SensorPorts);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(label_53, 0, 1, 1, 1);

        label_54 = new QLabel(SensorPorts);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setMinimumSize(QSize(55, 0));
        label_54->setMaximumSize(QSize(55, 16777215));
        label_54->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(label_54, 0, 2, 1, 1);

        label_55 = new QLabel(SensorPorts);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMinimumSize(QSize(55, 0));
        label_55->setMaximumSize(QSize(55, 16777215));
        label_55->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(label_55, 0, 3, 1, 1);

        label_56 = new QLabel(SensorPorts);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setMinimumSize(QSize(55, 0));
        label_56->setMaximumSize(QSize(55, 16777215));
        label_56->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(label_56, 0, 4, 1, 1);

        label_57 = new QLabel(SensorPorts);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setFont(font);

        gridLayout3->addWidget(label_57, 1, 0, 1, 1);

        ui_Motor0Power = new QLabel(SensorPorts);
        ui_Motor0Power->setObjectName(QString::fromUtf8("ui_Motor0Power"));
        ui_Motor0Power->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(ui_Motor0Power, 1, 1, 1, 1);

        ui_Motor1Power = new QLabel(SensorPorts);
        ui_Motor1Power->setObjectName(QString::fromUtf8("ui_Motor1Power"));
        ui_Motor1Power->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(ui_Motor1Power, 1, 2, 1, 1);

        ui_Motor2Power = new QLabel(SensorPorts);
        ui_Motor2Power->setObjectName(QString::fromUtf8("ui_Motor2Power"));
        ui_Motor2Power->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(ui_Motor2Power, 1, 3, 1, 1);

        ui_Motor3Power = new QLabel(SensorPorts);
        ui_Motor3Power->setObjectName(QString::fromUtf8("ui_Motor3Power"));
        ui_Motor3Power->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(ui_Motor3Power, 1, 4, 1, 1);

        label_58 = new QLabel(SensorPorts);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setFont(font);

        gridLayout3->addWidget(label_58, 2, 0, 1, 1);

        ui_Motor0Position = new QLabel(SensorPorts);
        ui_Motor0Position->setObjectName(QString::fromUtf8("ui_Motor0Position"));
        ui_Motor0Position->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(ui_Motor0Position, 2, 1, 1, 1);

        ui_Motor1Position = new QLabel(SensorPorts);
        ui_Motor1Position->setObjectName(QString::fromUtf8("ui_Motor1Position"));
        ui_Motor1Position->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(ui_Motor1Position, 2, 2, 1, 1);

        ui_Motor2Position = new QLabel(SensorPorts);
        ui_Motor2Position->setObjectName(QString::fromUtf8("ui_Motor2Position"));
        ui_Motor2Position->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(ui_Motor2Position, 2, 3, 1, 1);

        ui_Motor3Position = new QLabel(SensorPorts);
        ui_Motor3Position->setObjectName(QString::fromUtf8("ui_Motor3Position"));
        ui_Motor3Position->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(ui_Motor3Position, 2, 4, 1, 1);

        label_59 = new QLabel(SensorPorts);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setFont(font);

        gridLayout3->addWidget(label_59, 0, 0, 1, 1);


        vboxLayout->addLayout(gridLayout3);


        retranslateUi(SensorPorts);

        QMetaObject::connectSlotsByName(SensorPorts);
    } // setupUi

    void retranslateUi(QWidget *SensorPorts)
    {
        SensorPorts->setWindowTitle(QApplication::translate("SensorPorts", "Form", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("SensorPorts", "Analogs", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("SensorPorts", "0:", 0, QApplication::UnicodeUTF8));
        ui_Analog8->setText(QApplication::translate("SensorPorts", "4095", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("SensorPorts", "1:", 0, QApplication::UnicodeUTF8));
        ui_Analog9->setText(QApplication::translate("SensorPorts", "4095", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("SensorPorts", "2:", 0, QApplication::UnicodeUTF8));
        ui_Analog10->setText(QApplication::translate("SensorPorts", "4095", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("SensorPorts", "3:", 0, QApplication::UnicodeUTF8));
        ui_Analog11->setText(QApplication::translate("SensorPorts", "4095", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("SensorPorts", "4:", 0, QApplication::UnicodeUTF8));
        ui_Analog12->setText(QApplication::translate("SensorPorts", "4095", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("SensorPorts", "5:", 0, QApplication::UnicodeUTF8));
        ui_Analog13->setText(QApplication::translate("SensorPorts", "4095", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("SensorPorts", "6:", 0, QApplication::UnicodeUTF8));
        ui_Analog14->setText(QApplication::translate("SensorPorts", "4095", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("SensorPorts", "7:", 0, QApplication::UnicodeUTF8));
        ui_Analog15->setText(QApplication::translate("SensorPorts", "4095", 0, QApplication::UnicodeUTF8));
        ui_floatingAnalog0->setText(QString());
        ui_floatingAnalog1->setText(QString());
        ui_floatingAnalog2->setText(QString());
        ui_floatingAnalog3->setText(QString());
        ui_floatingAnalog4->setText(QString());
        ui_floatingAnalog5->setText(QString());
        ui_floatingAnalog6->setText(QString());
        ui_floatingAnalog7->setText(QString());
        label_40->setText(QApplication::translate("SensorPorts", "Digitals", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("SensorPorts", "8:", 0, QApplication::UnicodeUTF8));
        ui_Digital0->setText(QApplication::translate("SensorPorts", "0", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("SensorPorts", "9:", 0, QApplication::UnicodeUTF8));
        ui_Digital1->setText(QApplication::translate("SensorPorts", "0", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("SensorPorts", "10:", 0, QApplication::UnicodeUTF8));
        ui_Digital2->setText(QApplication::translate("SensorPorts", "0", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("SensorPorts", "11:", 0, QApplication::UnicodeUTF8));
        ui_Digital3->setText(QApplication::translate("SensorPorts", "0", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("SensorPorts", "12:", 0, QApplication::UnicodeUTF8));
        ui_Digital4->setText(QApplication::translate("SensorPorts", "0", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("SensorPorts", "13:", 0, QApplication::UnicodeUTF8));
        ui_Digital5->setText(QApplication::translate("SensorPorts", "0", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("SensorPorts", "14:", 0, QApplication::UnicodeUTF8));
        ui_Digital6->setText(QApplication::translate("SensorPorts", "0", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("SensorPorts", "15:", 0, QApplication::UnicodeUTF8));
        ui_Digital7->setText(QApplication::translate("SensorPorts", "0", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SensorPorts", "Accelerometer", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SensorPorts", "X: ", 0, QApplication::UnicodeUTF8));
        ui_AccelerometerX->setText(QApplication::translate("SensorPorts", "9999", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("SensorPorts", "Y: ", 0, QApplication::UnicodeUTF8));
        ui_AccelerometerY->setText(QApplication::translate("SensorPorts", "9999", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("SensorPorts", "Z: ", 0, QApplication::UnicodeUTF8));
        ui_AccelerometerZ->setText(QApplication::translate("SensorPorts", "16384", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SensorPorts", "Battery", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("SensorPorts", "V: ", 0, QApplication::UnicodeUTF8));
        ui_BatteryVoltage->setText(QApplication::translate("SensorPorts", "9999", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("SensorPorts", "0", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("SensorPorts", "1", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("SensorPorts", "2", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("SensorPorts", "3", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("SensorPorts", "Power", 0, QApplication::UnicodeUTF8));
        ui_Motor0Power->setText(QApplication::translate("SensorPorts", "999999999", 0, QApplication::UnicodeUTF8));
        ui_Motor1Power->setText(QApplication::translate("SensorPorts", "999999999", 0, QApplication::UnicodeUTF8));
        ui_Motor2Power->setText(QApplication::translate("SensorPorts", "999999999", 0, QApplication::UnicodeUTF8));
        ui_Motor3Power->setText(QApplication::translate("SensorPorts", "999999999", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("SensorPorts", "Position", 0, QApplication::UnicodeUTF8));
        ui_Motor0Position->setText(QApplication::translate("SensorPorts", "999999999", 0, QApplication::UnicodeUTF8));
        ui_Motor1Position->setText(QApplication::translate("SensorPorts", "999999999", 0, QApplication::UnicodeUTF8));
        ui_Motor2Position->setText(QApplication::translate("SensorPorts", "999999999", 0, QApplication::UnicodeUTF8));
        ui_Motor3Position->setText(QApplication::translate("SensorPorts", "999999999", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("SensorPorts", "Motor", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SensorPorts: public Ui_SensorPorts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORPORTS_H
