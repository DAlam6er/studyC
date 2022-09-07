/*
	* Программа для оценивания важности карт.
	* Выпущено под публичной Лас-Вегасской
	* лицензией.
	* Версия с использованием switch
    * и использованием циклов
	* (С) 2014 Команда по блек-джеку.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) 
{
	char *locale = setlocale(LC_ALL, "");
	char card_name[3];
    int count = 0;
    while (card_name[0]!='X') {
        puts ("Введите значение карты, для выхода введите X: ");
        scanf("%2s", card_name);
        int val = 0;
        switch (card_name[0]) {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
            default:
                val = atoi(card_name);
                if ((val <1) || (val>10)) {
                    printf("Значение должно входить в диапазон от 1 до 10!\n");
                    continue;
                }
            }
        if ((val > 2) && (val < 7 )) {
            count++;
        } else if (val == 10) {
            count--;
        }
        printf ("Текущий счёт: %i\n", count);
    }
    return 0;
}
