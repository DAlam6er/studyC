#include <stdio.h>

int main() {
    unsigned char ch;
    printf("Введите символ: ");
    scanf(" %c", &ch);
    printf("Код введённого символа: %i\n", ch);
    return 0;
}
