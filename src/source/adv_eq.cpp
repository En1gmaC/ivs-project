#include "adv_eq.h"

// Constant used to calculate Nth root
#define GUESS 3

// Constant used to set the accuracy of the Nth root
// smaller eps = better accuracy
#define EPS 0.000000001

double /*AdvMath::*/fct(double n)
{
    if(n <= 0)
    {
        return 1;
    }
    else
    {
        return n * fct(n-1);
    }
}

double /*AdvMath::*/pwr(double e, double n)
{
    if (n < 0)
    {
        return 0;
    }
    else if (n == 0)
    {
        return 1;
    }

    long double r = 1;

    for (long long i = 0; i < n; i++)
    {
        r = r * e;
    }
    return r;
}

double /*AdvMath::*/absh(double n)
{
    if(n > 0)
    {
        return n;
    }
    else return -n;
}

double /*AdvMath::*/root(int n, double x)
{
    if(n % 2 == 0 && n < 0)
    {
        return 0;
    }

    long double x_prev = GUESS;
    long double eps = EPS;
    long double diff = eps + 1;
    long double N = n;
    long double x_K;

    while (diff > eps)
    {
        // Newton's method
        x_K = ((N - 1.0) * x_prev + x / pwr(x_prev,N-1)) / N;
        diff = absh(x_K - x_prev);
        x_prev = x_K;
    }

    return x_K;
}

double /*AdvMath::*/fib(double n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1 || n == 2)
    {
        return 1;
    }
    
    long long F_N;
    long long F_0 = 1;
    long long F_1 = 1;
    for (long long i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            F_N = i;
        }
        else
        {
            F_N = F_0 + F_1;
            F_0 = F_1;
            F_1 = F_N;
        }
    }
    return F_N;
}
