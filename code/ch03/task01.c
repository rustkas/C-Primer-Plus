#include <stdio.h>

int main(void)
{
    int cows, legs;

    printf("Сколько коровьих ног вы насчитали?\n");
    scanf("%d", &legs);
    cows = legs / 4;
    printf("Отсюда следует, что есть %d коров(а).\n", cows);

    return 0;
}
