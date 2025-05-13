#include <stdio.h>

#define MAX 200

int main() {
  int i, c,
      max_length = 0,
      lengths[MAX];

  for (i = 0; i < MAX; ++i) 
    lengths[i] = 0;

  while((c = getchar()) != EOF) {
    if (c - 1 >= MAX) {
      printf("Letter is beyond supported character number %d.\n", MAX);
    } else {
      ++lengths[c];
    }
  }

  for (i = 0; i < MAX; ++i)
    if (lengths[i] > max_length)
      max_length = lengths[i];

  while (max_length > 0) {
    for (i = 0; i < MAX; ++i)
      if (lengths[i] >= max_length)
        printf(" | ");
      else if (lengths[i] > 0)
        printf("   ");

    printf("\n");
    --max_length;
  }

  for (i = 0; i < MAX; ++i)
    if (lengths[i] > 0) {
      if (i == ' ') {
        printf("\\s ");
      } else if (i == '\t') {
        printf("\\t ");
      } else if (i == '\n') {
        printf("\\n ");
      } else {
        printf(" %c ", i);
      }
    }

  printf("\n");
}

