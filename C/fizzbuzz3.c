//author- ackerman-mikasa

#include <stdio.h>

char const * template[] = {
  "%i",
  "Buzz",
  "Fizz",
  "FizzBuzz"
};
const int __donotuseme3[] = { 2, 0, 0 };
const int __donotuseme5[] = { 1, 0, 0, 0, 0 };
#define TEMPLATE(x) (template[__donotuseme3[(x) % 3] | __donotuseme5[(x) % 5]])

int main(void) {
  int i;
  for (i = 1; i <= 100; i++) {
    printf(TEMPLATE(i), i);
    putchar('\n');
  }
  return 0;
}
