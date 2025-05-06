#include <stdio.h>

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    printf("Q: Is end of file?      A: %d\n", c == EOF);
    printf("Q: Is not end of file?  A: %d\n\n", c != EOF);
  }
}
