/********************************************************************************
** Form generated from reading UI file 'cbcregisterstab.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBCREGISTERSTAB_H
#define UI_CBCREGISTERSTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CbcRegistersTab
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *loCbcs;
    QHBoxLayout *loButtons;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnWrite;
    QPushButton *btnRefresh;
    QSpacerItem *spacerRefresh;

    void setupUi(QWidget *CbcRegistersTab)
    {
        if (CbcRegistersTab->objectName().isEmpty())
            CbcRegistersTab->setObjectName(QString::fromUtf8("CbcRegistersTab"));
        CbcRegistersTab->resize(477, 474);
        verticalLayout_4 = new QVBoxLayout(CbcRegistersTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        loCbcs = new QVBoxLayout();
        loCbcs->setObjectName(QString::fromUtf8("loCbcs"));

        verticalLayout_4->addLayout(loCbcs);

        loButtons = new QHBoxLayout();
        loButtons->setObjectName(QString::fromUtf8("loButtons"));
        groupBox = new QGroupBox(CbcRegistersTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnWrite = new QPushButton(groupBox);
        btnWrite->setObjectName(QString::fromUtf8("btnWrite"));

        horizontalLayout->addWidget(btnWrite);

        btnRefresh = new QPushButton(groupBox);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));

        horizontalLayout->addWidget(btnRefresh);

        spacerRefresh = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerRefresh);


        loButtons->addWidget(groupBox);


        verticalLayout_4->addLayout(loButtons);


        retranslateUi(CbcRegistersTab);

        QMetaObject::connectSlotsByName(CbcRegistersTab);
    } // setupUi

    void retranslateUi(QWidget *CbcRegistersTab)
    {
        CbcRegistersTab->setWindowTitle(QApplication::translate("CbcRegistersTab", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        btnWrite->setText(QApplication::translate("CbcRegistersTab", "Write", 0, QApplication::UnicodeUTF8));
        btnRefresh->setText(QApplication::translate("CbcRegistersTab", "Refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CbcRegistersTab: public Ui_CbcRegistersTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBCREGISTERSTAB_H
