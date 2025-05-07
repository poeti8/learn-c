#include <stdio.h>

int main() {
  int c, blanks = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++blanks;
    if (c != ' ')
      blanks = 0;
    if (blanks <= 1)
      putchar(c);
  }
}
