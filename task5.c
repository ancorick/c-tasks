#include <stdio.h>

int main() {
  int number;
  int sum;

  scanf("%d", &number);

  sum = number / 100 + (number / 10) % 10 + number % 10;

  printf("%d\n", sum);

  return 0;
}