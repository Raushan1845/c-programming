#include <stdio.h>

int main()
{
    int n, original;
    
    printf("Enter number: ");
    scanf("%d", &n);

    original = n;
    int rev = 0;

    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    printf("Reverse of %d is %d\n", original, rev);

    if(original == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome");

    return 0;
}
