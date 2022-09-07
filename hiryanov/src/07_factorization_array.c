/*
    Программа раскладывает число на множители,
    используя массив. Размер массива должен быть
    достаточным, для разложения числа на множители.
*/

#include <stdio.h>
#define ALLOCATED_SIZE 100

int get_number_factors(int x, int A[])
{
    int top = 0;
    int divisor = 2;
    while (x != 1)
    {
        while (x%divisor == 0)
        {
            A[top] = divisor;
            top += 1;
            x /= divisor;
        }
        divisor++;
    }
         
    return top;
}


int main() 
{
    int A[ALLOCATED_SIZE];
    int x, i, n;
    puts("Enter number to factorize:");
    scanf("%d", &x);
    n = get_number_factors(x, A);
    
    for (i = 0; i < n; ++i)
        printf("%d ", A[i]);
    printf("\n");
    printf("Указатель стека указывает на %d\n", n); 
    return 0;
} 
