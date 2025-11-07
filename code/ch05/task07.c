#include <stdio.h>

double cube(double x);  // прототип функции

int main(void)
{
    double num;

    printf("Введите число типа double: ");
    scanf("%lf", &num);

    printf("Куб числа %.3f равен %.3f\n", num, cube(num));

    return 0;
}

double cube(double x)
{
    return x * x * x;
}
