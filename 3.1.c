#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>

/**
 * @brief Вычисляет значение функции по заданной формуле
 * @param x - значение переменной x
 * @return Расчитанное значение
 */
double Y(const double x);

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
    printf("Введите начало интервала (1):\n");
    double beginning = getDouble();
    printf("Введите конец интервала (3):\n");
    double end = getDouble();
    printf("Введите шаг интервала (0.2):\n");
    double step = getDouble();

    if (step <= 0)
    {
        printf("Ошибка");
        exit(1);
    }

    printf("x\t\t\tY\n");
    for (double x = beginning; x <= end + DBL_EPSILON; x += step)
    {
        if (x <= 0)
        {
            printf("%.2f\t\tОтсутствует решение\n", x);
        }
        else
        {
            printf("%.2f\t\t%lf\n", x, Y(x));
        }
    }
    return 0;
}

double Y(const double x)
{
    return sin(log(x)) - cos(log(x)) + 2 * log(x);
}

double getDouble()
{
    double val = 0.0;
    if (scanf("%lf", &val) != 1)
    {
        printf("Ошибка");
        exit(1);
    }
    return val;
}
