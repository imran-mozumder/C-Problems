/* Develop a C program that searches for a given integer element in an array entered by the user using linear search. Linear search involves iterating through each element of the array sequentially until the desired element is found or the end of the array is reached.
*/
#include<stdio.h>
int main() {
    int arr[100];
    int size, num, i = 0, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &num);

    while (i < size && !found) {
        if (arr[i] == num) {
            found = 1;
        }
        i++;
    }

    if (found) {
        printf("Element found in the array.\n");
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
