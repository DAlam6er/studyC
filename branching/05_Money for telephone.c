/*
    Услуги телефонной сети оплачиваются по следующему правилу: за разговоры до 500 минут (включительно) в месяц — 350 руб., а разговоры сверх установленной нормы оплачиваются из расчета 2 руб. за минуту. Написать программу, вычисляющую плату за пользование телефоном для введенного времени разговоров за месяц.
*/

#include <stdio.h>

int main() {
    unsigned t;
    scanf("%u", &t);
    printf("%u",350+(t>500)*(t-500)*2);
}