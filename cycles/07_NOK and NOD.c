/*
    Входные данные:
    два положительных целых числа a и b

    Выходные данные: 
    Наименьшее число d, которое делится на оба этих числа без остатка
*/


// Оптимальный алгоритм
int gcd_3(int x, int y) {
    while (x && y) {
        if (x > y) {
            x %= y;
        } else {
            y %= x;
        }
    }
    return x + y;
}



// Неоптимальный алгоритм
#include <stdio.h>

int main(void) {
    int main() {
    int a,b,p;
    scanf("%d%d", &a, &b);
    if (!(a-b)) {printf("%d",a);return 0;}
    p=a*b;
    // ищем НОД(a,b) по алгоритму Евклида
    if (a<b) {a^=b;b^=a;a^=b;}
    while (a-b) {
        if(a-b>b) {
            a=a-b; }
        else {
            a^=b;
            b^=a;
            a^=b;
            b-=a; // b приняло теперь новое значение, которое будем вычитать из a, ставшее "старым" b
        }
    }
    //printf("greatest common divisor: %d\n",b);
    //находим и выводим НОК через НОД=b
    //printf("least common multiple: %d\n", p/b);
  printf("%d", p/b);
}

// Еще решение
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int a1 = a, b1 = b;
    while (a*b>0)
        if (a > b) a %= b; else b %= a;
    printf("%d", a1*b1/(a+b));
}

// И еще решение - без Эвклида

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    //int d = a <= b ? b : a;
    int d = 1;  
    while ( d % a  ||  d % b ) d++;
    printf("%d", d);
}