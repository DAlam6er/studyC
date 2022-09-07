/*
    Последовательность чисел Фибоначчи определяется следующим образом:

    F1=1,F2=1,
    F3=F1+F2,…,Fk=Fk−2+Fk−1.
    Посчитать значение N-го числа Фибоначчи.
*/

#include <stdio.h>

int main() {
    unsigned n,f=1;
    scanf("%u", &n);
    for(unsigned f1=1,f2=1;n-->2;f1=f2, f2=f){f=f1+f2;}
    printf("%d", f);
}