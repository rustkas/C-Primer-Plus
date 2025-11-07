#include <stdio.h>

int main(void)
{
    char name[30];
    char surname[30];

    printf("Введите имя: ");
    scanf("%s", name);
    printf("Введите фамилию: ");
    scanf("%s", surname);

    printf("Результат: %s, %s\n", surname, name);

    return 0;
}
