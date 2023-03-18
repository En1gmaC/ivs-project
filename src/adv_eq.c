#include "adv_eq.h"

const long double GUESS  = 3;

const long double EPS = 0.000000001;

unsigned long long fct(unsigned long long n)
{
    if(n == 0) 
    {
        return 1;
    } 
    else 
    {
        return n * fct(n-1);
    }
}

long double pwr(long double e, long long n)
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

long double absh(long double n)
{
    if(n > 0)
    {
        return n;
    }
    else return -n;
}

long double root(long long n, long double x)
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

long long fib(long long n)
{
    if (n <= 1)
    {
        return 0;
    }
    
    long long F_N; 
    long long F_0 = 0;
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