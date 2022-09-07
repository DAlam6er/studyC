#include <stdio.h>

#include <time.h>


int gcd_1(int x, int y){

  int t;

  while (x) {

    t = x;

    x = y % x;

    y = t;

  }

    return y;

} 


int gcd_2(int x, int y) {

  return x ? gcd_2(y % x, x) : y;

}


int gcd_3(int x, int y) {

  while (x != y) {

    if (x > y) {

      x -= y;

    } else {

       y -= x;

    }

    }

    return x;

} 


int main(void) {

  int a =2345, b = 49;

  float t0 = clock();

  for (int i = 0; i < 1000000; i++)

    gcd_1(a, b);

  float t1 = clock();

  for (int i = 0; i < 1000000; i++)

    gcd_2(a, b);

  float t2 = clock();

  for (int i = 0; i < 1000000; i++)

    gcd_3(a, b);

  float t3 = clock();

    

  printf("\n1: %f", t1 - t0);

  printf("\n2: %f", t2 - t1);

  printf("\n3: %f", t3 - t2);

}
