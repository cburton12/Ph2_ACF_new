/********************************************************************************
** Form generated from reading UI file 'aboutbox.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTBOX_H
#define UI_ABOUTBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutBox
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *gbAbout;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblOne;
    QLabel *lblTwo;
    QLabel *label_3;
    QDialogButtonBox *btnOK;

    void setupUi(QDialog *AboutBox)
    {
        if (AboutBox->objectName().isEmpty())
            AboutBox->setObjectName(QString::fromUtf8("AboutBox"));
        AboutBox->resize(184, 164);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutBox->sizePolicy().hasHeightForWidth());
        AboutBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AboutBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gbAbout = new QGroupBox(AboutBox);
        gbAbout->setObjectName(QString::fromUtf8("gbAbout"));
        verticalLayout_2 = new QVBoxLayout(gbAbout);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lblOne = new QLabel(gbAbout);
        lblOne->setObjectName(QString::fromUtf8("lblOne"));

        verticalLayout_2->addWidget(lblOne);

        lblTwo = new QLabel(gbAbout);
        lblTwo->setObjectName(QString::fromUtf8("lblTwo"));

        verticalLayout_2->addWidget(lblTwo);

        label_3 = new QLabel(gbAbout);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        btnOK = new QDialogButtonBox(gbAbout);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setOrientation(Qt::Vertical);
        btnOK->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(btnOK);


        verticalLayout->addWidget(gbAbout);


        retranslateUi(AboutBox);
        QObject::connect(btnOK, SIGNAL(accepted()), AboutBox, SLOT(accept()));
        QObject::connect(btnOK, SIGNAL(rejected()), AboutBox, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutBox);
    } // setupUi

    void retranslateUi(QDialog *AboutBox)
    {
        AboutBox->setWindowTitle(QApplication::translate("AboutBox", "Dialog", 0, QApplication::UnicodeUTF8));
        gbAbout->setTitle(QApplication::translate("AboutBox", "About", 0, QApplication::UnicodeUTF8));
        lblOne->setText(QApplication::translate("AboutBox", "Ph2DAQ_GUI", 0, QApplication::UnicodeUTF8));
        lblTwo->setText(QApplication::translate("AboutBox", "Written by Fionn Ball", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AboutBox", "f.ballATcern.ch", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutBox: public Ui_AboutBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTBOX_H
