#include <stdio.h>

int main(void)
{
    int row, col;

    for (row = 1; row <= 5; row++)      // количество строк
    {
        for (col = 1; col <= row; col++) // количество символов в строке
            printf("$");
        printf("\n");
    }

    return 0;
}
