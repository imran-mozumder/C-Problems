/* Write a C program to calculate the simple interest for a loan or investment, given the principal amount, rate of interest, and time period in years.
The formula to calculate simple interest (SI) is:
𝑆𝐼 = 𝑃*𝑅*𝑇 100
Where:
● P is the principal amount (initial amount of money).
● R is the rate of interest per annum.
● T is the time period in years.
*/
#include <stdio.h>
int main() {
    float principal, rate, time, si;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest per annum: ");
    scanf("%f", &rate);

    printf("Enter the time period in years: ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;
    printf("The simple interest is: %.2f\n", si);

    return 0;
}
