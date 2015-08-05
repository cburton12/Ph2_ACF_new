/********************************************************************************
** Form generated from reading UI file 'calibratetab.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATETAB_H
#define UI_CALIBRATETAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalibrateTab
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *gbSettings;
    QHBoxLayout *horizontalLayout;
    QGridLayout *loSettings;
    QCheckBox *chbxBit;
    QCheckBox *chbxScanV;
    QRadioButton *radioFast;
    QCheckBox *chbxAllChan;
    QRadioButton *radioOld;
    QPushButton *btnCalibrate;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *CalibrateTab)
    {
        if (CalibrateTab->objectName().isEmpty())
            CalibrateTab->setObjectName(QString::fromUtf8("CalibrateTab"));
        CalibrateTab->resize(400, 300);
        verticalLayout = new QVBoxLayout(CalibrateTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gbSettings = new QGroupBox(CalibrateTab);
        gbSettings->setObjectName(QString::fromUtf8("gbSettings"));
        horizontalLayout = new QHBoxLayout(gbSettings);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loSettings = new QGridLayout();
        loSettings->setObjectName(QString::fromUtf8("loSettings"));
        chbxBit = new QCheckBox(gbSettings);
        chbxBit->setObjectName(QString::fromUtf8("chbxBit"));

        loSettings->addWidget(chbxBit, 3, 0, 1, 1);

        chbxScanV = new QCheckBox(gbSettings);
        chbxScanV->setObjectName(QString::fromUtf8("chbxScanV"));

        loSettings->addWidget(chbxScanV, 2, 0, 1, 1);

        radioFast = new QRadioButton(gbSettings);
        radioFast->setObjectName(QString::fromUtf8("radioFast"));
        radioFast->setChecked(true);

        loSettings->addWidget(radioFast, 0, 0, 1, 1);

        chbxAllChan = new QCheckBox(gbSettings);
        chbxAllChan->setObjectName(QString::fromUtf8("chbxAllChan"));

        loSettings->addWidget(chbxAllChan, 4, 0, 1, 1);

        radioOld = new QRadioButton(gbSettings);
        radioOld->setObjectName(QString::fromUtf8("radioOld"));

        loSettings->addWidget(radioOld, 1, 0, 1, 1);


        horizontalLayout->addLayout(loSettings);

        btnCalibrate = new QPushButton(gbSettings);
        btnCalibrate->setObjectName(QString::fromUtf8("btnCalibrate"));

        horizontalLayout->addWidget(btnCalibrate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(gbSettings);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(CalibrateTab);

        QMetaObject::connectSlotsByName(CalibrateTab);
    } // setupUi

    void retranslateUi(QWidget *CalibrateTab)
    {
        CalibrateTab->setWindowTitle(QApplication::translate("CalibrateTab", "Form", 0, QApplication::UnicodeUTF8));
        gbSettings->setTitle(QApplication::translate("CalibrateTab", "Calibration", 0, QApplication::UnicodeUTF8));
        chbxBit->setText(QApplication::translate("CalibrateTab", "Bitwise Offset Tuning", 0, QApplication::UnicodeUTF8));
        chbxScanV->setText(QApplication::translate("CalibrateTab", "Scan VCth vs VPlus", 0, QApplication::UnicodeUTF8));
        radioFast->setText(QApplication::translate("CalibrateTab", "Fast Calibration", 0, QApplication::UnicodeUTF8));
        chbxAllChan->setText(QApplication::translate("CalibrateTab", "Calibration Using All Channels", 0, QApplication::UnicodeUTF8));
        radioOld->setText(QApplication::translate("CalibrateTab", "Old Calibration", 0, QApplication::UnicodeUTF8));
        btnCalibrate->setText(QApplication::translate("CalibrateTab", "Start Calibration", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CalibrateTab: public Ui_CalibrateTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATETAB_H
