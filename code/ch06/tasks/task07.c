#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[100];   // массив для хранения слова

    printf("Введите слово: ");
    scanf("%s", word);

    int len = strlen(word);   // длина слова

    printf("Слово в обратном порядке: ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", word[i]);

    printf("\n");

    return 0;
}
