/* Develop a C program that calculates the sum of digits of a non-negative integer entered by the user. The sum of digits is obtained by adding up all the individual digits of the number. For example, the sum of digits of 123 is calculated as 1 + 2 + 3 = 6.
*/
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("The sum of digits is: %d\n", sum);

    return 0;
}
