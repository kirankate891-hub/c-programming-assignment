#include <stdio.h>

void strong(int n)
{
    int i, num, rem, sum, fact, j;

    for(i = 1; i <= n; i++)
    {
        num = i;
        sum = 0;

        while(num != 0)
        {
            rem = num % 10;
            fact = 1;

            for(j = 1; j <= rem; j++)
                fact = fact * j;

            sum = sum + fact;
            num = num / 10;
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

    printf("Strong numbers are:\n");
    strong(n);

    return 0;
}
