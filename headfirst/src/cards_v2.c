/*
	* Программа для оценивания важности карт.
	* Выпущено под публичной Лас-Вегасской
	* лицензией.
	* Версия с использованием switch
	* (С) 2014 Команда по блек-джеку.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	char *locale = setlocale(LC_ALL, "");
	char card_name[3];
	puts ("Введите название карты: ");
	scanf ("%2s", card_name);
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
		default:
			val = atoi(card_name);
		}

	/* Проверяем, находится ли значение между 3 и 6 */
	if ((val>2) && (val<7))
		puts ("Счётчик увеличился");
	/* В противном случае проверяем, была ли эта карта
	   10, J (валетом), Q (дамой) или K (королём) */
	else if (val==10)
		puts ("Счётчик уменьшился");
	return 0;
}
