#include <stdio.h>
#include <stdlib.h>

void die() {
  printf("Incorrect\n");
  exit(0);
}

int main(void) {
  setvbuf(stdout, NULL, _IONBF, 0);

  int a, b, c;
  printf("The pin is in 3 integers in the form 'xxx xxx xxx'\n");
  printf("Enter the pin: ");

  scanf("%d %d %d", &a, &b, &c);

  if (a * 24 != 3336)
    die();

  if (b << 12 != 1765376)
    die();

  int x = 123;
  for (int i = 0; i < b; ++i) {
    x = (x + 456 * b) % 999;
  }
  if (c != x)
    die();

  printf("The flag is %s\n", getenv("TRIPLE_PIN_FLAG"));
}
