#include <stdio.h>

#define MAX_LENGTH 128

int main(void)
{
    int c, i, j, characters[128];

    for (i = 0; i < 128; ++i) {
      characters[i] = 0;
    }

    while ((c = getchar()) != EOF) {
      ++characters[c];
    }
    
    for (i = 0; i < 128; ++i) {
      if (characters[i] > 0) {
        if (i == '\t') {
          printf("\t");
        } else if (i == ' ') {
          printf("\\s");
        } else if (i == '\n') {
          printf("\\n");
        } else {
          putchar(i);
        }
        printf(": ");
        for (j = 0; j < characters[i]; ++j) {
          printf("-");
        }
        printf("\n");
      }
    }
}
