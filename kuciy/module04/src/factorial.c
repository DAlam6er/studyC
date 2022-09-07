/*
    Вычисление факториалов чисел до 20.
    Свыше 20! даже unsigned long long int не способна вместить в себя число
    20!     ==  2 432 902 008 176 640 000
    max(ULL)== 18 446 744 073 709 551 615 (8 байт)
    21!     == 51 090 942 171 709 440 000
*/  

#include <stdio.h>

int main() {
    for (int n=1; n<=20; n++)
    {
        unsigned long long int f=1;
        for (int i=2; i<=n; i++)
            f*=i;
        printf("%2d -> %lld\n", n, f);
    }
    return 0;
}
