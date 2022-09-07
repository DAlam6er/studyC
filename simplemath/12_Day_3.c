/*
    Идёт k день года. Определить, номер дня недели. Предполагаем, что 1 января выпало на среду. Дни недели нумеруем следующим образом:

    0 -- воскресенье
    1 -- понедельник
    2 -- вторник
    3 -- среда
    4 -- четверг
    5 -- пятница
    6 -- суббота
*/

#include <stdio.h>
#define week 7
#define f_day 3

int main() {
    int k;
    const int p_day= (f_day > 0) ? (f_day - 1) : 0;

    scanf("%d", &k);
    printf("%d", (k+p_day)%week);

}