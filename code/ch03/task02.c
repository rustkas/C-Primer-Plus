#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    /* Переполнение для целых чисел */
    int int_max = INT_MAX;
    printf("INT_MAX = %d\n", int_max);
    printf("INT_MAX + 1 = %d (переполнение)\n\n", int_max + 1);

    /* Переполнение для чисел с плавающей запятой */
    float big = FLT_MAX;
    printf("FLT_MAX = %e\n", big);
    printf("FLT_MAX * 10 = %e (переполнение)\n\n", big * 10);

    /* Потеря значимости (точности) */
    float a = 1.0e20;
    float b = a + 1.0;
    printf("a = %f\n", a);
    printf("a + 1.0 = %f (число не изменилось из-за потери точности)\n", b);

    return 0;
}
