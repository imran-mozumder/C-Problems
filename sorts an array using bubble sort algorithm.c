 /* Create a C program that sorts an array of integers entered by the user using the bubble sort algorithm and displays the sorted array. Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
*/
#include <stdio.h>
void bubblesort(int arr[], int n) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[30], n, i;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d integers:", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  bubblesort(arr, n);

  printf("Sorted array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
