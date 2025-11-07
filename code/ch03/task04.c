/* float_formats.c -- отображение числа с плавающей запятой в разных форматах */
#include <stdio.h>

int main(void)
{
    double value;

    printf("Введите значение с плавающей запятой: ");
    scanf("%lf", &value);

    printf("Запись с фиксированной запятой: %f\n", value);
    printf("Экспоненциальная форма записи: %e\n", value);
    printf("Двоично-экспоненциальное представление: %a\n", value);

    return 0;
}
