#include <stdio.h>

int main(void)
{
    int num, limit;

    printf("Введите целое число: ");
    scanf("%d", &num);

    limit = num + 10;

    while (num <= limit)
    {
        printf("%d\t", num);
        num++;
    }

    printf("\n");
    return 0;
}
