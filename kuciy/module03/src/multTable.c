#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x1, x2, answer;
    srand(time(NULL));
    printf("Результат перемножения %d и %d?\n", x1=rand()%8 + 2, x2=rand()%8 + 2);
    scanf("%d", &answer);
    printf("Ваша оценка: \"%d\"\n", answer==x1*x2? 5:2);
    return 0;
}
