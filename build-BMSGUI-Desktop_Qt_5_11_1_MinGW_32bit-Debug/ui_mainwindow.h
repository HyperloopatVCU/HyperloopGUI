/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_24;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLCDNumber *lcdm1b1;
    QLabel *label_2;
    QLCDNumber *lcdm1b3;
    QLabel *label_3;
    QLCDNumber *lcdm2b1;
    QLabel *label_4;
    QLCDNumber *lcdm2b3;
    QLabel *label_5;
    QLCDNumber *lcdm3b1;
    QLabel *label_6;
    QLCDNumber *lcdm3b3;
    QLabel *label_7;
    QLCDNumber *lcdm4b1;
    QLabel *label_8;
    QLCDNumber *lcdm4b3;
    QLabel *label_9;
    QLCDNumber *lcdm5b1;
    QLabel *label_10;
    QLCDNumber *lcdm5b3;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLCDNumber *lcdba;
    QLabel *label_12;
    QLCDNumber *lcdbb;
    QLabel *label_13;
    QLCDNumber *lcdlp;
    QWidget *widget2;
    QGridLayout *gridLayout_3;
    QLCDNumber *lcdV3;
    QLCDNumber *lcdVB;
    QLabel *label_23;
    QLCDNumber *lcdILP;
    QLabel *label_19;
    QLCDNumber *lcdV4;
    QLabel *label_22;
    QLCDNumber *lcdV2;
    QLabel *label_16;
    QLabel *label_21;
    QLCDNumber *lcdI4;
    QLCDNumber *lcdIA;
    QLCDNumber *lcdI2;
    QLCDNumber *lcdIB;
    QLCDNumber *lcdV5;
    QLabel *label_14;
    QLCDNumber *lcdV1;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_15;
    QLabel *label_20;
    QLCDNumber *lcdI5;
    QLCDNumber *lcdI1;
    QLCDNumber *lcdVA;
    QLCDNumber *lcdVLP;
    QLCDNumber *lcdI3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(649, 395);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(90, 20, 111, 20));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 40, 94, 277));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lcdm1b1 = new QLCDNumber(widget);
        lcdm1b1->setObjectName(QStringLiteral("lcdm1b1"));

        gridLayout->addWidget(lcdm1b1, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lcdm1b3 = new QLCDNumber(widget);
        lcdm1b3->setObjectName(QStringLiteral("lcdm1b3"));

        gridLayout->addWidget(lcdm1b3, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lcdm2b1 = new QLCDNumber(widget);
        lcdm2b1->setObjectName(QStringLiteral("lcdm2b1"));

        gridLayout->addWidget(lcdm2b1, 2, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lcdm2b3 = new QLCDNumber(widget);
        lcdm2b3->setObjectName(QStringLiteral("lcdm2b3"));

        gridLayout->addWidget(lcdm2b3, 3, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lcdm3b1 = new QLCDNumber(widget);
        lcdm3b1->setObjectName(QStringLiteral("lcdm3b1"));

        gridLayout->addWidget(lcdm3b1, 4, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lcdm3b3 = new QLCDNumber(widget);
        lcdm3b3->setObjectName(QStringLiteral("lcdm3b3"));

        gridLayout->addWidget(lcdm3b3, 5, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        lcdm4b1 = new QLCDNumber(widget);
        lcdm4b1->setObjectName(QStringLiteral("lcdm4b1"));

        gridLayout->addWidget(lcdm4b1, 6, 1, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        lcdm4b3 = new QLCDNumber(widget);
        lcdm4b3->setObjectName(QStringLiteral("lcdm4b3"));

        gridLayout->addWidget(lcdm4b3, 7, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        lcdm5b1 = new QLCDNumber(widget);
        lcdm5b1->setObjectName(QStringLiteral("lcdm5b1"));

        gridLayout->addWidget(lcdm5b1, 8, 1, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        lcdm5b3 = new QLCDNumber(widget);
        lcdm5b3->setObjectName(QStringLiteral("lcdm5b3"));

        gridLayout->addWidget(lcdm5b3, 9, 1, 1, 1);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(160, 40, 94, 81));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        lcdba = new QLCDNumber(widget1);
        lcdba->setObjectName(QStringLiteral("lcdba"));

        gridLayout_2->addWidget(lcdba, 0, 1, 1, 1);

        label_12 = new QLabel(widget1);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        lcdbb = new QLCDNumber(widget1);
        lcdbb->setObjectName(QStringLiteral("lcdbb"));

        gridLayout_2->addWidget(lcdbb, 1, 1, 1, 1);

        label_13 = new QLabel(widget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        lcdlp = new QLCDNumber(widget1);
        lcdlp->setObjectName(QStringLiteral("lcdlp"));

        gridLayout_2->addWidget(lcdlp, 2, 1, 1, 1);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(350, 50, 193, 265));
        gridLayout_3 = new QGridLayout(widget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lcdV3 = new QLCDNumber(widget2);
        lcdV3->setObjectName(QStringLiteral("lcdV3"));

        gridLayout_3->addWidget(lcdV3, 3, 2, 1, 1);

        lcdVB = new QLCDNumber(widget2);
        lcdVB->setObjectName(QStringLiteral("lcdVB"));

        gridLayout_3->addWidget(lcdVB, 7, 2, 1, 1);

        label_23 = new QLabel(widget2);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_3->addWidget(label_23, 8, 0, 1, 1);

        lcdILP = new QLCDNumber(widget2);
        lcdILP->setObjectName(QStringLiteral("lcdILP"));

        gridLayout_3->addWidget(lcdILP, 8, 1, 1, 1);

        label_19 = new QLabel(widget2);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_3->addWidget(label_19, 0, 1, 1, 1);

        lcdV4 = new QLCDNumber(widget2);
        lcdV4->setObjectName(QStringLiteral("lcdV4"));

        gridLayout_3->addWidget(lcdV4, 4, 2, 1, 1);

        label_22 = new QLabel(widget2);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_3->addWidget(label_22, 7, 0, 1, 1);

        lcdV2 = new QLCDNumber(widget2);
        lcdV2->setObjectName(QStringLiteral("lcdV2"));

        gridLayout_3->addWidget(lcdV2, 2, 2, 1, 1);

        label_16 = new QLabel(widget2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_3->addWidget(label_16, 3, 0, 1, 1);

        label_21 = new QLabel(widget2);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_3->addWidget(label_21, 6, 0, 1, 1);

        lcdI4 = new QLCDNumber(widget2);
        lcdI4->setObjectName(QStringLiteral("lcdI4"));

        gridLayout_3->addWidget(lcdI4, 4, 1, 1, 1);

        lcdIA = new QLCDNumber(widget2);
        lcdIA->setObjectName(QStringLiteral("lcdIA"));

        gridLayout_3->addWidget(lcdIA, 6, 1, 1, 1);

        lcdI2 = new QLCDNumber(widget2);
        lcdI2->setObjectName(QStringLiteral("lcdI2"));

        gridLayout_3->addWidget(lcdI2, 2, 1, 1, 1);

        lcdIB = new QLCDNumber(widget2);
        lcdIB->setObjectName(QStringLiteral("lcdIB"));

        gridLayout_3->addWidget(lcdIB, 7, 1, 1, 1);

        lcdV5 = new QLCDNumber(widget2);
        lcdV5->setObjectName(QStringLiteral("lcdV5"));

        gridLayout_3->addWidget(lcdV5, 5, 2, 1, 1);

        label_14 = new QLabel(widget2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 1, 0, 1, 1);

        lcdV1 = new QLCDNumber(widget2);
        lcdV1->setObjectName(QStringLiteral("lcdV1"));

        gridLayout_3->addWidget(lcdV1, 1, 2, 1, 1);

        label_17 = new QLabel(widget2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_3->addWidget(label_17, 4, 0, 1, 1);

        label_18 = new QLabel(widget2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_3->addWidget(label_18, 5, 0, 1, 1);

        label_15 = new QLabel(widget2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_3->addWidget(label_15, 2, 0, 1, 1);

        label_20 = new QLabel(widget2);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_3->addWidget(label_20, 0, 2, 1, 1);

        lcdI5 = new QLCDNumber(widget2);
        lcdI5->setObjectName(QStringLiteral("lcdI5"));

        gridLayout_3->addWidget(lcdI5, 5, 1, 1, 1);

        lcdI1 = new QLCDNumber(widget2);
        lcdI1->setObjectName(QStringLiteral("lcdI1"));

        gridLayout_3->addWidget(lcdI1, 1, 1, 1, 1);

        lcdVA = new QLCDNumber(widget2);
        lcdVA->setObjectName(QStringLiteral("lcdVA"));

        gridLayout_3->addWidget(lcdVA, 6, 2, 1, 1);

        lcdVLP = new QLCDNumber(widget2);
        lcdVLP->setObjectName(QStringLiteral("lcdVLP"));

        gridLayout_3->addWidget(lcdVLP, 8, 2, 1, 1);

        lcdI3 = new QLCDNumber(widget2);
        lcdI3->setObjectName(QStringLiteral("lcdI3"));

        gridLayout_3->addWidget(lcdI3, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 649, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "BATTERY TEMPERATURES", nullptr));
        label->setText(QApplication::translate("MainWindow", "M1B1", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "M1B3", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "M2B1", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "M2B3", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "M3B1", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "M3B3", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "M4B1", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "M4B3", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "M5B1", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "M5B3", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "BA", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "BB", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "LP", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "LOW POWER", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "CURRENT", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "BRAKE B", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "MODULE 3", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "BRAKE A", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "MODULE 1", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "MODULE 4", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "MODULE 5", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "MODULE 2", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "VOLTAGE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
