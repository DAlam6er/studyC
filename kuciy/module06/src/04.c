/*
    Программа проверяет, находится ли введённое число в массиве
*/

#include <stdio.h>
#include <limits.h>
#define SIZE 5

int main() {
    int i, num;
    int arr[SIZE]={0};
    puts("Введите элементы массива:");
    for (i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
    puts("Введите проверяемое число:");
    scanf("%d", &num);
    for (i = 0; i < SIZE; i++) {
        if (arr[i] == num) {
            puts("Введённое число уже содержится в массиве!");
            return 0;
        }     
    }
    puts("Введённое число не содержится в массиве!");
    return 0;
} 
