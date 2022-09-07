#include <stdio.h>
#include <math.h>
#define print(s) printf(#s)
#define INTSWAP(a,b) { \
    a=a^b; \
    b=a^b; \
    a=a^b; \
}

#define SWAP(a,b) do { \
    __typeof__(a) tmp = a; \
    a = b; \
    b = tmp; \
} while(0)

#define SQRROOT1(a,b,c) (((-b) + sqrt((b)*(b) - 4*(a)*(c)))/(2*(a)))
#define SQRROOT2(a,b,c) (((-b) - sqrt((b)*(b) - 4*(a)*(c)))/(2*(a)))
#define SQRROOTSIGN(a,b,c,sign) ('-'==sign)?SQRROOT2(a,b,c):SQRROOT1(a,b,c)

#define VAR1 20
#define VAR2 44

int main() {
    int x=-10, y=20;
    float k=0.5, l=20.3;
    unsigned char sign;
    #if (x<0 || y<0)
        printf("x=%d y=%d\n", x, y)
        printf("%d\n",__LINE__)
    #endif
    int r,s,t;
    print(Вывод значений зарезервированных
        идентификаторов препроцессора:\n);
    printf("__FILE__ - > %s\n", __FILE__);
    printf("__LINE__ - > %d\n", __LINE__);
    printf("__DATE__ - > %s\n", __DATE__);
    printf("__TIME__ - > %s\n", __TIME__);
    printf("Было:  x=%d, y=%d\n\tk=%.2f, l=%.2f\n", x, y, k, l);
    INTSWAP(x,y);
    SWAP(k,l);
    printf("Стало: x=%d, y=%d\n\tk=%.2f, l=%.2f\n", x, y, k, l);
    print(Введите коэффициенты квадратного уравнения через запятую: );
    scanf("%d,%d,%d", &r, &s, &t);
    printf("Корни заданного квадратного уравнения: %.2f, %.2f\n", SQRROOT1(r,s,t), SQRROOT2(r,s,t));
    printf("Введите знак нужного корня: ");
    fflush(stdout);
    scanf(" %c", &sign);
    if ('+'==sign || '-' == sign)
        printf("Корень заданного квадратного уравнения с учётом знака: %.2f\n", SQRROOTSIGN(r,s,t,sign));
    else
        printf("Введён неверный знак!\n");
    #if (VAR1<0 || VAR2<0)
        printf("VAR1=%d, VAR2=%d\nномер строки: %d\n", VAR1, VAR2, __LINE__);
    #endif
    return 0;
}
