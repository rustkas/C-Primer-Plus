#include <stdio.h>

// Классическая рекурсия (не хвостовая)
long fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);  // не хвостовая: требуется сложение после возврата
}

int main(void)
{
    int n = 10;
    printf("Fibonacci(%d) = %ld\n", n, fib(n));
    return 0;
}
