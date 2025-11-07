/* fuel.c — конвертер расхода топлива США ↔ Европа */
#include <stdio.h>

int main(void)
{
    const double GALLON_TO_LITER = 3.785;  /* л в 1 галлоне (US) */
    const double MILE_TO_KM      = 1.609;  /* км в 1 миле      */

    double miles, gallons;

    printf("Введите пройденные мили: ");
    scanf("%lf", &miles);
    printf("Введите израсходованные галлоны: ");
    scanf("%lf", &gallons);

    /* пробег на единицу топлива (миль/галлон) — чем больше, тем лучше */
    double mpg = miles / gallons;

    /* расход топлива на 100 км в литрах — чем меньше, тем лучше */
    double liters_per_100km =
        (gallons * GALLON_TO_LITER) / (miles * MILE_TO_KM) * 100.0;

    printf("Пробег: %.1f миль/галлон\n", mpg);
    printf("Расход: %.1f л/100 км\n", liters_per_100km);

    return 0;
}
