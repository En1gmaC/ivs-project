#include "base_func.h"
#include <stdio.h>

long long add_f(long long a, long long b)
{
    return a + b;
}

long long sub_f(long long a, long long b)
{
    return a - b;
}

long long mul_f(long a, long b)
{
    return a * b;
}

long long div_f(long long a, long long b)
{
    if(b == 0) return DIVISION_BY_ZERO;
    return a / b;
}
