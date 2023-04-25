/**
 * @file     test.cpp
 * @date     25.4.2023
 * @author   Rostislav Knazovcik
 */

#include "../source/base_func.h"
#include "../source/base_func.cpp"
#include "../source/adv_eq.h"
#include "../source/adv_eq.cpp"
#include <gtest/gtest.h>
#include <iostream>
#include <cmath>

// Tests the functions of mathematical library

/*class Tests
{
public:*/
    /**
     * @brief Tests the functions of add function
     * @return PASSED or FAILED
     */
TEST(test_add_f, add_f)
{
    EXPECT_EQ(add_f(5,5), 10);
    EXPECT_EQ(add_f(2,0), 2);
    EXPECT_EQ(add_f(-2,0), -2);
    EXPECT_EQ(add_f(-100000,-400000), -500000);
    EXPECT_EQ(add_f(-2.5,2), -0.5);
}
    /**
     * @brief Tests the functions of subtract function
     * @return PASSED or FAILED
     */
TEST(test_sub_f, sub_f)
{
    EXPECT_EQ(sub_f(5,5), 0);
    EXPECT_EQ(sub_f(2,0), 2);
    EXPECT_EQ(sub_f(-2,0), -2);
    EXPECT_EQ(sub_f(-100000,-400000), 300000);
    EXPECT_EQ(sub_f(-2.5,2), -4.5);
}
    /**
     * @brief Tests the functions of multiply function
     * @return PASSED or FAILED
     */
TEST(test_mul_f, mul_f)
{
    EXPECT_EQ(mul_f(5,5), 25);
    EXPECT_EQ(mul_f(2,0), 0);
    EXPECT_EQ(mul_f(-2,0), 0);
    EXPECT_EQ(mul_f(-100000,-400000), 40000000000);
    EXPECT_EQ(mul_f(-2.5,2), -5);
}
    /**
     * @brief Tests the functions of divide function
     * @return PASSED or FAILED
     */
TEST(test_div, div_f)
{
    EXPECT_EQ(div_f(5,5), 1);
    EXPECT_FALSE(div_f(2,0));
    EXPECT_FALSE(div_f(0,-2));
    EXPECT_EQ(div_f(-100000,-400000), 0.25);
    EXPECT_EQ(div_f(-2.5,2), -1.25);
}
    /**
     * @brief Tests the functions of factorial function
     * @return PASSED or FAILED
     */
TEST(test_fct, fct)
{
    EXPECT_EQ(fct(5), 120);
    EXPECT_EQ(fct(0), 1);
    EXPECT_EQ(fct(12), 479001600);
}
    /**
     * @brief Tests the functions of power function
     * @return PASSED or FAILED
     */
TEST(test_pwr, pwr)
{
    EXPECT_EQ(pwr(5,2), 25);
    EXPECT_EQ(pwr(5, 0), 1);
    EXPECT_EQ(pwr(2, 1), 2);
    EXPECT_EQ(pwr(2, 6), 64);
    EXPECT_EQ(pwr(6, 11), 362797056);
}
    /**
     * @brief Tests the functions of absolute value function
     * @return PASSED or FAILED
     */
TEST(test_absh, absh)
{
    EXPECT_EQ(absh(5), 5);
    EXPECT_EQ(absh(-50), 50);
    EXPECT_EQ(absh(-0), 0);
    EXPECT_EQ(absh(26545345), 26545345);
    EXPECT_EQ(absh(-26545345), 26545345);
}
    /**
     * @brief Tests the functions of root function
     * @return PASSED or FAILED
     */
TEST(test_root, root)
{
    EXPECT_EQ(root(2, 25), 5);
    EXPECT_EQ(root(3, 64), 4);
    EXPECT_EQ(root(3, -64), -4);
}
    /**
     * @brief Tests the functions of fibonacci function
     * @return PASSED or FAILED
     */
TEST(test_fib, fib)
{
    EXPECT_EQ(fib(0), 0);
    EXPECT_EQ(fib(2), 1);
    EXPECT_EQ(fib(4), 3);
    EXPECT_EQ(fib(45), 1134903170);
}
/*};*/
