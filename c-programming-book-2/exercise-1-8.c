#include <stdio.h>

int main() {
  int c;
  long newlines = 0, blanks = 0, tabs = 0;
  
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++newlines;
    if (c == ' ')
      ++blanks;
    if (c == '\t')
      ++tabs;
  }
  
  printf("newlines: %ld\n", newlines);
  printf("blanks: %ld\n", blanks);
  printf("tabs: %ld\n", tabs);
}
