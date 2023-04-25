
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

    if(number == "." && !commaIndicated)
    {
        CurrentNumInput += number;
        commaIndicated = true;
        return;
    }

    if(numLen <= 15 && number != "-" && number != ".")
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
        if(x <= 0.0)
        {
            ui->displayError->setText("Square root error, your number is <= 0");
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
        if(x < 0)
        {
            ui->displayError->setText("SYNTAX ERROR - incorrect operand");
            unaryOperandError = true;
            return;
        }
        result = fib(x);
    }
    if(operation == "fact")
    {
        if(x < 0)
        {
            ui->displayError->setText("SYNTAX ERROR - incorrect operand");
            unaryOperandError = true;
            return;
        }
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
    wasClickedBefore = false;
    commaIndicated = false;
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
    if(!wasClickedBefore)
    {
        SetOperand(&operand2, CurrentNumInput);
        CalculateBinaryResult(operand1, operand2, operation);
        ClearInput();

        ui->displayPrevNum->setText("");
        ui->displayOper->setText("");

        if(zeroDiv || sqrtError)
        {
            ui->display->setText("");
            zeroDiv = false;
            sqrtError = false;
            return;
        }
        ui->display->setText(QString::number(result));
        ui->displayError->setText("");
        CurrentNumInput = (QString::number(result));
        wasClickedBefore = true;
        commaIndicated = false;
    }
}

void MainWindow::on_pushButtonPlus_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "+";
    wasClickedBefore = false;
    commaIndicated = false;
    ui->displayPrevNum->setText(QString::number(operand1));
    ui->displayOper->setText("+");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButtonMinus_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "-";
    wasClickedBefore = false;
    commaIndicated = false;
    ui->displayPrevNum->setText(QString::number(operand1));
    ui->displayOper->setText("-");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButtonMultiply_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "*";
    wasClickedBefore = false;
    commaIndicated = false;
    ui->displayPrevNum->setText(QString::number(operand1));
    ui->displayOper->setText("*");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButtonDivide_pressed()
{
    SetOperand(&operand1, CurrentNumInput);
    ClearInput();
    operation = "/";
    wasClickedBefore = false;
    commaIndicated = false;
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
    if(unaryOperandError)
    {
        ClearInput();
        result = 0.0;
        unaryOperandError = false;
        ui->display->setText(CurrentNumInput);
    }
    else
    {
        ui->display->setText(QString::number(result));
    }
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
    commaIndicated = false;
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
    commaIndicated = false;
    ui->displayPrevNum->setText(QString::number(operand1));
    ui->displayOper->setText("^");
    ui->display->setText(CurrentNumInput);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_0)
    {
        on_pushButton0_pressed();
    }
    if(event->key() == Qt::Key_1)
    {
        on_pushButton1_pressed();
    }
    if(event->key() == Qt::Key_2)
    {
        on_pushButton2_pressed();
    }
    if(event->key() == Qt::Key_3)
    {
        on_pushButton3_pressed();
    }
    if(event->key() == Qt::Key_4)
    {
        on_pushButton4_pressed();
    }
    if(event->key() == Qt::Key_5)
    {
        on_pushButton5_pressed();
    }
    if(event->key() == Qt::Key_6)
    {
        on_pushButton6_pressed();
    }
    if(event->key() == Qt::Key_7)
    {
        on_pushButton7_pressed();
    }
    if(event->key() == Qt::Key_8)
    {
        on_pushButton8_pressed();
    }
    if(event->key() == Qt::Key_9)
    {
        on_pushButton9_pressed();
    }

    if(event->key() == Qt::Key_Plus)
    {
        on_pushButtonPlus_pressed();
    }
    if(event->key() == Qt::Key_Minus)
    {
        on_pushButtonMinus_pressed();
    }
    if(event->key() == Qt::Key_Asterisk)
    {
        on_pushButtonMultiply_pressed();
    }
    if(event->key() == Qt::Key_Slash)
    {
        on_pushButtonDivide_pressed();
    }

    if(event->key() == Qt::Key_Comma)
    {
        on_pushButtonComma_pressed();
    }
    if(event->key() == Qt::Key_Enter)
    {
        on_pushButtonEquals_pressed();
    }
    if(event->key() == Qt::Key_Backspace)
    {
        on_pushButtonClean_pressed();
    }


}
