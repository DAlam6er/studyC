/*
    Программа осуществляет отзеркаливание массива;
    циклический сдвиг влево; циклический сдвиг вправо
*/

#include <stdio.h>
#define SIZE 10

void print_array(int A[])
{
    int i;
    for (i = 0; i < SIZE; ++i)   
        printf("%3d", A[i]);
    printf("\n");
}

int main()
{
    int i, tmp;
    int A[SIZE] = { 0, 10, 20, 30, 40,
                    50, 60, 70, 80, 90};
    puts("Исходный массив:");
    print_array(A);
    
    for (i = 0; i < SIZE/2; i++)
    {
        tmp = A[i];
        A[i] = A[SIZE-1-i];
        A[SIZE-1-i] = tmp;
    } 
    puts("Отзеркаленный массив:");
    print_array(A);
   
    tmp = A[0]; 
    for (i = 0; i <SIZE-1; i++)
        A[i] = A[i+1];
    A[SIZE-1] = tmp;
    puts("Циклический сдвиг влево:");
    print_array(A);
    
    tmp = A[SIZE-1];
    for (i = SIZE-1; i > 0; i--)
        A[i] = A[i-1];
    A[0] = tmp;
    puts("Циклический сдвиг вправо:");
    print_array(A);

    return 0;
}
