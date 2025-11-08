#include <stdio.h>

#define N 8

int main(void)
{
    double a[N], b[N];
    double run = 0.0;

    // ввод значений первого массива и накопление сумм во втором
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &a[i]);
        run += a[i];
        b[i] = run;
    }

    // вывод: первая строка — исходные значения, вторая — накопленные суммы
    for (int i = 0; i < N; i++)
        printf("%10.2f", a[i]);
    printf("\n");
    for (int i = 0; i < N; i++)
        printf("%10.2f", b[i]);
    printf("\n");

    return 0;
}
