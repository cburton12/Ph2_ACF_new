/********************************************************************************
** Form generated from reading UI file 'beboardregisterstab.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEBOARDREGISTERSTAB_H
#define UI_BEBOARDREGISTERSTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BeBoardRegistersTab
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *loBeBoard;
    QHBoxLayout *loBtns;
    QPushButton *btnRefresh;
    QPushButton *btnWrite;

    void setupUi(QWidget *BeBoardRegistersTab)
    {
        if (BeBoardRegistersTab->objectName().isEmpty())
            BeBoardRegistersTab->setObjectName(QString::fromUtf8("BeBoardRegistersTab"));
        BeBoardRegistersTab->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(BeBoardRegistersTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        loBeBoard = new QVBoxLayout();
        loBeBoard->setObjectName(QString::fromUtf8("loBeBoard"));

        verticalLayout_2->addLayout(loBeBoard);

        loBtns = new QHBoxLayout();
        loBtns->setObjectName(QString::fromUtf8("loBtns"));
        btnRefresh = new QPushButton(BeBoardRegistersTab);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));

        loBtns->addWidget(btnRefresh);

        btnWrite = new QPushButton(BeBoardRegistersTab);
        btnWrite->setObjectName(QString::fromUtf8("btnWrite"));

        loBtns->addWidget(btnWrite);


        verticalLayout_2->addLayout(loBtns);


        retranslateUi(BeBoardRegistersTab);

        QMetaObject::connectSlotsByName(BeBoardRegistersTab);
    } // setupUi

    void retranslateUi(QWidget *BeBoardRegistersTab)
    {
        BeBoardRegistersTab->setWindowTitle(QApplication::translate("BeBoardRegistersTab", "Form", 0, QApplication::UnicodeUTF8));
        btnRefresh->setText(QApplication::translate("BeBoardRegistersTab", "Refresh", 0, QApplication::UnicodeUTF8));
        btnWrite->setText(QApplication::translate("BeBoardRegistersTab", "Write", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BeBoardRegistersTab: public Ui_BeBoardRegistersTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEBOARDREGISTERSTAB_H
