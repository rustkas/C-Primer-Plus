/* height.c -- перевод роста из дюймов в сантиметры */
#include <stdio.h>

int main(void)
{
    float inches;
    float centimeters;

    printf("Введите ваш рост в дюймах: ");
    scanf("%f", &inches);

    centimeters = inches * 2.54;

    printf("Ваш рост: %.2f сантиметров.\n", centimeters);

    return 0;
}
