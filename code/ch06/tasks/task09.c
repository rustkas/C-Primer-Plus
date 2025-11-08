#include <stdio.h>

// Прототип функции
double compute(double x, double y);

int main(void)
{
    double x, y;

    printf("Введите два числа (или нечисловой символ для выхода):\n");

    while (scanf("%lf %lf", &x, &y) == 2)
    {
        printf("Результат: %.5f\n", compute(x, y));
        printf("Введите следующую пару чисел (или нечисловой символ для выхода):\n");
    }

    printf("Ввод завершён.\n");
    return 0;
}

// Определение функции
double compute(double x, double y)
{
    return (x - y) / (x * y);
}
