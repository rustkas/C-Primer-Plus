#include <stdio.h>

#define MAX 255

int main(void)
{
    char str[MAX];
    int i = 0;

    printf("Введите строку (до 255 символов):\n");

    // чтение посимвольно до символа новой строки
    while (i < MAX - 1 && scanf("%c", &str[i]) == 1 && str[i] != '\n')
        i++;

    // вывод в обратном порядке
    printf("В обратном порядке:\n");
    for (i--; i >= 0; i--)
        putchar(str[i]);
    putchar('\n');

    return 0;
}
