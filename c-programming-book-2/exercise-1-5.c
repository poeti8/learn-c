#include <stdio.h>

int main() {
  int fahrenheit;

  printf("%10s %10s\n", "fahrenheit", "celsius");

  for (fahrenheit = 300; fahrenheit >= 0; fahrenheit -= 50) {
    printf("%10d %10.2f\n", fahrenheit, 5.0 / 9.0 * (fahrenheit - 32));
  }
}
