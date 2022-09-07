/* 
    Программа копирует массив A в массив B.
*/

#include <stdio.h>
#define SIZE 10

void print_array(int A[]) {
    int i;
    for (i = 0; i < SIZE; i++)
        printf("%3d ", A[i]);
    printf("\n");
}

int main() {
    int A[SIZE] = {0, 10, 20, 30, 40,
                   50, 60, 70, 80, 90};
    int B[SIZE] = {0};

    int i;

    for (i = 0; i < SIZE; i++)
        B[i] = A[i];
    
    print_array(A);
    print_array(B);    

    return 0;
}
