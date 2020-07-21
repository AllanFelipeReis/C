// Biblioteca do printf()
#include <stdio.h>

int main(int argc, char const *argv[]) {
  // Output int
  int a = 10;
  printf("Number: %d\n", a);

  //float and double Output
  float b = 13.5;
  double c = 12.4;
  printf("Number: %f\n", b);
  printf("%1f\n", c);

  //print characters
  char d = 'A';
  printf("Character: %c\n", d);

  return 0;
}
