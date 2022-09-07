#include <stdio.h>

int main() {
    printf("sizeof(5)     is %lu\n", sizeof(5));
    printf("sizeof(2.5)   is %lu\n", sizeof(2.5));
    printf("sizeof(43L)   is %ld\n", sizeof(43L));
    printf("sizeof(123UL) is %lu\n", sizeof(123UL));
    printf("sizeof(12LL)  is %lu\n", sizeof(12LL));
    printf("sizeof(3.45LL) doesn't exist in C!\n");
    printf("sizeof(5.2F)  is %lu\n", sizeof(5.2F));
    return 0;    
}
