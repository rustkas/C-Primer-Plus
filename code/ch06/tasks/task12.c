#include <stdio.h>

int main(void)
{
    long n;

    puts("Введите количество элементов N (<=0 для выхода).");
    while (printf("N = "), scanf("%ld", &n) == 1 && n > 0)
    {
        double s1 = 0.0;         // 1 + 1/2 + 1/3 + ...
        double s2 = 0.0;         // 1 - 1/2 + 1/3 - 1/4 + ...
        int sign = 1;

        puts(" n\t   S1 (гармонический)\t   S2 (чередующийся)");
        for (long i = 1; i <= n; i++)
        {
            s1 += 1.0 / i;
            s2 += sign * (1.0 / i);
            sign = -sign;
            printf("%4ld\t% .12f\t% .12f\n", i, s1, s2);
        }
        puts("");
    }

    puts("Готово.");
    return 0;
}
