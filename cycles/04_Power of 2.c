/*
    По данном числу N определить, является ли оно степенью числа 2.
*/
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    while(n>0 && 0==n%2) {
        n/=2;
    }
    printf("%s", 1==n?"YES":"NO");
}

// Более простое и изящное решение

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    puts(n&(n-1)?"NO":"YES");
}