#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    int width;

    printf("Введите имя: ");
    scanf("%s", name);

    // a. Имя в двойных кавычках
    printf("а) \"%s\"\n", name);

    // б. Поле шириной 20 символов, выравнивание по правому краю, всё поле в кавычках
    printf("б) \"%20s\"\n", name);

    // в. Поле шириной 20 символов, выравнивание по левому краю, всё поле в кавычках
    printf("в) \"%-20s\"\n", name);

    // г. Поле шире длины имени на 3 символа
    width = strlen(name) + 3;
    printf("г) \"%*s\"\n", width, name);

    return 0;
}
