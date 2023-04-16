#ifndef base_func
#define base_func

typedef enum{
    DIVISION_BY_ZERO,
}ERROR;

/*class BaseMath
{
public:*/
    /**
     * @brief Funtion for the sum of two numbers given by the parameters 'a' and 'b'
     * @param a First number
     * @param b Second number
     * @return Sum of two numbers
     */
    double add_f(double a, double b);

    /**
     * @brief Funtion to substract two numbers given by the parameters 'a' and 'b'
     *        in given format 'a - b'
     * @param a First number
     * @param b Second number
     * @return Substraction of two numbers
     *
     */
    double sub_f(double a, double b);

    /**
     * @brief Funtion to multiply two numbers given by the parameters 'a' and 'b'
     * @param a First number
     * @param b Second number
     * @return Result of multiplication of two numbers
     *
     */
    double mul_f(double a, double b);

    /**
     * @brief Funtion to divide two numbers given by the parameters 'a' and 'b'
     *        in given format: 'a/b'
     * @param a First number
     * @param b Second number
     * @return Result of division of two numbers or error code 'SYNTAX ERROR' if 'b' equals 0
     */
    double div_f(double a, double b);
/*};*/

#endif
