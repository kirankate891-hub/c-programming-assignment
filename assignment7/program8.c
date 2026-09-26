#include <stdio.h>

int main()
{
    int arr[100], brr[100], crr[200];
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &brr[i]);
    }

    for(i = 0; i < n1; i++)
    {
        crr[i] = arr[i];
    }

    for(j = 0; j < n2; j++)
    {
        crr[i] = brr[j];
        i++;
    }

    printf("Merged array:\n");

    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}
