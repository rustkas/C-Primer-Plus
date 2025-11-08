#include <stdio.h>

int main(void)
{
    char ch;
    printf("Введите прописную букву: ");
    scanf("%c", &ch);

    int lines = ch - 'A' + 1;  // количество строк

    for (int row = 0; row < lines; row++)
    {
        // вывод пробелов
        for (int space = lines - row; space > 0; space--)
            printf(" ");

        // вывод букв в порядке возрастания
        for (char c = 'A'; c < 'A' + row + 1; c++)
            printf("%c", c);

        // вывод букв в порядке убывания
        for (char c = 'A' + row - 1; c >= 'A'; c--)
            printf("%c", c);

        printf("\n");
    }

    return 0;
}
