/*
    Программа определяет сколько различных чисел
    содержится в массиве

*/

#include <stdio.h>

#define SIZE 5

int main() {
    int i, j, arr[SIZE]={0};
    unsigned char cnt=0;
    puts("Введите элементы массива:");
    for (i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
    for (i = 0; i < SIZE; i++) {
        for (j = i+1; j < SIZE; j++) { 
            if (arr[i] == arr[j]) break;
            if (j == SIZE - 1) cnt++; 
        } 
    }
    printf("В массиве %d различных чисел.\n", cnt);
    return 0;
}
