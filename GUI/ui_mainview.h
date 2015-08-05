/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QAction *actionAbout;
    QAction *actionUser_Settings;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabMainView;
    QWidget *tabSetup;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *loSetup;
    QWidget *tabBeBoard;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *loBeBoard;
    QWidget *tabRegisters;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *loRegisters;
    QWidget *tabHybridTest;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *loHybridTest;
    QMenuBar *menuBar;
    QMenu *menuPh2DAQ_GUI;
    QMenu *menuLoad;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QString::fromUtf8("MainView"));
        MainView->resize(845, 666);
        actionAbout = new QAction(MainView);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionUser_Settings = new QAction(MainView);
        actionUser_Settings->setObjectName(QString::fromUtf8("actionUser_Settings"));
        centralWidget = new QWidget(MainView);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabMainView = new QTabWidget(centralWidget);
        tabMainView->setObjectName(QString::fromUtf8("tabMainView"));
        tabSetup = new QWidget();
        tabSetup->setObjectName(QString::fromUtf8("tabSetup"));
        verticalLayout_2 = new QVBoxLayout(tabSetup);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        loSetup = new QVBoxLayout();
        loSetup->setSpacing(6);
        loSetup->setObjectName(QString::fromUtf8("loSetup"));

        verticalLayout_2->addLayout(loSetup);

        tabMainView->addTab(tabSetup, QString());
        tabBeBoard = new QWidget();
        tabBeBoard->setObjectName(QString::fromUtf8("tabBeBoard"));
        verticalLayout_5 = new QVBoxLayout(tabBeBoard);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        loBeBoard = new QVBoxLayout();
        loBeBoard->setSpacing(6);
        loBeBoard->setObjectName(QString::fromUtf8("loBeBoard"));

        verticalLayout_5->addLayout(loBeBoard);

        tabMainView->addTab(tabBeBoard, QString());
        tabRegisters = new QWidget();
        tabRegisters->setObjectName(QString::fromUtf8("tabRegisters"));
        horizontalLayout_2 = new QHBoxLayout(tabRegisters);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        loRegisters = new QVBoxLayout();
        loRegisters->setSpacing(6);
        loRegisters->setObjectName(QString::fromUtf8("loRegisters"));

        horizontalLayout_2->addLayout(loRegisters);

        tabMainView->addTab(tabRegisters, QString());
        tabHybridTest = new QWidget();
        tabHybridTest->setObjectName(QString::fromUtf8("tabHybridTest"));
        verticalLayout_4 = new QVBoxLayout(tabHybridTest);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        loHybridTest = new QVBoxLayout();
        loHybridTest->setSpacing(6);
        loHybridTest->setObjectName(QString::fromUtf8("loHybridTest"));

        verticalLayout_4->addLayout(loHybridTest);

        tabMainView->addTab(tabHybridTest, QString());

        verticalLayout->addWidget(tabMainView);

        MainView->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainView);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 845, 22));
        menuPh2DAQ_GUI = new QMenu(menuBar);
        menuPh2DAQ_GUI->setObjectName(QString::fromUtf8("menuPh2DAQ_GUI"));
        menuLoad = new QMenu(menuPh2DAQ_GUI);
        menuLoad->setObjectName(QString::fromUtf8("menuLoad"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainView->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainView);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainView->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainView);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainView->setStatusBar(statusBar);

        menuBar->addAction(menuPh2DAQ_GUI->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuPh2DAQ_GUI->addAction(menuLoad->menuAction());
        menuLoad->addAction(actionUser_Settings);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainView);

        tabMainView->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QApplication::translate("MainView", "MainView", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainView", "About", 0, QApplication::UnicodeUTF8));
        actionUser_Settings->setText(QApplication::translate("MainView", "User Settings", 0, QApplication::UnicodeUTF8));
        tabMainView->setTabText(tabMainView->indexOf(tabSetup), QApplication::translate("MainView", "Setup", 0, QApplication::UnicodeUTF8));
        tabMainView->setTabText(tabMainView->indexOf(tabBeBoard), QApplication::translate("MainView", "BeBoard", 0, QApplication::UnicodeUTF8));
        tabMainView->setTabText(tabMainView->indexOf(tabRegisters), QApplication::translate("MainView", "Cbc Registers", 0, QApplication::UnicodeUTF8));
        tabMainView->setTabText(tabMainView->indexOf(tabHybridTest), QApplication::translate("MainView", "System Tests", 0, QApplication::UnicodeUTF8));
        menuPh2DAQ_GUI->setTitle(QApplication::translate("MainView", "File", 0, QApplication::UnicodeUTF8));
        menuLoad->setTitle(QApplication::translate("MainView", "Load...", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainView", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
