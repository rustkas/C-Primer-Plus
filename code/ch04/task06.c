#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[30];
    char surname[30];
    int len_name, len_surname;

    printf("Введите имя: ");
    scanf("%s", name);
    printf("Введите фамилию: ");
    scanf("%s", surname);

    len_name = strlen(name);
    len_surname = strlen(surname);

    // Вывод с выравниванием чисел по окончанию слова
    printf("\n%s %s\n", name, surname);
    printf("%*d %*d\n", len_name, len_name, len_surname + 1, len_surname);

    // Вывод с выравниванием чисел по началу слова
    printf("\n%s %s\n", name, surname);
    printf("%-*d %-*d\n", len_name, len_name, len_surname + 1, len_surname);

    return 0;
}
