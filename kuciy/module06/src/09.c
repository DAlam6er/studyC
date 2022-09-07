/*
    Программа определяет количество людей
    чей рост превышает средний
*/

#include <stdio.h>
#define SIZE 6

int main () {
    int i, cnt=0;
    double arr[SIZE]={0}, sum, avg;
    puts("Введите рост людей:");
    for (i = 0; i < SIZE; i++) scanf("%lf", &arr[i]);
    for (i = 0; i < SIZE; i++) sum += arr[i];
    avg = (double)sum / SIZE;
    for (i = 0; i < SIZE; i++) {
        if (arr[i] > avg) cnt++ ;
    }
    if (cnt)
        printf("Количество людей, чей рост превышает средний %.2f, равно %d\n", avg, cnt);
    else
        printf("У всех людей рост ниже среднего %.2f\n", avg);
    return 0;
}
