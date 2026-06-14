#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for one integer
    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 100;

    printf("Value = %d\n", *ptr);

    free(ptr);  // Free allocated memory

    return 0;
}
