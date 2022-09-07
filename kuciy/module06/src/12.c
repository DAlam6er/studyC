/*
    Программа вычисляет длину введённой строки
*/

#include <stdio.h>
#define MAX_LEN 256


int main() {
    char str[MAX_LEN];
    char *pstr;
    int i, cnt=0;
    puts("Введите строку (не длиннее 254 символов): ");
    pstr = fgets(str, MAX_LEN, stdin);
    printf("\n%s\n", str);
    /* MAX_LEN - 1 на случай достижения максимальной длины строки,
       при этом символом под номером MAX_LEN станет '\0' */
    for (i = 0; i < MAX_LEN - 1; i ++) {
        cnt++;
        if ('\n' == *(pstr + i + 1)) break; 
    }
    printf("\nДлина введённой строки %d символов.\n", cnt);
    return 0;
}
