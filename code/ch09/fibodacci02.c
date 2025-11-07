#include <stdio.h>

// Вспомогательная функция с аккумуляторами
long fib_tail(int n, long a, long b)
{
    if (n == 0)
        return a;
    else
        return fib_tail(n - 1, b, a + b);  // хвостовой вызов — последнее действие
}

// Обёртка для удобства
long fib(int n)
{
    return fib_tail(n, 0, 1);
}

int main(void)
{
    int n = 10;
    printf("Fibonacci(%d) = %ld\n", n, fib(n));
    return 0;
}
