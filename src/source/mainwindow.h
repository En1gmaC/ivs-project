
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
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
    /**
     * @brief Appends input on the screen
     * @param number - receives number and appends it to the CurrNumInput string
     */
    void AppendInput(QString number);

    /**
     * @brief Clears the input, sets the CurrNumInput string to empty
     */
    void ClearInput();

    /**
     * @brief Sets operand to the value given by string 'input'
     * @param value - operand, which we want to assign the input to
     * @param input - string, which we convert to double and assign it to the value
     */
    void SetOperand(double *value, QString input);

    /**
     * @brief Calculates binary result of operations '+', '-', '*', '/', 'sqrt', 'pwrn',
     *        function calculates result in a format 'a 'operation' b'.
     *        Result is then assigned to a global 'result' variable.
     *        If there is any unallowed operation, global result variable stays the same.
     * @param x first operand
     * @param y second operand
     * @param operation given by string
     */
    void CalculateBinaryResult(double x, double y, QString operation);
    /**
     * @brief Calculates uanry result of operations 'fib', 'fact', 'pwr2'
     *        Result is then assigned to a global 'result' variable.
     *        If there is any unallowed operation, global result variable stays the same.
     * @param x operand
     * @param operation given by string
     */
    void CalculateUnaryResult(double x, QString operation);

private slots:

    /**
     * @brief Appends the display number set by variable 'CurrNumInput'
     *        by number '0' and displays it on the screen
     */
    void on_pushButton0_pressed();

    /**
     * @brief Appends the display number set by variable 'CurrNumInput'
     *        by number '1' and displays it on the screen
     */
    void on_pushButton1_pressed();

    /**
     * @brief Appends the display number set by variable 'CurrNumInput'
     *        by number '2' and displays it on the screen
     */
    void on_pushButton2_pressed();

    /**
     * @brief Appends the display number set by variable 'CurrNumInput'
     *        by number '3' and displays it on the screen
     */
    void on_pushButton3_pressed();

    /**
     * @brief Appends the display number set by variable 'CurrNumInput'
     *        by number '4' and displays it on the screen
     */
    void on_pushButton4_pressed();
    /**
     * @brief Appends the display number set by variable 'CurrNumInput'
     *        by number '5' and displays it on the screen
     */
    void on_pushButton5_pressed();

    /**
     * @brief Appends the display number set by variable 'CurrNumInput'
     *        by number '6' and displays it on the screen
     */
    void on_pushButton6_pressed();

    /**
     * @brief Appends the display number set by variable 'CurrNumInput'
     *        by number '7' and displays it on the screen
     */
    void on_pushButton7_pressed();

    /**
     * @brief Appends the display number set by variable 'CurrNumInput'
     *        by number '8' and displays it on the screen
     */
    void on_pushButton8_pressed();

    /**
     * @brief Appends the display number set by variable 'CurrNumInput'
     *        by number '9' and displays it on the screen
     */
    void on_pushButton9_pressed();

    /**
     * @brief Cleans the input and sets every display to be blank
     */
    void on_pushButtonClean_pressed();

    /**
     * @brief Appends the display number set by variable 'CurrNumInput'
     *        by character '.' and displays the number on the screen
     */
    void on_pushButtonComma_pressed();

    /**
     * @brief Sets the second operand and evaluates the result. Result is
     *        then shown on the display together with an error message (if there
     *        is any) and operation character.
     */
    void on_pushButtonEquals_pressed();

    /**
     * @brief Appends the display number set by variable 'CurrNumInput'
     *        by character '-' and displays the number on the screen
     */
    void on_pushButtonNeg_pressed();

    /**
     * @brief Saves the input into a 'operand1' variable, clears
     *        the input, shows the previous value on the upper display
     *        and sets the operation display to '+'.
     */
    void on_pushButtonPlus_pressed();

    /**
     * @brief Saves the input into a 'operand1' variable, clears
     *        the input, shows the previous value on the upper display
     *        and sets the operation display to '-'.
     */
    void on_pushButtonMinus_pressed();


    /**
     * @brief Saves the input into a 'operand1' variable, clears
     *        the input, shows the previous value on the upper display
     *        and sets the operation display to '*'.
     */
    void on_pushButtonMultiply_pressed();


    /**
     * @brief Saves the input into a 'operand1' variable, clears
     *        the input, shows the previous value on the upper display
     *        and sets the operation display to '/'.
     */
    void on_pushButtonDivide_pressed();


    /**
     * @brief Saves the input into a 'operand1' variable, clears
     *        the input, calculates result of the unary operation and
     *        shows the result on the main display together with the
     *        formula on the upper display.
     */
    void on_pushButtonFib_pressed();

    /**
     * @brief Saves the input into a 'operand1' variable, clears
     *        the input, calculates result of the unary operation and
     *        shows the result on the main display together with the
     *        formula on the upper display.
     */
    void on_pushButtonFact_pressed();

    /**
     * @brief Saves the input into a 'operand1' variable, clears
     *        the input, shows the previous value on the upper display
     *        and sets the operation display to 'sqrt'.
     */
    void on_pushButtonSqrt_pressed();

    /**
     * @brief Saves the input into a 'operand1' variable, clears
     *        the input, calculates result of the unary operation and
     *        shows the result on the main display together with the
     *        formula on the upper display.
     */
    void on_pushButtonPwr2_pressed();

    /**
     * @brief Saves the input into a 'operand1' variable, clears
     *        the input, shows the previous value on the upper display
     *        and sets the operation display to 'sqrt'.
     */
    void on_pushButtonPwrN_pressed();


private:

    /**
     * @brief Interaction between users keyboard and the application,
     *        basic implementation for basic operations like '+', '-', '*', '/'.
     * @param event - key event mapping the keyboard
     */
    void keyPressEvent(QKeyEvent *event);

    Ui::MainWindow *ui;

    QString CurrentNumInput; // zobrazovane cislo
    bool zeroDiv = false; // error handling deleni nulou
    bool sqrtError = false; // error handling zaporneho cisla v odmocnine
    bool unaryOperandError = false; // error handler pro unarni operace
    double operand1;    // promenna pro prvni operand operace
    double operand2;    // promenna pro prvni operand operace
    QString operation;  // string operace
    double result;      // vysledek operace
    bool wasClickedBefore = false;
    bool commaIndicated = false;
};

#endif // MAINWINDOW_H
