#include <stdio.h>

#define IN  0
#define OUT 1
#define MAX 10

int main() {
  int i, c, 
      word_length = 0, 
      max_length = 0,
      lengths[MAX];

  for (i = 0; i < MAX; ++i)
    lengths[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (word_length > MAX) {
        printf("Word has passed maximum allowed length %d.\n", MAX);
      } else if (word_length > 0) {
        ++lengths[word_length - 1];
      }
      word_length = 0;
    } else {
      ++word_length;
    }
  }

  for (i = 0; i < MAX; ++i)
    if (lengths[i] > max_length)
      max_length = lengths[i];

  while (max_length > 0) {
    for (int j = 0; j < MAX; ++j)
      if (lengths[j] >= max_length) 
        printf(" | ");
      else
        printf("   ");

    printf("\n");
    --max_length;
  }

  for (i = 1; i <= MAX; ++i)
    printf("%2d ", i);

  printf("\n");
}
