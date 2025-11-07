#include <stdio.h>

int main(void)
{
    int row, col;

    for (row = 0; row < 5; row++)       // 5 строк
    {
        for (col = 0; col < 8; col++)   // 8 символов в каждой строке
            printf("$");
        printf("\n");
    }

    return 0;
}
