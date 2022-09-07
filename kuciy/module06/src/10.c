/*
    Программа вычисляет сумму элементов массива по столбцам
*/

#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLUMNS 4

int main() {
    int arr[ROWS][COLUMNS]={0};
    int i, j, sum=0;
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
    puts("Сумма:");
    for (j = 0; j < COLUMNS; j++) {
        sum = 0;
        for (i = j; i < ROWS*COLUMNS; i += COLUMNS) {
            sum += arr[0][i]; 
        }
        printf("%d\t", sum);
    }
    printf("\n");
    return 0;
}
