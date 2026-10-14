```c
#include <stdio.h>

/* 1. Check Even or Odd */
void evenOdd(void) {
    unsigned int n = 7;

    if (n & 1U)
        printf("Odd\n");
    else
        printf("Even\n");
}

/* 2. Check whether nth bit is set */
void checkBit(void) {
    unsigned int num = 10, n = 3;

    if (num & (1U << n))
        printf("Bit is set\n");
    else
        printf("Bit is not set\n");
}

/* 3. Set nth bit */
void setBit(void) {
    unsigned int num = 8, n = 2;

    num |= (1U << n);
    printf("After setting bit: %u\n", num);
}

/* 4. Clear nth bit */
void clearBit(void) {
    unsigned int num = 10, n = 1;

    num &= ~(1U << n);
    printf("After clearing bit: %u\n", num);
}

/* 5. Toggle nth bit */
void toggleBit(void) {
    unsigned int num = 10, n = 1;

    num ^= (1U << n);
    printf("After toggling bit: %u\n", num);
}

/* 6. Count set bits */
void countBits(void) {
    unsigned int num = 13;
    int count = 0;

    while (num != 0) {
        count += num & 1U;
        num >>= 1;
    }

    printf("Number of set bits: %d\n", count);
}

/* 7. Check power of 2 */
void powerOfTwo(void) {
    unsigned int n = 16;

    if (n != 0 && (n & (n - 1U)) == 0)
        printf("%u is a power of 2\n", n);
    else
        printf("%u is not a power of 2\n", n);
}

/* 8. Find the unique number */
void uniqueNumber(void) {
    int arr[] = {2, 3, 5, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = 0;

    for (int i = 0; i < n; i++)
        result ^= arr[i];

    printf("Unique number: %d\n", result);
}

/* 9. Swap numbers using XOR */
void swapNumbers(void) {
    int a = 5, b = 9;

    a ^= b;
    b ^= a;
    a ^= b;

    printf("After swapping: a = %d, b = %d\n", a, b);
}

/* 10. Reverse 8 bits */
void reverseBits(void) {
    unsigned int num = 13, rev = 0;

    for (int i = 0; i < 8; i++) {
        rev = (rev << 1) | (num & 1U);
        num >>= 1;
    }

    printf("Reversed 8-bit value: %u\n", rev);
}

/* 11. Find rightmost set bit */
void rightmostSetBit(void) {
    unsigned int n = 12;
    unsigned int result = n & (~n + 1U);

    printf("Rightmost set bit value: %u\n", result);
}

/* 12. Remove rightmost set bit */
void removeRightmostSetBit(void) {
    unsigned int n = 12;

    n &= (n - 1U);
    printf("After removing rightmost set bit: %u\n", n);
}

/* 13. Check opposite signs */
void oppositeSigns(void) {
    int a = -5, b = 10;

    if ((a < 0) != (b < 0))
        printf("Numbers have opposite signs\n");
    else
        printf("Numbers have the same sign\n");
}

/* 14. Extract 3 bits starting at position 2 */
void extractBits(void) {
    unsigned int num = 60;
    unsigned int result = (num >> 2) & 7U;

    printf("Extracted bit field: %u\n", result);
}

/* 15. Set, clear and toggle bits */
void multipleBitOperations(void) {
    unsigned int num = 10;

    num |=  (1U << 0);  // Set bit 0
    num &= ~(1U << 3);  // Clear bit 3
    num ^=  (1U << 2);  // Toggle bit 2

    printf("Final value: %u\n", num);
}

int main(void) {
    evenOdd();
    checkBit();
    setBit();
    clearBit();
    toggleBit();
    countBits();
    powerOfTwo();
    uniqueNumber();
    swapNumbers();
    reverseBits();
    rightmostSetBit();
    removeRightmostSetBit();
    oppositeSigns();
    extractBits();
    multipleBitOperations();

    return 0;
}
```
