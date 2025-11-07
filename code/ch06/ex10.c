#include <stdio.h>
#define SIZE 8

int main(void)
{
    int by_twos[SIZE];
    int index;

    for (index = 0; index < SIZE; index++)          // индекс должен начинаться с 0
        by_twos[index] = 2 * (index + 1);           // чтобы получить 2, 4, 6, 8 ...

    for (index = 0; index < SIZE; index++)           // печатаем элементы
        printf("%d ", by_twos[index]);

    printf("\n");
    return 0;
}
