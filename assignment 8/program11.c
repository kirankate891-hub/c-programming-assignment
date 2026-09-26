#include <stdio.h>

void printPrime(int *n)
{
    int i, j, flag;

    for(i = 2; i <= *n; i++)
    {
        flag = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printPrime(&n);

    return 0;
}
