/*
    Напишите программу, которая делает бит-реверс.
*/

#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    printf("%d", (k+1)%2);
}

// Более простое решение
int main() {
  int K;
  scanf("%d", &K);
  printf("%d", 1-K);
  return 0;
}