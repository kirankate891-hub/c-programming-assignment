//with parameter and without return type
#include <stdio.h>

void armstrong(int n)
{
    int i, num, rem, sum, digits;

    for(i = 1; i <= n; i++)
    {
        num = i;
        sum = 0;
        digits = 0;

        int temp = num;

        while(temp != 0)
        {
            digits++;
            temp = temp / 10;
        }

        temp = num;

        while(temp != 0)
        {
            rem = temp % 10;

            int power = 1;
            for(int j = 1; j <= digits; j++)
                power = power * rem;

            sum = sum + power;
            temp = temp / 10;
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

    printf("Armstrong numbers are:\n");
    armstrong(n);

    return 0;
}
