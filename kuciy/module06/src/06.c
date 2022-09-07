/*
    Программа проверяет, сколько раз встречается в массиве
    введённое число
*/

#include <stdio.h>
#include <limits.h>
#define SIZE 5

int main() {
    int i, num;
    int arr[SIZE]={0};
    unsigned char cnt=0;
    puts("Введите элементы массива:");
    for (i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
    puts("Введите проверяемое число:");
    scanf("%d", &num);
    for (i = 0; i < SIZE; i++) {
        if (arr[i] == num) {
            cnt++;
        }     
    }
    if (cnt) 
        printf("Введённое число встречается %d раз в массиве!\n", cnt);
    else
        puts("Введённое число не содержится в массиве!"); 
    return 0;
} 
