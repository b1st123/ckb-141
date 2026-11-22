#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Значение числа пи
 */
#define PI 3.14159265358979323846

/**
 * @brief Вычисляет значение функции Y по заданной формуле
 * @param x значение переменной x
 * @param a значение переменной a
 * @return Расчитанное значение
 */
double Y(const double x, const double a);

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
    printf("введите x\n");
    double x = getDouble();
    const double a = 1.65;
    printf("Y = %f\n", Y(x, a));
    return 0;
}

double Y(const double x, const double a)
{
    if (x < 1.34)
    {
        if (x == 0)
        {
            fprintf(stderr, "Error: деление на 0\n");
            exit(1);
        }
        return PI * pow(x, 2) - 7 / pow(x, 2);
    }
    else
    {
        return log(x + 7 * sqrt(x + a));
    }
}

double getDouble()
{
    double x = 0.0;
    if (scanf("%lf", &x) != 1)
    {
        fprintf(stderr, "Error\n");
        exit(1);
    }
    return x;
}
