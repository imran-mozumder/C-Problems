/* Write a C program that takes an integer input 'n' and prints the Fibonacci sequence up to the 'n'-th term.
 The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, starting with 0 and 1.
  For example, the Fibonacci sequence up to the 10th term is: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
*/

#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}
