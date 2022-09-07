#include <stdio.h>

#define ROWS 11

#if (ROWS > 0 && ROWS < 5)
    #define COLUMNS 5
#elif (ROWS >=5 && ROWS <8)
    #define COLUMNS 6
#elif (ROWS >= 8)
    #define COLUMNS 10
#endif

int main() {
    printf("Число строк таблицы: %d\n", COLUMNS);
    return 0;
}
