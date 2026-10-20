#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int pos = 3;
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Deleting element at specific index
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease the size of the array

    printf("\nArray after deleting element at index %d: ", pos);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}