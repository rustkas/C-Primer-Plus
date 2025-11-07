#include <stdio.h>

#define MIN_PER_HOUR 60  // количество минут в одном часе

int main(void)
{
    int minutes;

    printf("Введите количество минут (<=0 для выхода): ");
    scanf("%d", &minutes);

    while (minutes > 0)
    {
        int hours = minutes / MIN_PER_HOUR;
        int mins = minutes % MIN_PER_HOUR;
        printf("%d минут — это %d час(ов) и %d минут(ы).\n", minutes, hours, mins);

        printf("Введите следующее значение минут (<=0 для выхода): ");
        scanf("%d", &minutes);
    }

    printf("Завершение программы.\n");
    return 0;
}
