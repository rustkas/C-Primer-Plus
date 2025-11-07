#include <stdio.h>

#define DAYS_PER_WEEK 7  // количество дней в одной неделе

int main(void)
{
    int days;

    printf("Введите количество дней (0 или меньше для выхода): ");
    scanf("%d", &days);

    while (days > 0)
    {
        int weeks = days / DAYS_PER_WEEK;
        int remaining_days = days % DAYS_PER_WEEK;

        printf("%d дней составляют %d недель(и) и %d день(дней).\n",
               days, weeks, remaining_days);

        printf("Введите новое количество дней (0 или меньше для выхода): ");
        scanf("%d", &days);
    }

    printf("Завершение программы.\n");
    return 0;
}
