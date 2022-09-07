#include <stdio.h>

void incrByVal(int);
void incrByP(int *);

void incrByVal(int a)
{
    printf("a before changing: %d\n", a);
    a++;
    printf("a after changing: %d\n", a);
}

void incrByP(int *a)
{
    printf("a before changing: %d\n", *a);
    (*a)++;
    printf("a after changing: %d\n", *a);
}

int main ()
{
    int x = 9;
    int *p = &x;
    printf("original x = %d\n", x);
    incrByVal(x);
    printf("x after increased with func incrByVal(int) = %d\n", x);
    
    incrByP(p);
    printf("x after increased with func incrByP(int *) = %d\n", x);

    return 0;
}
