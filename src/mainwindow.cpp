
#include "mainwindow.h"
#include "./ui_mainwindow.h"

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
    CurrentNumInput += number;
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
        result = BaseMath::add_f(x,y);
    }
    if(operation == "-")
    {
        result = BaseMath::sub_f(x,y);
    }
    if(operation == "*")
    {
        result = BaseMath::mul_f(x,y);
    }
    if(operation == "/")
    {
        result = BaseMath::div_f(x,y);
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
    ui->display->setText(CurrentNumInput);
}

void MainWindow::on_pushButtonComma_pressed()
{
    ui->display->setText(QString::number(9));
}

void MainWindow::on_pushButtonEquals_pressed()
{
    SetOperand(&operand2, CurrentNumInput);
    /*CalculateBinaryResult(operand1, operand2, operation);*/
    ClearInput();
    ui->display->setText(QString::number(result));
}

void MainWindow::on_pushButtonPlus_pressed()
{
    //SetOperand(&operand)
    ClearInput();
    operation = "+";
    ui->display->setText("+");
}

void MainWindow::on_pushButtonMinus_pressed()
{
    ClearInput();
    operation = "-";
    ui->display->setText("-");
}

void MainWindow::on_pushButtonMultiply_pressed()
{
    ClearInput();
    operation = "*";
    ui->display->setText("*");
}

void MainWindow::on_pushButtonDivide_pressed()
{
    ClearInput();
    operation = "/";
    ui->display->setText("/");
}


void MainWindow::on_pushButtonFib_pressed()
{
    ui->display->setText(QString::number(9));
}

void MainWindow::on_pushButtonFact_pressed()
{
    ui->display->setText(QString::number(9));
}

void MainWindow::on_pushButtonSqrt_pressed()
{
    ui->display->setText(QString::number(9));
}
