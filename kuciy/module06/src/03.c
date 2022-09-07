/*
    Программа вычисляет среднее арифметическое массива,
    без учёта его минимального и максимального элементов
*/

#include <stdio.h>
#include <limits.h>
#define SIZE 5

int main() {
    int arr[SIZE]={0};
    int i, min=INT_MAX, max=INT_MIN;
    int sum=0;
    double avg;
    unsigned char cnt=0; 
    puts("Введите элементы массива:");
    for (i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
    for (i = 0; i < SIZE; i++) {
        min = (arr[i] < min)? arr[i]: min;
        max = (arr[i] > max)? arr[i]: max;
    }
    for (i=0; i < SIZE; i++) {
        if (arr[i] != min && arr[i] != max) {
            cnt++;
            sum += arr[i];
        }
    }
    if (cnt) avg = (double) sum / cnt;
    printf("min=%d, max=%d\n", min, max);
    printf("Среднее арифметическое массива без учёта его минимального и максимального элементов: %.2f\n", avg);
    return 0;
} 
