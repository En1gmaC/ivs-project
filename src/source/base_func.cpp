
#include "base_func.h"

double /*BaseMath::*/add_f(double a, double b)
{
    return a + b;
}

double /*BaseMath::*/sub_f(double a, double b)
{
    return a - b;
}

double /*BaseMath::*/mul_f(double a, double b)
{
    return a * b;
}

double /*BaseMath::*/div_f(double a, double b)
{
    if(b == 0) return DIVISION_BY_ZERO;
    return a / b;
}
