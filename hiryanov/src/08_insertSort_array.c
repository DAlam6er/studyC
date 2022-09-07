/*
    Сортировка массива вставками
*/

#include <stdio.h>

#define ALLOCATE_SIZE 1000

int input_array(int A[], int max_size)
{
    int top = 0;
    int x = 0;
    while (1) 
    {
        scanf("%d", &x);
        if (x == -1 || top == max_size) break;
        A[top] = x;
        top++;
    } 
    return top;
}

void print_array(int A[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%3d ", A[i]);
    printf("\n");
}

void insert_sort(int A[], int n)
{
    int i;
    for (i = 1; i < n; ++i)
    {
        int k = i;
        while ( k > 0 && A[k-1] > A[k])
        {
            int tmp = A[k-1];
            A[k-1] = A[k];
            A[k] = tmp;
            k -= 1;
        }
    }
}

int main ()
{
    int A[ALLOCATE_SIZE];
    int n;
    printf("Enter numbers, -1 to stop:");

    n = input_array(A, ALLOCATE_SIZE);
    insert_sort(A, n);
    print_array(A, n);
    
    return 0;
}
