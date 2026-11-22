#include <stdio.h>
#include <stdlib.h>

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
    printf("Введите x:\n");
    double x = getDouble();
    printf("Введите y:\n");
    double y = getDouble();

    if (x == y)
    {
        printf("Ошибка: числа должны быть не равны друг другу");
        exit(1);
    }

    const double halfSum = (x + y) / 2;
    const double doubleProduct = 2 * x * y;

    if (x < y)
    {
        x = halfSum;
        y = doubleProduct;
    }
    else
    {
        y = halfSum;
        x = doubleProduct;
    }

    printf("x = %f\ny = %f\n", x, y);
    return 0;
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf", &value) != 1)
    {
        printf("Ошибка");
        exit(1);
    }
    return value;
}
