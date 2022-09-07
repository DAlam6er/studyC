#include <stdio.h>
#define SIZE 6

int main () {
    int i, j, arr[SIZE]={0};
    char flg=1;
    puts("Введите элементы массива:");
    for (i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
    for (i = 0; i < SIZE; i++) {
        for (j=i+1; j < SIZE; j++) {
            if (arr[i] == arr[j]) { 
                printf("Элементы с номером %d и %d имеют одинаковые значения\n", i, j);
                if (flg) flg=0;
            }
        }
    }
    if (flg) puts("В введённом массиве все элементы разные!");
    return 0;
}
