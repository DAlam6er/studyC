/*
    Программа определяет скорость, с которой автомобиль проехал некоторое расстояние.
    Расстояние ввести в километрах, а время в виде дробного числа, в котором целая часть будет задавать кол-во минут,
    а дробная - количество секунд
*/

#include <stdio.h>

int main() {
    double dist, time, speed, sec, min;
    puts("Введите расстояние в км и через запятую время в виде дробного числа,\nгде целая часть задаёт количество минут, а дробная - количество секунд");
    if (2==scanf("%lf,%lf", &dist, &time))
    {
        sec = time - (int)time;
        min = (int)time;
        speed = dist / (min/60.0 + sec*100/3600.0 );
        printf("Скорость, с которой проехал автомобиль, составляет %.2f км/ч\n", speed);
    }
    else
        puts("Должно быть введено два аргумента!");
    return 0;
}
