#include <stdio.h>

void Temperatures(double fahr);

int main(void)
{
    double fahr;
    printf("Введите температуру по Фаренгейту (q для выхода): ");

    while (scanf("%lf", &fahr) == 1)
    {
        Temperatures(fahr);
        printf("Введите следующую температуру по Фаренгейту (q для выхода): ");
    }

    printf("Готово.\n");
    return 0;
}

void Temperatures(double fahr)
{
    const double SCALE = 5.0 / 9.0;
    const double FAHR_ZERO = 32.0;
    const double KELVIN_OFFSET = 273.16;

    double celsius = SCALE * (fahr - FAHR_ZERO);
    double kelvin = celsius + KELVIN_OFFSET;

    printf("%.2f°F = %.2f°C = %.2fK\n", fahr, celsius, kelvin);
}
