/* nogood.c -- программа с ошибками */
#include <stdio.h>

int main(void) {
    int n, n2, n3;
    /*В этой программе допущено несколько ошибок */
    n = 5;
    n2 = n * n;
    n3 = n * n2;
    printf("n равно %d, n в квадрате равно %d, n в третьей степени равно %d\n", n, n2, n3);
    

  return 0;
}
