#include <stdio.h>

int main(void)
{
    int powers[8];
    int i;

    // заполнение массива степенями двойки
    for (i = 0; i < 8; i++)
        powers[i] = 1 << i; // 2^i сдвигом

    // вывод элементов массива с помощью do...while
    i = 0;
    do {
        printf("2^%d = %d\n", i, powers[i]);
        i++;
    } while (i < 8);

    return 0;
}
