/*
    Реализация алгоритма решения задачи
    о Ханойских башнях для случая
    3 блина; 3 столбика
*/

#include <stdio.h>

void hanoi(int, int, int);

int main ()
{
    hanoi(3, 1, 2);
    return 0;
}

void hanoi(int n, int i, int k)
{
    int tmp;
    if (1 == n)
        printf("Move disk 1 from pin %d to %d.\n", i, k);
    else
    {
        tmp = 6 - i - k; /* 1 + 2 + 3 = 6 */
        hanoi(n-1, i, tmp);
        printf("Move disk %d from pin %d to %d.\n", n, i, k);
        hanoi(n-1, tmp, k);
    }
}
