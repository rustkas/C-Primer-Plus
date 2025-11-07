/* addemup.c -- пять видов операторов */
#include <stdio.h>
int main(void)           /* находит сумму первых 20 целых чисел */
{
    int count, sum;      /* оператор объявления */
    count = 0;           /* оператор присваивания */
    sum = 0;             /* оператор присваивания */
    while (count++ < 20) /* оператор while */
        sum = sum + count;
    printf("sum = %d\n", sum); /* оператор вызова функции */
    return 0;            /* оператор возврата */
}
