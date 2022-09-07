/*
    Программа считывает 5 целых чисел, сохраняет их,
    выводит количество ненулевых элементов,
    выводит их среднее арифметическое
*/

#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE]={0}, sum=0;
    unsigned char i, cnt;
    double avg=0;
    puts("Введите элементы массива:");
    for (i = 0; i < SIZE;i++) scanf("%d", &arr[i]);
    for (i = 0, cnt = 0; i < SIZE; i++) {
        if (arr[i]) {
            cnt++;
            sum += arr[i];
        }
    }
    if (cnt) avg = (double)sum / cnt;
    printf("Количество ненулевых элементов: %d\n", cnt);
    printf("Их среднее арифметическое: %.2f\n", avg);
    return 0;
}
