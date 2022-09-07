/*
    Напишите программу считающую произведение цифр заданного k-значного числа X.
*/

#include <stdio.h>

int main() {
    int k, x, y = 1;
    scanf("%d %d", &k, &x);
    switch (k) {
        case 4:
            y *= x / 1000;
        case 3:
            y *= x % 1000 / 100;
        case 2:
            y *= x % 100 / 10;
        case 1:
            y *= x % 10;
    }
    printf("%d\n", y);
}

// мой вариант

#include <stdio.h>

int main() {
    unsigned k,x, p=1;
    scanf("%u%u", &k, &x);
    switch (k) {
        default: printf("ERROR!\n"); break;
        case 4: p*=x/1000; x-=1000*(x/1000);
        case 3: p*=x/100; x-=100*(x/100);
        case 2: p*=x/10; x-=10*(x/10);
        case 1: p*=x;
    }
    printf("%u", p);
}