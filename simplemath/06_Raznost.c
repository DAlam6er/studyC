/*
    Посчитать разность между количеством нечетных и чётных чисел.
    Входные данные:
    Пять целых чисел: x1,x2,x3,x4,x5. (−100≤xi≤100)
*/

#include <stdio.h>

int main() {
    int a, b, c, d, f, r;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &f);
    r = fabs(a%2)+fabs(b%2)+fabs(c%2)+fabs(d%2)+fabs(f%2);
    printf("%d", r-(5-r));
}

// еще решение

#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c, d, e;
    scanf("%i%i%i%i%i", &a,&b,&c,&d,&e);
    printf("%.0f", 2*(fabs(a%2) + fabs(b%2) + fabs(c%2) + fabs(d%2) + fabs(e%2))-5);
}