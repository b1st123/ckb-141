#include <stdio.h>
/**
 * @brief Считает изменение температуры тела при передаче энергии
 * @param m масса тела в граммах
 * @param Q отданная энергия в джоулях
 * @param c удельная теплоёмкость в Дж/(кг*°C)
 * @return Изменение температуры в градусах
 */
double deltaTemperature(const double m, const double Q, const double c);
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
    printf("введите массу (g)\n");
    double m = getDouble();
    printf("введите энергию (J)\n");
    double Q = getDouble();
    printf("введите удельную теплоемкость (J/(kg*C))\n");
    double c = getDouble();
    printf("смена температуры %lf\n", deltaTemperature(m, Q, c));
    return 0;
}
double deltaTemperature(const double m, const double Q, const double c)
{
    return Q / (c * m / 1000.0);
}
double getDouble()
{
    double val = 0.0;
    scanf("%lf", &val);
    return val;
}
