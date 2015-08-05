/********************************************************************************
** Form generated from reading UI file 'hybridtesttab.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HYBRIDTESTTAB_H
#define UI_HYBRIDTESTTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDial>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HybridTestTab
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *loHybridTestTab;
    QGroupBox *gbSettings;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QLabel *lblVcth;
    QDial *dialVcth;
    QDial *dialEvents;
    QLineEdit *txtVcth;
    QLineEdit *txtEvents;
    QLabel *lblEvents;
    QVBoxLayout *loOptionsExtra;
    QCheckBox *checkTestReg;
    QCheckBox *checkScan;
    QCheckBox *checkHoleMode;
    QPushButton *btnStart;
    QSpacerItem *spacerSettings;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *HybridTestTab)
    {
        if (HybridTestTab->objectName().isEmpty())
            HybridTestTab->setObjectName(QString::fromUtf8("HybridTestTab"));
        HybridTestTab->resize(986, 659);
        horizontalLayout = new QHBoxLayout(HybridTestTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loHybridTestTab = new QVBoxLayout();
        loHybridTestTab->setObjectName(QString::fromUtf8("loHybridTestTab"));
        gbSettings = new QGroupBox(HybridTestTab);
        gbSettings->setObjectName(QString::fromUtf8("gbSettings"));
        horizontalLayout_3 = new QHBoxLayout(gbSettings);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblVcth = new QLabel(gbSettings);
        lblVcth->setObjectName(QString::fromUtf8("lblVcth"));

        gridLayout->addWidget(lblVcth, 0, 2, 1, 1, Qt::AlignHCenter);

        dialVcth = new QDial(gbSettings);
        dialVcth->setObjectName(QString::fromUtf8("dialVcth"));
        dialVcth->setCursor(QCursor(Qt::ArrowCursor));
        dialVcth->setMaximum(255);
        dialVcth->setValue(120);
        dialVcth->setInvertedAppearance(false);
        dialVcth->setWrapping(false);
        dialVcth->setNotchesVisible(false);

        gridLayout->addWidget(dialVcth, 1, 2, 1, 1);

        dialEvents = new QDial(gbSettings);
        dialEvents->setObjectName(QString::fromUtf8("dialEvents"));
        dialEvents->setMaximum(500);
        dialEvents->setValue(100);

        gridLayout->addWidget(dialEvents, 1, 4, 1, 1);

        txtVcth = new QLineEdit(gbSettings);
        txtVcth->setObjectName(QString::fromUtf8("txtVcth"));
        txtVcth->setMaximumSize(QSize(50, 20));

        gridLayout->addWidget(txtVcth, 2, 2, 1, 1, Qt::AlignHCenter);

        txtEvents = new QLineEdit(gbSettings);
        txtEvents->setObjectName(QString::fromUtf8("txtEvents"));
        txtEvents->setMaximumSize(QSize(50, 20));

        gridLayout->addWidget(txtEvents, 2, 4, 1, 1, Qt::AlignHCenter);

        lblEvents = new QLabel(gbSettings);
        lblEvents->setObjectName(QString::fromUtf8("lblEvents"));

        gridLayout->addWidget(lblEvents, 0, 4, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        loOptionsExtra = new QVBoxLayout();
        loOptionsExtra->setObjectName(QString::fromUtf8("loOptionsExtra"));
        checkTestReg = new QCheckBox(gbSettings);
        checkTestReg->setObjectName(QString::fromUtf8("checkTestReg"));

        loOptionsExtra->addWidget(checkTestReg);

        checkScan = new QCheckBox(gbSettings);
        checkScan->setObjectName(QString::fromUtf8("checkScan"));

        loOptionsExtra->addWidget(checkScan);

        checkHoleMode = new QCheckBox(gbSettings);
        checkHoleMode->setObjectName(QString::fromUtf8("checkHoleMode"));

        loOptionsExtra->addWidget(checkHoleMode);


        horizontalLayout_3->addLayout(loOptionsExtra);

        btnStart = new QPushButton(gbSettings);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));

        horizontalLayout_3->addWidget(btnStart);

        spacerSettings = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacerSettings);


        loHybridTestTab->addWidget(gbSettings);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        loHybridTestTab->addItem(verticalSpacer);


        horizontalLayout->addLayout(loHybridTestTab);


        retranslateUi(HybridTestTab);

        QMetaObject::connectSlotsByName(HybridTestTab);
    } // setupUi

    void retranslateUi(QWidget *HybridTestTab)
    {
        HybridTestTab->setWindowTitle(QApplication::translate("HybridTestTab", "Form", 0, QApplication::UnicodeUTF8));
        gbSettings->setTitle(QApplication::translate("HybridTestTab", "Hybrid Test", 0, QApplication::UnicodeUTF8));
        lblVcth->setText(QApplication::translate("HybridTestTab", "Vcth", 0, QApplication::UnicodeUTF8));
        txtVcth->setText(QApplication::translate("HybridTestTab", "120", 0, QApplication::UnicodeUTF8));
        txtEvents->setText(QApplication::translate("HybridTestTab", "100", 0, QApplication::UnicodeUTF8));
        lblEvents->setText(QApplication::translate("HybridTestTab", "Number of Events", 0, QApplication::UnicodeUTF8));
        checkTestReg->setText(QApplication::translate("HybridTestTab", "Test Registers", 0, QApplication::UnicodeUTF8));
        checkScan->setText(QApplication::translate("HybridTestTab", "Scan Threshold", 0, QApplication::UnicodeUTF8));
        checkHoleMode->setText(QApplication::translate("HybridTestTab", "Hole Mode", 0, QApplication::UnicodeUTF8));
        btnStart->setText(QApplication::translate("HybridTestTab", "Start Hybrid Test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HybridTestTab: public Ui_HybridTestTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HYBRIDTESTTAB_H
