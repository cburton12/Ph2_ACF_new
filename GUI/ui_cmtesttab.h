/********************************************************************************
** Form generated from reading UI file 'cmtesttab.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMTESTTAB_H
#define UI_CMTESTTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CmTestTab
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *gbSettings;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chbxScanNoise;
    QPushButton *btnLaunch;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *CmTestTab)
    {
        if (CmTestTab->objectName().isEmpty())
            CmTestTab->setObjectName(QString::fromUtf8("CmTestTab"));
        CmTestTab->resize(400, 300);
        horizontalLayout = new QHBoxLayout(CmTestTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gbSettings = new QGroupBox(CmTestTab);
        gbSettings->setObjectName(QString::fromUtf8("gbSettings"));
        horizontalLayout_2 = new QHBoxLayout(gbSettings);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        chbxScanNoise = new QCheckBox(gbSettings);
        chbxScanNoise->setObjectName(QString::fromUtf8("chbxScanNoise"));

        horizontalLayout_2->addWidget(chbxScanNoise);

        btnLaunch = new QPushButton(gbSettings);
        btnLaunch->setObjectName(QString::fromUtf8("btnLaunch"));

        horizontalLayout_2->addWidget(btnLaunch);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout->addWidget(gbSettings);


        retranslateUi(CmTestTab);

        QMetaObject::connectSlotsByName(CmTestTab);
    } // setupUi

    void retranslateUi(QWidget *CmTestTab)
    {
        CmTestTab->setWindowTitle(QApplication::translate("CmTestTab", "Form", 0, QApplication::UnicodeUTF8));
        gbSettings->setTitle(QApplication::translate("CmTestTab", "CM Test", 0, QApplication::UnicodeUTF8));
        chbxScanNoise->setText(QApplication::translate("CmTestTab", "Scan For Noisy Strips", 0, QApplication::UnicodeUTF8));
        btnLaunch->setText(QApplication::translate("CmTestTab", "CM Test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CmTestTab: public Ui_CmTestTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMTESTTAB_H
