/*
    На вход программе подаётся два числа S и E, записанных через пробел. 
    При этом гарантируется, что S≤E. 
    Программа должна выводить одно случайное число из промежутка [S;E]
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int S,E;
    scanf("%d%d", &S,&E);
    printf("%d", S+(rand()%(E-S+1)));
}