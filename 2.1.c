#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Вычисляет сумму двух чисел
 * @param first первое число
 * @param second второе число
 * @return Расчитанное значение
 */
double sum(const double first, const double second);

/**
 * @brief Вычисляет разность двух чисел
 * @param first первое число (уменьшаемое)
 * @param second второе число (вычитаемое)
 * @return Расчитанное значение
 */
double difference(const double first, const double second);

/**
 * @brief Вычисляет произведение двух чисел
 * @param first первое число
 * @param second второе число
 * @return Расчитанное значение
 */
double product(const double first, const double second);

/**
 * @brief Вычисляет частное двух чисел
 * @param first первое число (делимое)
 * @param second второе число (делитель)
 * @return Расчитанное значение
 */
double quotient(const double first, const double second);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Проверяет, что делитель не равен нулю
 * @param divisor - считанное значение делителя
 */
void checkDivisor(const double divisor);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("введите первое и второе число\n");
    double first = getDouble();
    double second = getDouble();
    checkDivisor(second);

    printf("сумма %f\n", sum(first, second));
    printf("разность %f\n", difference(first, second));
    printf("произведение %f\n", product(first, second));
    printf("частное %f\n", quotient(first, second));
    return 0;
}

double sum(const double first, const double second)
{
    return first + second;
}

double difference(const double first, const double second)
{
    return first - second;
}
