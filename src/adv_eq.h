#ifndef adv_eq
#define adv_eq

class AdvMath
{
public:
    /**
     * @brief Function to calculate factorial of n
     * @param n Unsigned long long
     * @return Factorial of n
     */
    double fct(unsigned long long n);

    /**
     * @brief Function to calculate value of e raised to the power n
     * @param e Long double
     * @param n Long long
     * @return e raised to the power n, if n < 0 fuction returns 0
     */
    double pwr(long double e, long long n);

    /**
     * @brief Function to calculate n root of x
     * @param e Long double
     * @param n Long long
     * @return n root of x
     */
    double root(long long n, long double x);

    /**
     * @brief Function to calculate Fibbonaci sequence to n position
     * @param n Unsigned long long
     * @return Fibbonaci number to the n position, if n <= 1 function returns 0
     */
    double fib(long long n);

    /**
     * @brief Function to calculate absolute value of n
     * @param n long double
     * @return Absolute value of n
     */
    double absh(long double n);
};
#endif
