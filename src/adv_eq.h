#ifndef adv_eq
#define adv_eq

// Constant used to calculate Nth root
const long double GUESS;
// Constant used to set the accuracy of the Nth root
// smaller eps = better accuracy
const long double eps;

// Function returns factorial of "long long n"
// n! =  n * (n-1) * (n-2) ... * 2 * 1
unsigned long long fct(unsigned long long n);

// Function returns "e^n", where "long long n" is a natural number (n >= 0), otherwise function returns 0
long double pwr(long double e, long long n);

// Function returns "n_/-x-" (n root of x), where "long long n" is a whole number
long double root(long long n, long double x);

// Function returns Fibbonacci sequance to the "n"th position, where "long long n" is a natural number bigger than one (n > 1), otherwise function returns 0
// F_0 = 0, F_1 = 1
// F_n = F_n-1 + F_n-2
long long fib(long long n);

// Function returns absolute value of a "long long n"
long double absh(long double n);

#endif