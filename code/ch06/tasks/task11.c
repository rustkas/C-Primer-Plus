#include <stdio.h>

int main(void)
{
    int numbers[8];
    int i;

    printf("Введите 8 целых чисел:\n");

    for (i = 0; i < 8; i++)
        scanf("%d", &numbers[i]);

    printf("Числа в обратном порядке:\n");

    for (i = 7; i >= 0; i--)
        printf("%d ", numbers[i]);

    printf("\n");

    return 0;
}
