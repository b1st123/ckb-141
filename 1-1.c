#include <stdio.h>
#include <math.h>

/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @return рассчитанное значение
 */
double A(const double x, const double y, const double z);

/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @return рассчитанное значение
 */
double B(const double x, const double y, const double z);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const double x =-0.5;
    const double y = 1.7;
    const double z = 0.44;
    printf("A = %lf\n",A(x,y,z));
    printf("B = %lf",B(x,y,z));

    return 0;
}

double A(const double x, const double y, const double z)
{
    return exp((-y*z)*sin(x*z-y))-sqrt(fabs(y*z+x));
}

double B(const double x, const double y, const double z)
{
    return y*sin((A(x,y,z))*z*z*cos(2*z) )-1;
}