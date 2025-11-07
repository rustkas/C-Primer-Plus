// factor_tail.c — обычная рекурсия + хвостовая рекурсия + цикл
#include <stdio.h>

long fact(int n);                 // итеративная версия
long rfact(int n);                // обычная рекурсия
long tfact_(int n, long acc);     // хвостовая рекурсия (вспомогательная)
long tfact(int n);                // обёртка для удобства

int main(void)
{
    int num;

    printf("Эта программа вычисляет факториалы (0–12).\n");
    printf("Введите значение (q для завершения):\n");
    while (scanf("%d", &num) == 1)
    {
        if (num < 0)            puts("Отрицательные числа не подходят.");
        else if (num > 12)      puts("Вводимое значение должно быть меньше 13.");
        else
        {
            printf("Цикл:            %2d! = %ld\n", num, fact(num));
            printf("Обычная рекурсия: %2d! = %ld\n", num, rfact(num));
            printf("Хвост. рекурсия:  %2d! = %ld\n", num, tfact(num));
        }
        printf("Введите значение (q для завершения):\n");
    }
    puts("Готово.");
    return 0;
}

long fact(int n)                  // итеративная версия
{
    long ans = 1;
    for (; n > 1; --n) ans *= n;
    return ans;
}

long rfact(int n)                 // обычная (не хвостовая) рекурсия
{
    return (n > 0) ? n * rfact(n - 1) : 1;
}

long tfact_(int n, long acc)      // хвостовая рекурсия: последний шаг — вызов функции
{
    return (n == 0) ? acc : tfact_(n - 1, acc * n);
}

long tfact(int n)                 // удобная обёртка с начальным аккумулятором
{
    return tfact_(n, 1);
}
