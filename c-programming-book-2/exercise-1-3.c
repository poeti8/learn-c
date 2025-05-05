#include <stdio.h>

int main() {
  float fahrenheit, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 100;
  step = 20;
  fahrenheit = lower;
  printf("%10s %10s\n", "fahrenheit", "celsius");
  while (fahrenheit <= upper) {
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf("%10.0f %10.2f\n", fahrenheit, celsius);
    fahrenheit += step;
  }
}

