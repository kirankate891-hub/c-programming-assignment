#include <stdio.h>

void evenOdd(int *n)
{
    if(*n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

void prime(int *n)
{
    int i, flag = 1;

    if(*n < 2)
        flag = 0;

    for(i = 2; i < *n; i++)
    {
        if(*n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Prime");
    else
        printf("Not Prime");
}

void palindrome(int *n)
{
    int temp, digit, reverse = 0;

    temp = *n;

    while(temp > 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if(reverse == *n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

void positiveNegative(int *n)
{
    if(*n > 0)
        printf("Positive");
    else if(*n < 0)
        printf("Negative");
    else
        printf("Zero");
}

void reverseNumber(int *n)
{
    int temp, digit, reverse = 0;

    temp = *n;

    while(temp > 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    printf("Reverse = %d", reverse);
}

void sumDigits(int *n)
{
    int temp, digit, sum = 0;

    temp = *n;

    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    printf("Sum of digits = %d", sum);
}

int main()
{
    int n, choice;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("\n1. Even/Odd");
    printf("\n2. Prime/Not");
    printf("\n3. Palindrome/Not");
    printf("\n4. Positive/Negative/Zero");
    printf("\n5. Reverse Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            evenOdd(&n);
            break;

        case 2:
            prime(&n);
            break;

        case 3:
            palindrome(&n);
            break;

        case 4:
            positiveNegative(&n);
            break;

        case 5:
            reverseNumber(&n);
            break;

        case 6:
            sumDigits(&n);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
