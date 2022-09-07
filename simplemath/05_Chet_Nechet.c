/*
    Определить является ли натуральное число чётным или нечётным.
    Число 1, если k -- чётное и −1, если k -- нечётное.
*/

#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    printf("%d", 1-2*(k%2));
}

// Более сложное решение

#include <stdio.h>
#include <math.h>
int main() {
    int k;
    scanf("%d", &k);
    printf("%.0lf", pow(-1, k%2));
}

// Мое решение
#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    printf("%d", (k+1)%2-k%2);
}