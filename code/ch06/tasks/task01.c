#include <stdio.h>

int main(void)
{
    char letters[26];
    int i;

    for (i = 0; i < 26; i++)
        letters[i] = 'a' + i;   // заполняем массив буквами от 'a' до 'z'

    for (i = 0; i < 26; i++)
        printf("%c ", letters[i]);

    printf("\n");
    return 0;
}
