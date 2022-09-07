#include <stdio.h>

int main () {
    double res = 10 >> 2 + 4/2 - 3 << 2;
    printf("10 >> 2 + 4/2 - 3 << 2 = %.2f\n", res);
    return 0;
}
