/*
    Программа вычисляет номер строки квадратной матрицы,
    сумма элементов которой максимальна
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define ROWS 3
#define COLUMNS 4

int main() {
    int arr[ROWS][COLUMNS]={0};
    int i, j, sum=0, maxrow, max=INT_MIN;
    printf("Введите элементы массива %dx%d\n", ROWS, COLUMNS);
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLUMNS; j++)
            scanf("%d", &arr[i][j]);
    system("clear");
    puts("Введённый массив:");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLUMNS; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
    puts("---------------------------");
    for (i = 0; i < ROWS; i++) {
        sum = 0;
        for (j = 0; j < COLUMNS; j++) {
            sum += arr[i][j]; 
        }
        if (sum > max) {
            max = sum;
            maxrow = i;
        }
    }
    printf("Номер строки с наибольшей суммой (нумерация с нуля): %d\n", maxrow);
    return 0;
}
