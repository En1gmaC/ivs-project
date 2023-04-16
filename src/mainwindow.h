
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "base_func.h"
#include "adv_eq.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void AppendInput(QString number);
    void ClearInput();
    void SetOperand(double *value, QString input);
    void CalculateBinaryResult(double x, double y, QString operation);
    void CalculateUnaryResult(double x, QString operation);

private slots:
    void on_pushButton0_pressed();
    void on_pushButton1_pressed();
    void on_pushButton2_pressed();
    void on_pushButton3_pressed();
    void on_pushButton4_pressed();
    void on_pushButton5_pressed();
    void on_pushButton6_pressed();
    void on_pushButton7_pressed();
    void on_pushButton8_pressed();
    void on_pushButton9_pressed();

    void on_pushButtonClean_pressed();
    void on_pushButtonComma_pressed();
    void on_pushButtonEquals_pressed();
    void on_pushButtonNeg_pressed();

    void on_pushButtonPlus_pressed();
    void on_pushButtonMinus_pressed();
    void on_pushButtonMultiply_pressed();
    void on_pushButtonDivide_pressed();

    void on_pushButtonFib_pressed();
    void on_pushButtonFact_pressed();
    void on_pushButtonSqrt_pressed();
    void on_pushButtonPwr2_pressed();
    void on_pushButtonPwrN_pressed();


private:
    Ui::MainWindow *ui;
    QString CurrentNumInput;
    bool zeroDiv = false;
    bool sqrtError = false;
    double operand1;
    double operand2;
    QString operation;
    double result;
};

#endif // MAINWINDOW_H
