/*
    Даны две точки А(х1,у1) и В(х2,у2). Составить программу, определяющую, которая из точек находится ближе к началу координат.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int x1,y1,x2,y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    printf("%u", 1+(sqrt(x1*x1+y1*y1)>sqrt(x2*x2+y2*y2)));
}