/*
    Перевести число из двоичной системы в десятичную. 
    Входные данные:
    Четырёхзначное двоичное число B.
*/

#include <stdio.h>

int main() {
    unsigned b;
    scanf("%u", &b);
    printf("%d", (b%10)*1+(b/10%10)*2+(b/100%10)*2*2+(b/1000)*2*2*2);

}

// Решение, не привязанное к количеству разрядов в B.

#include <stdio.h>

int main() {
    char c; long int d = 0;
    while (scanf("%c", &c) != EOF) {
        if (c>='0' && c<='1') {
            d <<= 1;
            d += c&1;
        }
    }
    printf("%li", d);
}