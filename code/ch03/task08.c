/* volume.c -- перевод объема из чашек в пинты, унции, столовые и чайные ложки */
#include <stdio.h>

int main(void)
{
    float cups;
    float pints;
    float ounces;
    float tablespoons;
    float teaspoons;

    printf("Введите объем в чашках: ");
    scanf("%f", &cups);

    pints = cups / 2.0;
    ounces = cups * 8.0;
    tablespoons = ounces * 2.0;
    teaspoons = tablespoons * 3.0;

    printf("\n%.2f чашек эквивалентно:\n", cups);
    printf("%.2f пинтам\n", pints);
    printf("%.2f унциям\n", ounces);
    printf("%.2f столовым ложкам\n", tablespoons);
    printf("%.2f чайным ложкам\n", teaspoons);

    return 0;
}
