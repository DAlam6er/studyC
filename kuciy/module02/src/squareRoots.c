/*
Программа расчёта корней квадратного уравнения
*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double res1, res2;
    puts("Введите коэффициенты уравнения a,b,c через запятую");
    if (3==scanf("%lf,%lf,%lf", &a, &b, &c))
    {
        res1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
        res2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
        printf("Корни уравнения равны %.2f и %.2f\n", res1, res2);
    }
    else
        puts("Введено недостаточно данных для расчёта");
    return 0;
}
