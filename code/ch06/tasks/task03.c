#include <stdio.h>

int main(void)
{
    char ch;
    char start = 'F';  // начальная буква

    for (ch = start; ch >= 'A'; ch--)       // внешний цикл для строк
    {
        char c;
        for (c = start; c >= ch; c--)       // внутренний цикл для символов
            printf("%c", c);
        printf("\n");
    }

    return 0;
}
