#include <stdio.h>

int main(void)
{
    char name[30];
    float height_in_inches;
    float height_in_feet;

    printf("Введите ваше имя: ");
    scanf("%s", name);

    printf("Введите ваш рост в дюймах: ");
    scanf("%f", &height_in_inches);

    height_in_feet = height_in_inches / 12.0;

    printf("%s, ваш рост составляет %.3f футов.\n", name, height_in_feet);

    return 0;
}
