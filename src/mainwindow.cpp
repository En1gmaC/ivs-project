
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "base_func.cpp"
//#include "adv_eq.cpp"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->display->setText(QString::number(0));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AppendInput(QString number)
{
    int numLen = CurrentNumInput.length();

    if(number == "-" && numLen == 0)
    {
        CurrentNumInput += number;
        return;
    }

    if(numLen <= 15 && number != "-")
    {
        CurrentNumInput += number;
    }
    else if(numLen > 15)
    {
        ui->displayError->setText("Way too many digits, I'm afraid, sir");
    }
}

void MainWindow::ClearInput()
{
    CurrentNumInput.clear();
}

void MainWindow::SetOperand(double *value, QString input)
{
    *value = input.toDouble();
}

void MainWindow::CalculateBinaryResult(double x, double y, QString operation)
{
    if(operation == "+")
    {
        result = add_f(x,y);
    }
    if(operation == "-")
    {
        result = sub_f(x,y);
    }
    if(operation == "*")
    {
        result = mul_f(x,y);
    }
    if(operation == "/")
    {
        if(y == 0.0)
        {
            ui->displayError->setText("Division by zero, thats illegal!");
            zeroDiv = true;
            return;
        }
        result = div_f(x,y);
    }
    if(operation == "sqrt")
    {
        if(y < 0.0)
        {
            ui->displayError->setText("Wish I could count imaginary numbers");
            sqrtError = true;
            return;
        }
        if(x < 0.0)
        {
            ui->displayError->setText("Square root error, your number is < 0");
            sqrtError = true;
            return;
        }
        result = root(x,y);
    }
    if(operation == "pwrn")
    {
        result = pwr(x,y);
    }
}

void MainWindow::CalculateUnaryResult(double x, QString operation)
{
    if(operation == "fib")
    {
        result = fib(x);
    }
    if(operation == "fact")
    {
        result = fct(x);
    }
    if(operation == "pwr2")
    {
        result = pwr(x,2);
    }

}

void MainWindow::on_pushButton0_pressed()
{
    AppendInput("0");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButton1_pressed()
{
    AppendInput("1");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButton2_pressed()
{
    AppendInput("2");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButton3_pressed()
{
    AppendInput("3");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButton4_pressed()
{
    AppendInput("4");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButton5_pressed()
{
    AppendInput("5");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButton6_pressed()
{
    AppendInput("6");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButton7_pressed()
{
    AppendInput("7");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButton8_pressed()
{
    AppendInput("8");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButton9_pressed()
{
    AppendInput("9");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButtonClean_pressed()
{
    ClearInput();
    ui->displayOper->setText("");
    ui->displayPrevNum->setText("");
    ui->displayError->setText("");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButtonComma_pressed()
{
    AppendInput(".");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButtonNeg_pressed()
{
    AppendInput("-");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButtonEquals_pressed()
{
    SetOperand(&operand2, CurrentNumInput);

    CalculateBinaryResult(operand1, operand2, operation);

    ClearInput();

    ui->displayPrevNum->setText("");
    ui->displayOper->setText("");
    if(zeroDiv || sqrtError)
    {
        ui->display->setText("");
        return;
    }
    ui->display->setText(QString::number(result));
}

void MainWindow::on_pushButtonPlus_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "+";

    ui->displayPrevNum->setText(QString::number(operand1));
    ui->displayOper->setText("+");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButtonMinus_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "-";

    ui->displayPrevNum->setText(QString::number(operand1));
    ui->displayOper->setText("-");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButtonMultiply_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "*";

    ui->displayPrevNum->setText(QString::number(operand1));
    ui->displayOper->setText("*");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButtonDivide_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "/";

    ui->displayPrevNum->setText(QString::number(operand1));
    ui->displayOper->setText("/");
    ui->display->setText(CurrentNumInput);
}


void MainWindow::on_pushButtonFib_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "fib";

    CalculateUnaryResult(operand1, operation);
    ui->displayPrevNum->setText("Fib(" + QString::number(operand1) + ")");
    ui->displayOper->setText("");
    ui->display->setText(QString::number(result));
}

void MainWindow::on_pushButtonFact_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "fact";

    CalculateUnaryResult(operand1, operation);
    ui->displayPrevNum->setText("(" + QString::number(operand1) + ")!");
    ui->displayOper->setText("");
    ui->display->setText(QString::number(result));
}

void MainWindow::on_pushButtonSqrt_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "sqrt";

    ui->displayPrevNum->setText(QString::number(operand1));
    ui->displayOper->setText("sqrt");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButtonPwr2_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "pwr2";

    CalculateUnaryResult(operand1, operation);
    ui->displayPrevNum->setText(QString::number(operand1) + "^2");
    ui->displayOper->setText("");
    ui->display->setText(QString::number(result));
}

void MainWindow::on_pushButtonPwrN_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "pwrn";

    ui->displayPrevNum->setText(QString::number(operand1));
    ui->displayOper->setText("^");
    ui->display->setText(CurrentNumInput);
}
