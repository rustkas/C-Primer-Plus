#include <stdio.h>

int main(void)
{
    double num;

    printf("Введите число с плавающей запятой: ");
    scanf("%lf", &num);

    printf("Десятичный формат: %f\n", num);
    printf("Экспоненциальный формат (e): %e\n", num);
    printf("Экспоненциальный формат (E): %E\n", num);

    return 0;
}
