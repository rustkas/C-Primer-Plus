#include <stdio.h>

int main(void)
{
    double x, y;

    printf("Введите два числа (или нечисловой символ для выхода):\n");

    while (scanf("%lf %lf", &x, &y) == 2)
    {
        double result = (x - y) / (x * y);
        printf("(%.3f - %.3f) / (%.3f * %.3f) = %.5f\n", x, y, x, y, result);
        printf("Введите следующую пару чисел (или нечисловой символ для выхода):\n");
    }

    printf("Ввод завершён.\n");

    return 0;
}
