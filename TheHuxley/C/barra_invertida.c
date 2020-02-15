#include <stdio.h>

#define MULT(a,b) (a * b)

//#define SUM(a, b) (a + (MULT(a,           \
							     b)))

#define SUM(a,b) (a + (MULT(a,b)))

int main() {
  int a, b, c, max;
  printf("Digite a e b:\n");
  scanf("%d %d", &a, &b);
  max = MULT(a,b);
  c = SUM(a,max);

  printf("MULT: %d\n", max);
  printf("SUM: %d\n", c);
}