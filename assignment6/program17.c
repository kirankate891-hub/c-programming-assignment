#include <stdio.h>

void armstrong()
{
    int n, i, num, rem, sum, digits;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

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

        if(sum == num)
            printf("%d ", num);
    }
}

int main()
{
    armstrong();
    return 0;
}
