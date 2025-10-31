#include <stdio.h>

int main(void) {
    int toes;          // исходное значение
    int double_toes;   // удвоенное значение
    int square_toes;   // квадрат

    toes = 10;                 // присваиваем значение 10
    double_toes = toes * 2;    // удвоенное значение
    square_toes = toes * toes; // квадрат

    printf("toes = %d\n", toes);
    printf("Удвоенное значение toes = %d\n", double_toes);
    printf("Квадрат toes = %d\n", square_toes);

    return 0;
}
