#include <stdio.h>

// C n tem booleano por este motivo e utilizado assim
#define BOOl char
#define FALSE 0
#define TRUE 1

int main(int argc, char const *argv[]) {
  const int foo = 12;
  int bar = 1;

  int a = 0, b = 1, c = 2, d = 3, e = 4;
  a = b - c + d * e;

  printf("%d\n", a);

  int f = 3;
  float g = 4.5;
  double h = 5.25;
  float sum;

  sum = f + g + h;

  printf("%f\n", sum);

  return 0;
}
