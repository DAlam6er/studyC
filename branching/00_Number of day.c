/*
    Вычислить номер дня в невисокосном году по заданным числу и месяцу.

    Входные данные:
    Два целых числа. Первое число m -- номер месяца. 1≤m≤12 
    Второе число d -- номер дня в месяце. 1≤d≤31

    Выходные данные: 
    Одно целое число -- порядковый номер дня в невисокосном году.
    
*/

#include <stdio.h>

int main() {
    int m, d, n=0;
    scanf("%d %d", &m, &d);
    switch(m-1) {
        case 11: n+=30;
        case 10: n+=31;
        case 9:  n+=30;
        case 8:  n+=31;
        case 7:  n+=31;
        case 6:  n+=30;
        case 5:  n+=31;
        case 4:  n+=30;
        case 3:  n+=31;
        case 2:  n+=28;
        case 1:  n+=31;
    }
    n+=d;
    printf("%d", n);
}

// еще вариант

#include <stdio.h>

int main() {
    int m, d;
    scanf("%d%d", &m, &d);

    printf("%d\n", (m + m / 9) / 2  + 30 * --m - 2 * (m > 1) + d);

}

// HABR

#include <stdio.h>
#include <math.h>

int main() {
    int m, d;
    scanf("%d %d", &m, &d);
    while(--m>0)
        d += 28+(m + (int)floor(m/8))%2 + 2%m + 2*(int)floor(1/m);
    printf("%d\t", d);
}