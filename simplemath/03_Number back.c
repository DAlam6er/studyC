/*
    Определить число, полученное выписыванием в обратном порядке цифр заданного целого трехзначного числа.
*/

#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);
    printf("%d", 100*(K%10)+10*(K/10%10)+K/100);
}

// Без привязки к числу разрядов
#include <stdio.h>
int main() {
    int k,m = 0;
    scanf("%i", &k);
    while (k) {
        m = m * 10 + k%10;
        k = k / 10;
    }
    printf("%i", m);
}