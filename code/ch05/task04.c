#include <stdio.h>

#define CM_PER_INCH 2.54     // количество сантиметров в дюйме
#define INCHES_PER_FOOT 12   // количество дюймов в футе

int main(void)
{
    double cm, inches;
    int feet;

    printf("Введите высоту в сантиметрах (<=0 для выхода из программы): ");
    scanf("%lf", &cm);

    while (cm > 0)
    {
        inches = cm / CM_PER_INCH;
        feet = (int)(inches / INCHES_PER_FOOT);
        inches = inches - (feet * INCHES_PER_FOOT);

        printf("%.1f см = %d футов, %.1f дюймов\n", cm, feet, inches);

        printf("\nВведите высоту в сантиметрах (<=0 для выхода из программы): ");
        scanf("%lf", &cm);
    }

    printf("Работа завершена.\n");
    return 0;
}
