/*
    Для заданного числа N проверить, является ли оно простым.

    Входные данные:
    Одно натуральное число N, отличное от 1.

    Выходные данные: 
    1 -- если число простое
    0 -- если число составное
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = (int) sqrt(n); i >= 2 ; i--)
        if (n % i == 0) {
            printf("%d\n", 0);
            return 0;
        }
        
    printf("%d\n", 1);

}

// ПРАВИЛЬНЫЙ ВАРИАНТ

#include <stdio.h>
#include <math.h>

int is_prime(int n) {
  if(n == 2 || n == 3) return 1;
  if (n % 6 != 1 && n % 6 != 5) return 0;
  int N = (int) sqrt(n) + 1, m[N + 2];
  
  for (int j = 1; j <= N / 6; ++j) {
    m[6 * j - 1] = 0;
    m[6 * j + 1] = 0;
  }
  
  for (int i = 6; i <= N; i += 6) {
    //printf("-1 %d : %d\n+1 %d : %d\n", i - 1, m[i - 1], i + 1, m[i + 1]);
    if (m[i - 1] && m[i + 1]) continue;
    if (n % (i - 1) == 0 || n % (i + 1) == 0) return 0;
    for (int k = 1; (i - 1) * k <= N + 1; ++k) {
      if ((i + 1) * k <= N + 1) m[(i + 1) * k] = 1;
      m[(i - 1) * k] = 1;
    }
  }
  
  return 1;
}
