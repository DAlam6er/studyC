/*
    Программа проверяет, представляют ли элементы массива
    возрастающую последовательность.
*/

#include <stdio.h>
#include <limits.h>
#define SIZE 5

int main() {
    int i;
    int arr[SIZE]={0};
    puts("Введите элементы массива:");
    for (i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
    for (i = 0; i < SIZE-1; i++) {
        if (arr[i] > arr[i+1] ) {
            puts("Массив не является возрастающим.");
            return 0;
        }     
    }
    puts("Массив представляет собой возрастающую последовательность!");
    return 0;
} 
