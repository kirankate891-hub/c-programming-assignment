#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;

    while (exp > 0)
    {
        result = result * base;
        exp--;
    }

    return result;
}

int main()
{
    int limit, num, temp, digit;
    int count, sum;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Armstrong numbers between 1 and %d:\n", limit);

    for (num = 1; num <= limit; num++)
    {
        temp = num;
        count = 0;
        sum = 0;

        // Count the digits
        int t = temp;

        while (t > 0)
        {
            count++;
            t = t / 10;
        }

        // Calculate Armstrong sum
        t = temp;

        while (t > 0)
        {
            digit = t % 10;
            sum = sum + power(digit, count);
            t = t / 10;
        }

        // Check Armstrong number
        if (sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
