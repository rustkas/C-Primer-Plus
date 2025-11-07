#include <stdio.h>
#include <float.h>

int main(void)
{
    double d = 1.0 / 3.0;
    float  f = 1.0f / 3.0f;

    printf("float : %.4f  %.12f  %.16f\n", f, f, f);
    printf("double: %.4f  %.12f  %.16f\n", d, d, d);

    printf("FLT_DIG = %d\n", FLT_DIG);
    printf("DBL_DIG = %d\n", DBL_DIG);

    return 0;
}
