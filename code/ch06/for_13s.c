/* for_13s.c */
#include <stdio.h>

int main(void)
{
    int n;  // счет с интервалом 13, начиная с 2
    for (n = 2; n < 60; n = n + 13)
        printf("%d\n", n);
    return 0;
}
