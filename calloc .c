#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers and initialize to 0
    int *arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Elements after calloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);   // All values will be 0
    }

    // Free allocated memory
    free(arr);

    return 0;
}
