#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Allocate memory for 5 integers
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize values
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Before realloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Resize memory to hold 10 integers
    n = 10;
    arr = (int *)realloc(arr, n * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Initialize new elements
    for (int i = 5; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("\nAfter realloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
