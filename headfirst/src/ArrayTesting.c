/* *******************************
 * The example of array decaying *
 *********************************
*/
#include <stdio.h>

void MeasureArray(char *arr) {
    printf("Size of measured Array is %i bytes.\n", sizeof(arr));
    printf("Size of int is %i bytes.\n", sizeof(int));
}

int main(void) {
    char testArr[] = "This is a new test string";
    printf("Size of array before passing to a function is %i bytes.\n",sizeof(testArr));
    MeasureArray(testArr);
    printf("Size of array after passing to a function is %i bytes.\n",sizeof(testArr));
    return(0);
}
