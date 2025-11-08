#include <stdio.h>

int main(void)
{
    int lower, upper;

    printf("Введите нижний предел: ");
    scanf("%d", &lower);
    printf("Введите верхний предел: ");
    scanf("%d", &upper);

    printf("\nЧисло   Квадрат   Куб\n");
    printf("------------------------\n");

    for (int i = lower; i <= upper; i++)
        printf("%5d %9d %7d\n", i, i * i, i * i * i);

    return 0;
}
