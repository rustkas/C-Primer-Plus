#include <stdio.h>

long sum_squares(int start, int end);

int main(void)
{
    int lower, upper;
    long result;

    printf("Введите нижний и верхний целочисленные пределы: ");
    scanf("%d %d", &lower, &upper);

    while (lower < upper)
    {
        result = sum_squares(lower, upper);
        printf("Сумма квадратов целых чисел от %d до %d равна %ld\n", lower, upper, result);
        printf("Введите следующую комбинацию пределов: ");
        scanf("%d %d", &lower, &upper);
    }

    printf("Работа завершена\n");
    return 0;
}

long sum_squares(int start, int end)
{
    long total = 0;
    int i;

    for (i = start; i <= end; i++)
        total += i * i;

    return total;
}
