#include<stdio.h>

#include "base_func.cpp"
#include "adv_eq.cpp"

#define SQR 2

//Calculating the average of number
double getAvg(double sum, unsigned count)
{
    double avg = div_f(sum, count);
    avg = pwr(avg, SQR);
    avg = mul_f(avg, count);
    return avg;
}

//Putting all the numbers in to the final equation
double finalEq(double sum, double avg, unsigned count)
{
    double result = div_f(1, sub_f(count, 1));
    sum = sub_f(sum, avg);
    result = mul_f(result, sum);
    result = root(SQR, result);

    return result;
}

int main()
{
    unsigned count = 0;
    double num, sum = 0, sum_avg = 0;

    //Loading numbers from standard input, Calculating their sum^2 and normal sum, which is later used for Calculating the average
    while(scanf("%lf ", &num) != EOF)
    {
        count++;
        sum_avg = add_f(sum_avg, num);
        num = pwr(num, SQR);
        sum = add_f(sum, num);
    }
    double avg = getAvg(sum_avg, count);
    double result = finalEq(sum, avg, count);
    printf("%lf\n", result);
    return 0;
}
