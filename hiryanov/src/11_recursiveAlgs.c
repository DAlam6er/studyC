/*
    Примеры реализации рекурсивных алгоритмов:
        Нахождение факториала;
        Алгоритм Эвклида (НОД);
        Быстрое возведение в степень;
        Числа Фибоначчи
*/

#include <stdio.h>

long int factorial(int);
int gcd(int, int);
double fast_power(double, int);
int fib(int);

long int factorial (int n)
{
    if (0 == n)
        return 1;
    return factorial(n-1)*n;
}

int gcd(int a, int b)
{
    if (0 == b) return a;
    return gcd(b, a%b);
}

double fast_power(double a, int n)
{
    if (0 == n) return 1;
    if (1 == n%2)
        return a * fast_power(a, n-1);
    else
        return fast_power(a * a, n/2);
}

int fib(int n)
{
    if (n <= 1) return n;
    else return fib(n-1) + fib(n-2); 
}


int main ()
{
    int n, a, b;
    double x;
    puts("Введите число, факториал которого хотите найти:");
    scanf("%d", &n);
    printf("factorial(%d) = %ld\n", n, factorial(n));
    
    puts("Введите 2 числа, НОД которых хотите найти:");
    scanf("%d%d", &a, &b);
    printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    
    puts("Введите число и степень, в которую хотите его возвести:");
    scanf("%lf%d", &x, &n);
    printf("fast_power(%.2f, %d) = %.4f\n", x, n, fast_power(x, n));
    
    puts("Введите номер числа Фибоначчи:");
    scanf("%d", &n);
    printf("fib(%d) = %d\n", n, fib(n));
    return 0;
}
