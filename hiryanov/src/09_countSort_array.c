/*
    Сортировка массива цифр подсчётом.
    Линейный алгоритм O(N).
*/

#include <stdio.h>

void print_array(int A[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%3d ", A[i]);
    printf("\n");
}

int main()
{
    int counters[10]={0};
    int i, x;

    while (1)
    {
        scanf("%d", &x);
        if (10 == x) break;
        if (x < 0 || x > 9) continue;
        counters[x] += 1;
    }

    for (x = 0; x < 10; ++x)
        for (i = 0; i < counters[x]; ++i)
            printf("%3d ", x);
    printf("\n");
    return 0;
}
