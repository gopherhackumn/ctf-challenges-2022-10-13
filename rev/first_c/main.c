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

  if (a * 71 != 9869)
#ifdef DEBUG
    a = 139;
#else
    die();
#endif

  if (b << 12 != 1765376)
#ifdef DEBUG
    b = 431;
#else
    die();
#endif

  int x = a;
  for (int i = 0; i < b; ++i) {
    x = (x + 456 * b) % 999;
  }

#ifdef DEBUG
  printf("x: %d\n", x);
  exit(0);
#endif

  if (c != x)
    die();

  printf("The flag is %s\n", getenv("TRIPLE_PIN_FLAG"));
}
