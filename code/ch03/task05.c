/* age_seconds.c -- перевод возраста в секунды */
#include <stdio.h>

int main(void)
{
    float years;
    double seconds;

    const double seconds_per_year = 3.156e7;

    printf("Введите ваш возраст в годах: ");
    scanf("%f", &years);

    seconds = years * seconds_per_year;

    printf("Ваш возраст в секундах: %.2e секунд.\n", seconds);

    return 0;
}
