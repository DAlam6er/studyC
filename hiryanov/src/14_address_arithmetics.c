#include <stdio.h>

int main()
{
    int A[10] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10};

    int *p = A + 5;
    int *q = A + 7;
    
    printf("%d\n", *A);
    printf("%d\n", p[-1]);

    if (p > q)
        printf("p > q\n");
    else
        printf("p <= q\n");

    printf("p - q = %ld\n", p - q);

    return 0;
} 
