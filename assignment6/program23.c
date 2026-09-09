#include <stdio.h>

void perfect(int n)
{
    int i, j, sum;

    for(i = 1; i <= n; i++)
    {
        sum = 0;

        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
                sum = sum + j;
        }

        if(sum == i)
            printf("%d ", i);
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Perfect numbers are:\n");
    perfect(n);

    return 0;
}
