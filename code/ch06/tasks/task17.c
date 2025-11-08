#include <stdio.h>

int main(void)
{
    double balance = 1000000.0;  // начальный миллион
    int years = 0;

    while (balance > 0)
    {
        balance += balance * 0.08;  // начисление 8% годовых
        balance -= 100000.0;        // снятие $100,000
        years++;
    }

    printf("Через %d лет на счету Чаки не останется денег.\n", years);

    return 0;
}
