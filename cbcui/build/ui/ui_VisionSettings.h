/********************************************************************************
** Form generated from reading UI file 'VisionSettings.ui'
**
** Created: Mon Oct 8 15:52:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISIONSETTINGS_H
#define UI_VISIONSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisionSettings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *camImage;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *ui_visionSettingLfButton;
    QStackedWidget *ui_paramStack;
    QWidget *ui_brightnessPage;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *ui_brightnessLineEdit;
    QSlider *ui_brightnessSlider;
    QWidget *ui_contrastPage;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *ui_contrastLineEdit;
    QSlider *ui_contrastSlider;
    QWidget *ui_sharpnessPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *ui_sharpnessLineEdit;
    QSlider *ui_sharpnessSlider;
    QWidget *ui_gammaPage;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QLineEdit *ui_gammaLineEdit;
    QSlider *ui_gammaSlider;
    QWidget *ui_colorBalancePage;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *ui_redBalLineEdit;
    QLabel *label_5;
    QLineEdit *ui_blueBalLineEdit;
    QCheckBox *ui_autoWhiteBalCheckBox;
    QSlider *ui_blueBalSlider;
    QSlider *ui_redBalSlider;
    QWidget *ui_defaultPage;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *ui_defaultButton;
    QWidget *ui_exposurePage;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *ui_exposureLineEdit;
    QSlider *ui_exposureSlider;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *ui_autoExposureCheckBox;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *ui_visionSettingRtButton;

    void setupUi(QWidget *VisionSettings)
    {
        if (VisionSettings->objectName().isEmpty())
            VisionSettings->setObjectName(QString::fromUtf8("VisionSettings"));
        VisionSettings->resize(320, 213);
        VisionSettings->setMinimumSize(QSize(320, 213));
        VisionSettings->setMaximumSize(QSize(320, 213));
        verticalLayout = new QVBoxLayout(VisionSettings);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        camImage = new QStackedWidget(VisionSettings);
        camImage->setObjectName(QString::fromUtf8("camImage"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(160);
        sizePolicy.setVerticalStretch(120);
        sizePolicy.setHeightForWidth(camImage->sizePolicy().hasHeightForWidth());
        camImage->setSizePolicy(sizePolicy);
        camImage->setMinimumSize(QSize(160, 120));
        camImage->setMaximumSize(QSize(160, 120));

        horizontalLayout->addWidget(camImage);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(10, 0, 10, 0);
        ui_visionSettingLfButton = new QPushButton(VisionSettings);
        ui_visionSettingLfButton->setObjectName(QString::fromUtf8("ui_visionSettingLfButton"));
        ui_visionSettingLfButton->setMinimumSize(QSize(30, 30));
        ui_visionSettingLfButton->setMaximumSize(QSize(30, 30));
        ui_visionSettingLfButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/arrowLf-30L.png);\n"
"color:black;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/arrowLf-30D.png);\n"
"color:white;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}"));

        horizontalLayout_8->addWidget(ui_visionSettingLfButton);

        ui_paramStack = new QStackedWidget(VisionSettings);
        ui_paramStack->setObjectName(QString::fromUtf8("ui_paramStack"));
        ui_brightnessPage = new QWidget();
        ui_brightnessPage->setObjectName(QString::fromUtf8("ui_brightnessPage"));
        verticalLayout_2 = new QVBoxLayout(ui_brightnessPage);
#ifndef Q_OS_MAC
        verticalLayout_2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
#endif
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ui_brightnessPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(label);

        ui_brightnessLineEdit = new QLineEdit(ui_brightnessPage);
        ui_brightnessLineEdit->setObjectName(QString::fromUtf8("ui_brightnessLineEdit"));
        ui_brightnessLineEdit->setMaximumSize(QSize(80, 20));
        ui_brightnessLineEdit->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(ui_brightnessLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        ui_brightnessSlider = new QSlider(ui_brightnessPage);
        ui_brightnessSlider->setObjectName(QString::fromUtf8("ui_brightnessSlider"));
        ui_brightnessSlider->setMaximumSize(QSize(16777215, 16777215));
        ui_brightnessSlider->setMaximum(255);
        ui_brightnessSlider->setPageStep(25);
        ui_brightnessSlider->setValue(127);
        ui_brightnessSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(ui_brightnessSlider);

        ui_paramStack->addWidget(ui_brightnessPage);
        ui_contrastPage = new QWidget();
        ui_contrastPage->setObjectName(QString::fromUtf8("ui_contrastPage"));
        verticalLayout_5 = new QVBoxLayout(ui_contrastPage);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(ui_contrastPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_3->addWidget(label_2);

        ui_contrastLineEdit = new QLineEdit(ui_contrastPage);
        ui_contrastLineEdit->setObjectName(QString::fromUtf8("ui_contrastLineEdit"));
        ui_contrastLineEdit->setMaximumSize(QSize(80, 20));
        ui_contrastLineEdit->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_3->addWidget(ui_contrastLineEdit);


        verticalLayout_5->addLayout(horizontalLayout_3);

        ui_contrastSlider = new QSlider(ui_contrastPage);
        ui_contrastSlider->setObjectName(QString::fromUtf8("ui_contrastSlider"));
        ui_contrastSlider->setMaximum(255);
        ui_contrastSlider->setPageStep(25);
        ui_contrastSlider->setValue(127);
        ui_contrastSlider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(ui_contrastSlider);

        ui_paramStack->addWidget(ui_contrastPage);
        ui_sharpnessPage = new QWidget();
        ui_sharpnessPage->setObjectName(QString::fromUtf8("ui_sharpnessPage"));
        verticalLayout_3 = new QVBoxLayout(ui_sharpnessPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(ui_sharpnessPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        ui_sharpnessLineEdit = new QLineEdit(ui_sharpnessPage);
        ui_sharpnessLineEdit->setObjectName(QString::fromUtf8("ui_sharpnessLineEdit"));
        ui_sharpnessLineEdit->setMaximumSize(QSize(80, 20));
        ui_sharpnessLineEdit->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_5->addWidget(ui_sharpnessLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        ui_sharpnessSlider = new QSlider(ui_sharpnessPage);
        ui_sharpnessSlider->setObjectName(QString::fromUtf8("ui_sharpnessSlider"));
        ui_sharpnessSlider->setMaximum(63);
        ui_sharpnessSlider->setValue(31);
        ui_sharpnessSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(ui_sharpnessSlider);

        ui_paramStack->addWidget(ui_sharpnessPage);
        ui_gammaPage = new QWidget();
        ui_gammaPage->setObjectName(QString::fromUtf8("ui_gammaPage"));
        verticalLayout_4 = new QVBoxLayout(ui_gammaPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(ui_gammaPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_9->addWidget(label_6);

        ui_gammaLineEdit = new QLineEdit(ui_gammaPage);
        ui_gammaLineEdit->setObjectName(QString::fromUtf8("ui_gammaLineEdit"));
        ui_gammaLineEdit->setMaximumSize(QSize(80, 20));
        ui_gammaLineEdit->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_9->addWidget(ui_gammaLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_9);

        ui_gammaSlider = new QSlider(ui_gammaPage);
        ui_gammaSlider->setObjectName(QString::fromUtf8("ui_gammaSlider"));
        ui_gammaSlider->setMaximum(255);
        ui_gammaSlider->setPageStep(25);
        ui_gammaSlider->setValue(100);
        ui_gammaSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(ui_gammaSlider);

        ui_paramStack->addWidget(ui_gammaPage);
        ui_colorBalancePage = new QWidget();
        ui_colorBalancePage->setObjectName(QString::fromUtf8("ui_colorBalancePage"));
        verticalLayout_6 = new QVBoxLayout(ui_colorBalancePage);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 3, -1, -1);
        label_4 = new QLabel(ui_colorBalancePage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        ui_redBalLineEdit = new QLineEdit(ui_colorBalancePage);
        ui_redBalLineEdit->setObjectName(QString::fromUtf8("ui_redBalLineEdit"));
        ui_redBalLineEdit->setMaximumSize(QSize(35, 20));
        ui_redBalLineEdit->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(ui_redBalLineEdit, 0, 1, 1, 1);

        label_5 = new QLabel(ui_colorBalancePage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        ui_blueBalLineEdit = new QLineEdit(ui_colorBalancePage);
        ui_blueBalLineEdit->setObjectName(QString::fromUtf8("ui_blueBalLineEdit"));
        ui_blueBalLineEdit->setMaximumSize(QSize(35, 20));
        ui_blueBalLineEdit->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(ui_blueBalLineEdit, 1, 1, 1, 1);

        ui_autoWhiteBalCheckBox = new QCheckBox(ui_colorBalancePage);
        ui_autoWhiteBalCheckBox->setObjectName(QString::fromUtf8("ui_autoWhiteBalCheckBox"));
        ui_autoWhiteBalCheckBox->setMaximumSize(QSize(16777215, 20));
        ui_autoWhiteBalCheckBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(ui_autoWhiteBalCheckBox, 3, 0, 1, 3);

        ui_blueBalSlider = new QSlider(ui_colorBalancePage);
        ui_blueBalSlider->setObjectName(QString::fromUtf8("ui_blueBalSlider"));
        ui_blueBalSlider->setMaximumSize(QSize(100, 16777215));
        ui_blueBalSlider->setMaximum(127);
        ui_blueBalSlider->setValue(31);
        ui_blueBalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ui_blueBalSlider, 1, 2, 1, 1);

        ui_redBalSlider = new QSlider(ui_colorBalancePage);
        ui_redBalSlider->setObjectName(QString::fromUtf8("ui_redBalSlider"));
        ui_redBalSlider->setMaximumSize(QSize(100, 16777215));
        ui_redBalSlider->setMaximum(127);
        ui_redBalSlider->setValue(31);
        ui_redBalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ui_redBalSlider, 0, 2, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        ui_paramStack->addWidget(ui_colorBalancePage);
        ui_defaultPage = new QWidget();
        ui_defaultPage->setObjectName(QString::fromUtf8("ui_defaultPage"));
        verticalLayout_8 = new QVBoxLayout(ui_defaultPage);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_8 = new QLabel(ui_defaultPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        ui_defaultButton = new QPushButton(ui_defaultPage);
        ui_defaultButton->setObjectName(QString::fromUtf8("ui_defaultButton"));
        ui_defaultButton->setMinimumSize(QSize(95, 30));
        ui_defaultButton->setMaximumSize(QSize(95, 30));
        ui_defaultButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30L.png);\n"
"color:black;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/rivet95x30D.png);\n"
"color:white;\n"
"font-size:12pt;\n"
"}"));

        horizontalLayout_10->addWidget(ui_defaultButton);


        verticalLayout_8->addLayout(horizontalLayout_10);

        ui_paramStack->addWidget(ui_defaultPage);
        ui_exposurePage = new QWidget();
        ui_exposurePage->setObjectName(QString::fromUtf8("ui_exposurePage"));
        verticalLayout_7 = new QVBoxLayout(ui_exposurePage);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(ui_exposurePage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_6->addWidget(label_7);

        ui_exposureLineEdit = new QLineEdit(ui_exposurePage);
        ui_exposureLineEdit->setObjectName(QString::fromUtf8("ui_exposureLineEdit"));
        ui_exposureLineEdit->setMaximumSize(QSize(80, 20));
        ui_exposureLineEdit->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_6->addWidget(ui_exposureLineEdit);


        verticalLayout_7->addLayout(horizontalLayout_6);

        ui_exposureSlider = new QSlider(ui_exposurePage);
        ui_exposureSlider->setObjectName(QString::fromUtf8("ui_exposureSlider"));
        ui_exposureSlider->setMaximumSize(QSize(300, 15));
        ui_exposureSlider->setLayoutDirection(Qt::LeftToRight);
        ui_exposureSlider->setAutoFillBackground(false);
        ui_exposureSlider->setMaximum(255);
        ui_exposureSlider->setSingleStep(1);
        ui_exposureSlider->setPageStep(25);
        ui_exposureSlider->setValue(1);
        ui_exposureSlider->setSliderPosition(1);
        ui_exposureSlider->setOrientation(Qt::Horizontal);
        ui_exposureSlider->setTickPosition(QSlider::NoTicks);
        ui_exposureSlider->setTickInterval(10000);

        verticalLayout_7->addWidget(ui_exposureSlider);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        ui_autoExposureCheckBox = new QCheckBox(ui_exposurePage);
        ui_autoExposureCheckBox->setObjectName(QString::fromUtf8("ui_autoExposureCheckBox"));
        ui_autoExposureCheckBox->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_7->addWidget(ui_autoExposureCheckBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout_7->addLayout(horizontalLayout_7);

        ui_paramStack->addWidget(ui_exposurePage);

        horizontalLayout_8->addWidget(ui_paramStack);

        ui_visionSettingRtButton = new QPushButton(VisionSettings);
        ui_visionSettingRtButton->setObjectName(QString::fromUtf8("ui_visionSettingRtButton"));
        ui_visionSettingRtButton->setMinimumSize(QSize(30, 30));
        ui_visionSettingRtButton->setMaximumSize(QSize(30, 30));
        ui_visionSettingRtButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:0px;\n"
"background-image:url(:/actions/arrowRt-30L.png);\n"
"color:black;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}\n"
"QPushButton:pressed{\n"
"border:0px;\n"
"background-image:url(:/actions/arrowRt-30D.png);\n"
"color:white;\n"
"font:bold;\n"
"font-size:12pt;\n"
"}"));

        horizontalLayout_8->addWidget(ui_visionSettingRtButton);


        verticalLayout->addLayout(horizontalLayout_8);


        retranslateUi(VisionSettings);

        camImage->setCurrentIndex(-1);
        ui_paramStack->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(VisionSettings);
    } // setupUi

    void retranslateUi(QWidget *VisionSettings)
    {
        VisionSettings->setWindowTitle(QApplication::translate("VisionSettings", "Form", 0, QApplication::UnicodeUTF8));
        ui_visionSettingLfButton->setText(QString());
        label->setText(QApplication::translate("VisionSettings", "Brightness", 0, QApplication::UnicodeUTF8));
        ui_brightnessLineEdit->setText(QApplication::translate("VisionSettings", "127", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("VisionSettings", "Contrast", 0, QApplication::UnicodeUTF8));
        ui_contrastLineEdit->setText(QApplication::translate("VisionSettings", "127", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("VisionSettings", "Sharpness", 0, QApplication::UnicodeUTF8));
        ui_sharpnessLineEdit->setText(QApplication::translate("VisionSettings", "31", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("VisionSettings", "Gamma", 0, QApplication::UnicodeUTF8));
        ui_gammaLineEdit->setText(QApplication::translate("VisionSettings", "100", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("VisionSettings", "Red Balance", 0, QApplication::UnicodeUTF8));
        ui_redBalLineEdit->setText(QApplication::translate("VisionSettings", "31", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("VisionSettings", "Blue Balance", 0, QApplication::UnicodeUTF8));
        ui_blueBalLineEdit->setText(QApplication::translate("VisionSettings", "31", 0, QApplication::UnicodeUTF8));
        ui_autoWhiteBalCheckBox->setText(QApplication::translate("VisionSettings", "Auto White Balance", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("VisionSettings", "Reset Camera Parameters", 0, QApplication::UnicodeUTF8));
        ui_defaultButton->setText(QApplication::translate("VisionSettings", "Default", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("VisionSettings", "Exposure", 0, QApplication::UnicodeUTF8));
        ui_exposureLineEdit->setText(QApplication::translate("VisionSettings", "100", 0, QApplication::UnicodeUTF8));
        ui_autoExposureCheckBox->setText(QApplication::translate("VisionSettings", "Auto Exposure", 0, QApplication::UnicodeUTF8));
        ui_visionSettingRtButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VisionSettings: public Ui_VisionSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISIONSETTINGS_H
