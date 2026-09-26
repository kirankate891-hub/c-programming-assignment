#include <stdio.h>

int main()
{
    int arr[100], brr[100], crr[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter first array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter second array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    }

    for(i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
    }

    printf("Third array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}
