#include <stdio.h>

int main(void)
{
    char ch = 'A';  // начальная буква
    int row, col;

    for (row = 1; row <= 6; row++)         // количество строк
    {
        for (col = 1; col <= row; col++)   // количество букв в строке
            printf("%c", ch++);
        printf("\n");
    }

    return 0;
}
