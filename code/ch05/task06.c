#include <stdio.h>

int main(void)
{
    int n;

    printf("Сколько первых квадратов чисел суммировать (<=0 для выхода)? ");
    scanf("%d", &n);

    while (n > 0)
    {
        long long sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i * i;  // квадрат числа i
        }

        printf("Сумма квадратов первых %d чисел равна %lld\n", n, sum);

        printf("Сколько суммировать дальше (<=0 для выхода)? ");
        scanf("%d", &n);
    }

    printf("Готово.\n");
    return 0;
}
