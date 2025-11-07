/* precision.c — проверка точности float и double */
#include <stdio.h>
#include <float.h>

int main(void)
{
    float f = 1.0 / 3.0;
    double d = 1.0 / 3.0;

    printf("float значение 1.0/3.0:\n");
    printf("4 знака после запятой: %.4f\n", f);
    printf("12 знаков после запятой: %.12f\n", f);
    printf("16 знаков после запятой: %.16f\n\n", f);

    printf("double значение 1.0/3.0:\n");
    printf("4 знака после запятой: %.4f\n", d);
    printf("12 знаков после запятой: %.12f\n", d);
    printf("16 знаков после запятой: %.16f\n\n", d);

    printf("FLT_DIG = %d\n", FLT_DIG);
    printf("DBL_DIG = %d\n", DBL_DIG);

    return 0;
}
