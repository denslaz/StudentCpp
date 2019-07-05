/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextBrowser *vivod;
    QPushButton *clear_2;
    QPushButton *change;
    QPushButton *clear;
    QPushButton *undo;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *minus;
    QPushButton *seven;
    QPushButton *five;
    QPushButton *six;
    QPushButton *plus;
    QPushButton *four;
    QPushButton *two;
    QPushButton *three;
    QPushButton *ymnojenie;
    QPushButton *one;
    QPushButton *kvadrat;
    QPushButton *koreni;
    QPushButton *delenie;
    QPushButton *zero;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(514, 505);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        vivod = new QTextBrowser(centralWidget);
        vivod->setObjectName(QString::fromUtf8("vivod"));
        vivod->setGeometry(QRect(0, 0, 513, 61));
        clear_2 = new QPushButton(centralWidget);
        clear_2->setObjectName(QString::fromUtf8("clear_2"));
        clear_2->setGeometry(QRect(-1, 58, 131, 81));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        clear_2->setFont(font);
        change = new QPushButton(centralWidget);
        change->setObjectName(QString::fromUtf8("change"));
        change->setGeometry(QRect(127, 58, 131, 81));
        QFont font1;
        font1.setPointSize(12);
        change->setFont(font1);
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(383, 58, 131, 81));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        clear->setFont(font2);
        undo = new QPushButton(centralWidget);
        undo->setObjectName(QString::fromUtf8("undo"));
        undo->setGeometry(QRect(255, 58, 131, 81));
        undo->setFont(font2);
        eight = new QPushButton(centralWidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(127, 130, 131, 81));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        eight->setFont(font3);
        nine = new QPushButton(centralWidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(255, 130, 131, 81));
        nine->setFont(font3);
        minus = new QPushButton(centralWidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setGeometry(QRect(383, 130, 131, 81));
        QFont font4;
        font4.setPointSize(14);
        minus->setFont(font4);
        seven = new QPushButton(centralWidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(-1, 130, 131, 81));
        seven->setFont(font3);
        five = new QPushButton(centralWidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(127, 208, 131, 81));
        five->setFont(font3);
        six = new QPushButton(centralWidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(255, 208, 131, 81));
        six->setFont(font3);
        plus = new QPushButton(centralWidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(383, 208, 131, 81));
        plus->setFont(font4);
        four = new QPushButton(centralWidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(-1, 208, 131, 81));
        four->setFont(font3);
        two = new QPushButton(centralWidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(127, 286, 131, 81));
        two->setFont(font3);
        three = new QPushButton(centralWidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(255, 286, 131, 77));
        three->setFont(font3);
        ymnojenie = new QPushButton(centralWidget);
        ymnojenie->setObjectName(QString::fromUtf8("ymnojenie"));
        ymnojenie->setGeometry(QRect(383, 286, 131, 81));
        ymnojenie->setFont(font4);
        one = new QPushButton(centralWidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(-1, 286, 131, 81));
        one->setFont(font3);
        kvadrat = new QPushButton(centralWidget);
        kvadrat->setObjectName(QString::fromUtf8("kvadrat"));
        kvadrat->setGeometry(QRect(127, 360, 131, 81));
        kvadrat->setFont(font4);
        koreni = new QPushButton(centralWidget);
        koreni->setObjectName(QString::fromUtf8("koreni"));
        koreni->setGeometry(QRect(255, 360, 131, 81));
        koreni->setFont(font4);
        delenie = new QPushButton(centralWidget);
        delenie->setObjectName(QString::fromUtf8("delenie"));
        delenie->setGeometry(QRect(383, 360, 131, 81));
        delenie->setFont(font4);
        zero = new QPushButton(centralWidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(-1, 360, 131, 81));
        zero->setFont(font3);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 514, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        vivod->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">0</span></p></body></html>", nullptr));
        clear_2->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        change->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        undo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        ymnojenie->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        kvadrat->setText(QCoreApplication::translate("MainWindow", "^2", nullptr));
        koreni->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        delenie->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
