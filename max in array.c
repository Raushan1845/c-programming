#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid array size");
        return 0;
    }

    int arr[n];

    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum value in array is %d", max);

    return 0;
}
