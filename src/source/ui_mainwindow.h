/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton1;
    QPushButton *pushButton4;
    QPushButton *pushButton2;
    QPushButton *pushButton5;
    QPushButton *pushButton3;
    QPushButton *pushButton6;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButton7;
    QPushButton *pushButtonMultiply;
    QPushButton *pushButtonMinus;
    QPushButton *pushButtonPlus;
    QPushButton *pushButtonDivide;
    QPushButton *pushButtonFib;
    QPushButton *pushButtonSqrt;
    QPushButton *pushButtonFact;
    QPushButton *pushButton0;
    QPushButton *pushButtonEquals;
    QPushButton *pushButtonClean;
    QPushButton *pushButtonComma;
    QLineEdit *display;
    QLineEdit *displayPrevNum;
    QLineEdit *displayOper;
    QLineEdit *displayError;
    QPushButton *pushButtonPwr2;
    QPushButton *pushButtonPwrN;
    QPushButton *pushButtonNeg;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(450, 600);
        MainWindow->setMinimumSize(QSize(450, 600));
        MainWindow->setMaximumSize(QSize(450, 600));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #101820FF"));
        MainWindow->setIconSize(QSize(256, 256));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton1 = new QPushButton(centralwidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        pushButton1->setGeometry(QRect(10, 400, 101, 81));
        QFont font;
        font.setPointSize(12);
        pushButton1->setFont(font);
        pushButton1->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        pushButton4 = new QPushButton(centralwidget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        pushButton4->setGeometry(QRect(10, 310, 101, 81));
        pushButton4->setFont(font);
        pushButton4->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        pushButton2 = new QPushButton(centralwidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        pushButton2->setGeometry(QRect(120, 400, 101, 81));
        pushButton2->setFont(font);
        pushButton2->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        pushButton5 = new QPushButton(centralwidget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));
        pushButton5->setGeometry(QRect(120, 310, 101, 81));
        pushButton5->setFont(font);
        pushButton5->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        pushButton3 = new QPushButton(centralwidget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        pushButton3->setGeometry(QRect(230, 400, 101, 81));
        pushButton3->setFont(font);
        pushButton3->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        pushButton6 = new QPushButton(centralwidget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));
        pushButton6->setGeometry(QRect(230, 310, 101, 81));
        pushButton6->setFont(font);
        pushButton6->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        pushButton8 = new QPushButton(centralwidget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));
        pushButton8->setGeometry(QRect(120, 220, 101, 81));
        pushButton8->setFont(font);
        pushButton8->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        pushButton9 = new QPushButton(centralwidget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));
        pushButton9->setGeometry(QRect(230, 220, 101, 81));
        pushButton9->setFont(font);
        pushButton9->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        pushButton7 = new QPushButton(centralwidget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));
        pushButton7->setGeometry(QRect(10, 220, 101, 81));
        pushButton7->setFont(font);
        pushButton7->setAutoFillBackground(false);
        pushButton7->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        pushButtonMultiply = new QPushButton(centralwidget);
        pushButtonMultiply->setObjectName(QString::fromUtf8("pushButtonMultiply"));
        pushButtonMultiply->setGeometry(QRect(340, 220, 101, 81));
        pushButtonMultiply->setFont(font);
        pushButtonMultiply->setStyleSheet(QString::fromUtf8("background-color: #feffae"));
        pushButtonMinus = new QPushButton(centralwidget);
        pushButtonMinus->setObjectName(QString::fromUtf8("pushButtonMinus"));
        pushButtonMinus->setGeometry(QRect(340, 310, 101, 81));
        pushButtonMinus->setFont(font);
        pushButtonMinus->setStyleSheet(QString::fromUtf8("background-color: #feffae"));
        pushButtonPlus = new QPushButton(centralwidget);
        pushButtonPlus->setObjectName(QString::fromUtf8("pushButtonPlus"));
        pushButtonPlus->setGeometry(QRect(340, 400, 101, 81));
        pushButtonPlus->setFont(font);
        pushButtonPlus->setStyleSheet(QString::fromUtf8("background-color: #feffae"));
        pushButtonDivide = new QPushButton(centralwidget);
        pushButtonDivide->setObjectName(QString::fromUtf8("pushButtonDivide"));
        pushButtonDivide->setGeometry(QRect(340, 130, 101, 81));
        pushButtonDivide->setFont(font);
        pushButtonDivide->setStyleSheet(QString::fromUtf8("background-color: #feffae"));
        pushButtonFib = new QPushButton(centralwidget);
        pushButtonFib->setObjectName(QString::fromUtf8("pushButtonFib"));
        pushButtonFib->setGeometry(QRect(10, 130, 101, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        pushButtonFib->setFont(font1);
        pushButtonFib->setStyleSheet(QString::fromUtf8("background-color: #feffae"));
        pushButtonSqrt = new QPushButton(centralwidget);
        pushButtonSqrt->setObjectName(QString::fromUtf8("pushButtonSqrt"));
        pushButtonSqrt->setGeometry(QRect(230, 130, 101, 81));
        pushButtonSqrt->setFont(font1);
        pushButtonSqrt->setStyleSheet(QString::fromUtf8("background-color: #feffae"));
        pushButtonFact = new QPushButton(centralwidget);
        pushButtonFact->setObjectName(QString::fromUtf8("pushButtonFact"));
        pushButtonFact->setGeometry(QRect(10, 170, 101, 41));
        pushButtonFact->setFont(font1);
        pushButtonFact->setStyleSheet(QString::fromUtf8("background-color: #feffae"));
        pushButton0 = new QPushButton(centralwidget);
        pushButton0->setObjectName(QString::fromUtf8("pushButton0"));
        pushButton0->setGeometry(QRect(120, 490, 101, 81));
        pushButton0->setFont(font);
        pushButton0->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        pushButtonEquals = new QPushButton(centralwidget);
        pushButtonEquals->setObjectName(QString::fromUtf8("pushButtonEquals"));
        pushButtonEquals->setGeometry(QRect(340, 490, 101, 81));
        pushButtonEquals->setFont(font);
        pushButtonEquals->setStyleSheet(QString::fromUtf8("background-color: #feffae"));
        pushButtonClean = new QPushButton(centralwidget);
        pushButtonClean->setObjectName(QString::fromUtf8("pushButtonClean"));
        pushButtonClean->setGeometry(QRect(10, 490, 101, 81));
        pushButtonClean->setFont(font);
        pushButtonClean->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        pushButtonComma = new QPushButton(centralwidget);
        pushButtonComma->setObjectName(QString::fromUtf8("pushButtonComma"));
        pushButtonComma->setGeometry(QRect(230, 490, 101, 41));
        pushButtonComma->setFont(font);
        pushButtonComma->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        display = new QLineEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(10, 10, 431, 101));
        QFont font2;
        font2.setPointSize(30);
        display->setFont(font2);
        display->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        display->setFrame(false);
        display->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        display->setReadOnly(true);
        displayPrevNum = new QLineEdit(centralwidget);
        displayPrevNum->setObjectName(QString::fromUtf8("displayPrevNum"));
        displayPrevNum->setGeometry(QRect(250, 10, 191, 51));
        QFont font3;
        font3.setPointSize(18);
        displayPrevNum->setFont(font3);
        displayPrevNum->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        displayPrevNum->setFrame(false);
        displayPrevNum->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        displayPrevNum->setReadOnly(true);
        displayOper = new QLineEdit(centralwidget);
        displayOper->setObjectName(QString::fromUtf8("displayOper"));
        displayOper->setGeometry(QRect(20, 50, 51, 51));
        QFont font4;
        font4.setPointSize(20);
        displayOper->setFont(font4);
        displayOper->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        displayOper->setFrame(false);
        displayOper->setAlignment(Qt::AlignCenter);
        displayOper->setReadOnly(true);
        displayError = new QLineEdit(centralwidget);
        displayError->setObjectName(QString::fromUtf8("displayError"));
        displayError->setGeometry(QRect(20, 20, 241, 25));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setItalic(true);
        displayError->setFont(font5);
        displayError->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: red;"));
        displayError->setFrame(false);
        displayError->setReadOnly(true);
        pushButtonPwr2 = new QPushButton(centralwidget);
        pushButtonPwr2->setObjectName(QString::fromUtf8("pushButtonPwr2"));
        pushButtonPwr2->setGeometry(QRect(120, 130, 101, 41));
        pushButtonPwr2->setFont(font1);
        pushButtonPwr2->setStyleSheet(QString::fromUtf8("background-color: #feffae"));
        pushButtonPwrN = new QPushButton(centralwidget);
        pushButtonPwrN->setObjectName(QString::fromUtf8("pushButtonPwrN"));
        pushButtonPwrN->setGeometry(QRect(120, 170, 101, 41));
        pushButtonPwrN->setFont(font1);
        pushButtonPwrN->setStyleSheet(QString::fromUtf8("background-color: #feffae"));
        pushButtonNeg = new QPushButton(centralwidget);
        pushButtonNeg->setObjectName(QString::fromUtf8("pushButtonNeg"));
        pushButtonNeg->setGeometry(QRect(230, 530, 101, 41));
        pushButtonNeg->setFont(font);
        pushButtonNeg->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 255, 0);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CalcuLux", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButtonMultiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButtonMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButtonPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButtonDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButtonFib->setText(QCoreApplication::translate("MainWindow", "Fib", nullptr));
        pushButtonSqrt->setText(QCoreApplication::translate("MainWindow", "sqrt()", nullptr));
        pushButtonFact->setText(QCoreApplication::translate("MainWindow", "fact", nullptr));
        pushButton0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonEquals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButtonClean->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButtonComma->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        pushButtonPwr2->setText(QCoreApplication::translate("MainWindow", "pwr(2)", nullptr));
        pushButtonPwrN->setText(QCoreApplication::translate("MainWindow", "pwr(n)", nullptr));
        pushButtonNeg->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
