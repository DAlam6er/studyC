/*
    На координатной плоскости Oxy задана точка A(x,y). Необходимо указать квадрант, в котором она расположена.
*/

#include <stdio.h>

int main() {
    double x,y;
    scanf("%lf %lf", &x, &y);
    printf("%d", 1+(x*y<0)+2*(y<0));
}