/* Write a C program that prompts the user to input an integer and determines whether it is a prime number or not. A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself. For example, 2, 3, 5, 7, 11, and 13 are prime numbers.
*/
#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0;
        }
        i++;
    }

    printf("%d is a prime number.\n", num);

    return 0;
}
