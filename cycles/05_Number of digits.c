/*
    Подсчитать количество цифр в записи натурального числа N.
*/

#include <stdio.h>

int main(void) {
    int n,i=0;
    scanf("%d", &n);
    do {
      n/=10;
      i++;
    } while (n);
    printf("%d", i);
}

// Еще вариант

#include <stdio.h>

int main() {
    int i, j;
    // %n - Принимает целое значение, равное количеству считанных до текущего момента символов
    scanf("%d%n", &i, &j); 
    printf("%d", j);
}

// Еще вариант

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%i", 1 + (int) log10(n));
}