#include <stdio.h>

void findminMax(int arr[], int size)
{
    int i;
    int min = arr[0];
    int max = arr[0];

    for(i = 1; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}

int main()
{
    int arr[5], i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    findminMax(arr, 5);

    return 0;
}
