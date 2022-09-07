/*
    Пример рекурсии на примере вложенных матрёшек
*/

#include <stdio.h>

void matryoshka (int);

int main()
{
    matryoshka(7);
    return 0;
}

void matryoshka (int n)
{
    if (1 == n)
        puts("Last matryoshka!");
    else
    {
        printf("  Top side of matryoshka %d\n", n);
        matryoshka(n-1);
        printf("  Bottom side of matryoshka %d\n", n);
    }
}
