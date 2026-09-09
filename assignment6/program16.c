#include <stdio.h>

void prime()
{
    int n, i, j, flag;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++)
    {
        flag = 1;

        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            printf("%d ", i);
    }
}

int main()
{
    prime();
    return 0;
}
