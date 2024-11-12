#include <math.h>
#include <stdio.h>

int main() {
  int n, dig, result = 0, place = 1;

  scanf("%d", &n);

  while (n > 0) {
    dig = n % 10; // Extract the last digit
    if (dig == 0) {
      dig = 1; // Replace 0 with 1
    }
    result = result + dig * place; // Construct the new number
    place = place * 10;            // Move to the next place value
    n /= 10;                       // Remove the last digit
  }

  printf("%d\n", result);
  return 0;
}
