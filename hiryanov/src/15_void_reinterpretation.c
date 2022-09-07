#include <stdio.h>
#include <stdlib.h>

void print_abstract(void *, int);

int main()
{
    char c = 'W';
    int i = 450;
    double d = -1.9;

    void *p;
    p = &c;
    print_abstract(p, 1);
    p = &i;
    print_abstract(p, 2);
    p = &d;
    print_abstract(p, 3);

    return 0;
}

void print_abstract(void *p, int marker_type)
{
    if (marker_type == 1)
        printf("%c\n", *(char *)p);
    else if (marker_type == 2)
        printf("%d\n", *(int *)p);
    else if (marker_type == 3)
        printf("%f\n", *(double *)p);
    else
    {
        printf("Unknown marker_type! Exiting.\n");
        exit(1);
    }
}
