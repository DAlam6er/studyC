#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    char *A; 
    printf("Enter size of array to create:");
    scanf("%d", &n);
    
    /*
        В следующей строчке кода есть проблема,
        много памяти на стеке не выделишь!
        Segmentation error при достаточно большом n
    char A[n];
    */
    A = (char *)malloc(n);
    if (NULL == A)
    {
        printf("OS didn't gave memory. Exit ... \n");
        return 1;
    }
    for (i = 0; i < n; i++)
        A[i] = i;
    printf("Array successfully created!\n");
    
    return 0;
}
