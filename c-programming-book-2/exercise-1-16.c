#include <stdio.h>

#define MAXLINE 40

int get_line(char line[], int max_line);
void copy(char to[], char from[]);

int main() {
  int max, len;
  char line[MAXLINE], longest[MAXLINE];

  max = 0;
  len = 0;

  while ((len = get_line(line, MAXLINE)) > 0)
    if (len > max) {
      copy(longest, line);
      max = len;
    }

  if (max > 0) {
    printf("%s", longest);
    if (max > MAXLINE - 3)
      printf("...\n");
    printf("Length: %d\n", max);
  }
}

int get_line(char line[], int max_line) {
  int c, i;

  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    if (i < max_line - 4) 
      line[i] = c;

  if (c == '\n') {
    line[i] = '\n';
    ++i;
  }

  line[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

