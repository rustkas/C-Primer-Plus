#include <stdio.h>

int main(void)
{
    int second_operand;
    int first_operand;

    printf("Эта программа вычисляет результаты деления по модулю.\n");
    printf("Введите целое число, которое будет служить вторым операндом: ");
    scanf("%d", &second_operand);

    printf("Теперь введите первый операнд (<= 0 для выхода из программы): ");
    scanf("%d", &first_operand);

    while (first_operand > 0)
    {
        printf("%d %% %d равно %d\n", first_operand, second_operand, first_operand % second_operand);

        printf("\nВведите следующее число для первого операнда (<= 0 для выхода из программы): ");
        scanf("%d", &first_operand);
    }

    printf("Готово.\n");
    return 0;
}
