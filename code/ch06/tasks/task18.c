#include <stdio.h>

int main(void)
{
    const int DUNBAR = 150;   // предел числа Данбара
    int week = 0;
    int friends = 5;          // начальное количество друзей

    printf("Неделя %2d: %3d друзей\n", week, friends);

    while (friends <= DUNBAR)
    {
        week++;
        friends = (friends - week) * 2;   // каждую неделю N человек уходят, затем число друзей удваивается
        printf("Неделя %2d: %3d друзей\n", week, friends);
    }

    printf("\nЧерез %d недель число друзей превысит %d.\n", week, DUNBAR);

    return 0;
}
