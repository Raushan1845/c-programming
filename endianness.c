#include <stdio.h>
int main() {
    unsigned int x = 1;
    char *ptr = (char *)&x;

    if (*ptr == 1)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");

    return 0;
}
