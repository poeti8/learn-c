#include <stdio.h>

// print all input lines longer than 80 characters
//

#define MAXCHARS         300
#define MIN_LINE_LENGTH   80

int get_line(char line[], int max_chars);
int add(char to[], char from[], int start);

int main() {
  int i, len, total, no_capacity;
  char line[MAXCHARS], lines[MAXCHARS];

  len         = 0;
  total       = 0;
  no_capacity = 0;

  while (no_capacity == 0 && (len = get_line(line, MAXCHARS)) > 0) {
    if ((total + len) < MAXCHARS - 1 && len > MIN_LINE_LENGTH - 1)
      total += add(lines, line, total);
    if (MAXCHARS - total <= MIN_LINE_LENGTH)
      no_capacity = 1;
  }

  if (total > 0)
    printf("%s", lines);
}

int get_line(char line[], int max_chars) {
  int c, i;

  for (i = 0; i < max_chars - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;

  if (c == '\n') {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';

  return i;
}

int add(char to[], char from[], int start) {
  int i;
  i = 0;
  while ((to[start + i] = from[i]) != '\0')
    ++i;
  return i;
}

