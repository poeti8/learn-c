#include <stdio.h>

int main() {
  float celsius, fahrenheit;
  int lower, upper, step;

  lower = 0;
  upper = 5;
  step = 1;
  celsius = lower;
  printf("%10s %10s\n", "celsius", "fahrenheit");
  while (celsius <= upper) {
    fahrenheit = (9.0  / 5.0) * celsius + 32.0;
    printf("%10.0f %10.2f\n", celsius, fahrenheit);
    celsius += step;
  }
}

