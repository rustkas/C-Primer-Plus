#include <stdio.h>

int main(void)
{
    double dafna = 100.0;
    double deidra = 100.0;
    int years = 0;

    while (deidra <= dafna)
    {
        years++;
        dafna += 10.0;         // простые 10% от первоначальных 100
        deidra *= 1.05;        // сложные 5% от текущего баланса
    }

    printf("Через %d лет сумма Дейдры превысит сумму Дафны.\n", years);
    printf("Дафна: %.2f\n", dafna);
    printf("Дейдра: %.2f\n", deidra);

    return 0;
}
