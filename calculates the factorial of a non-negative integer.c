/* Develop a C program that calculates the factorial of a non-negative integer 'n' entered by the user. The factorial of a non-negative integer 'n' is the product of all positive integers less than or equal to 'n'. For example, the factorial of 5 (written as 5!) is calculated as 5 * 4 * 3 * 2 * 1 = 120.
*/
#include<stdio.h>

int factorial(int n) {
  if (n < 0) {
    printf("Error: Factorial is not defined for negative numbers.\n");
    return 1;
  } else if (n == 0) {
    return 1;
  } else {
    int result = 1;
    for (int i = 1; i <= n; i++) {
      result *= i;
    }
    return result;
  }
}

int main() {
  int n;

  printf("Enter a non-negative integer: ");
  scanf("%d", &n);

  int fact = factorial(n);

  if (fact != 1) {
    printf("The factorial of %d is: %d\n", n, fact);
  }

  return 0;
}
