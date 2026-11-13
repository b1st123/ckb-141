#include <stdio.h>

/**
 * @brief Вычисляет сумму двух чисел
 * @param a первое число
 * @param b второе число
 * @return Рассчитанное значение
 */
double sum(const double a, const double b);

/**
 * @brief Вычисляет разность двух чисел
 * @param a первое число
 * @param b второе число
 * @return Рассчитанное значение
 */
double difference(const double a, const double b);

/**
 * @brief Вычисляет произведение двух чисел
 * @param a первое число
 * @param b второе число
 * @return Рассчитанное значение
 */
double product(const double a, const double b);

/**
 * @brief Вычисляет частное двух чисел
 * @param a делимое
 * @param b делитель
 * @return Рассчитанное значение
 */
double quotient(const double a, const double b);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
 
int main()
{
    printf("введите a %lf\n")
    printf("введите b %lf\n")
    double a = getDouble();
    double b = getDouble();
    printf("Sum is %lf\n", sum(a, b));
    printf("Difference is %lf\n", difference(a, b));
    printf("Product is %lf\n", product(a, b));
    if (b != 0.)
    {
        printf("Quotient is %lf", quotient(a, b));
    }
    else
    {
        printf("Division by zero");
    }
    return 0;
}

double sum(const double a, const double b)
{
    return a + b;
}

double difference(const double a, const double b)
{
    return a - b;
}

double product(const double a, const double b)
{
    return a * b;
}

double quotient(const double a, const double b)
{
    return a / b;
}

double getDouble()
{
    double value = 0.0;
    scanf("%lf", &value);
    return value;
}
