#include <stdio.h>

#define LITERS_PER_GALLON 3.785
#define KM_PER_MILE       1.609

int main(void)
{
    double miles, gallons;

    printf("Введите пройденные мили: ");
    scanf("%lf", &miles);
    printf("Введите израсходованные галлоны: ");
    scanf("%lf", &gallons);

    double mpg = miles / gallons;                                   // миль на галлон
    double liters = gallons * LITERS_PER_GALLON;
    double km = miles * KM_PER_MILE;
    double l_per_100km = (liters / km) * 100.0;                      // литров на 100 км

    printf("Пробег: %.1f миль/галлон\n", mpg);
    printf("Расход: %.1f л/100 км\n", l_per_100km);

    return 0;
}
