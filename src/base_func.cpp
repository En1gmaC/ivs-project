#include "base_func.h"

double add_f(double a, double b)
{
    return a + b;
}

double sub_f(double a, double b)
{
    return a - b;
}

double mul_f(double a, double b)
{
    return a * b;
}

double div_f(double a, double b)
{
    if(b == 0) return DIVISION_BY_ZERO;
    return a / b;
}
