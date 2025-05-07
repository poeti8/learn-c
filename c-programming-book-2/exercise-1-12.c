#include <stdio.h>

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t')
      putchar('\n');
    else if (c == '\n')
      ;
    else
      putchar(c);
  }
}
