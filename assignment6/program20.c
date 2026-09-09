#include <stdio.h>

void menu()
{
    int n, choice, i, rem, rev, sum, flag;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n1. Check Even or Odd");
    printf("\n2. Check Prime or Not");
    printf("\n3. Check Palindrome or Not");
    printf("\n4. Check Positive, Negative or Zero");
    printf("\n5. Reverse a Number");
    printf("\n6. Sum of Digits");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(n % 2 == 0)
                printf("Even number");
            else
                printf("Odd number");
            break;

        case 2:
            flag = 1;

            if(n < 2)
                flag = 0;

            for(i = 2; i <= n / 2; i++)
            {
                if(n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag == 1)
                printf("Prime number");
            else
                printf("Not a prime number");
            break;

        case 3:
            {
                int temp = n;
                rev = 0;

                while(temp != 0)
                {
                    rem = temp % 10;
                    rev = rev * 10 + rem;
                    temp = temp / 10;
                }

                if(rev == n)
                    printf("Palindrome number");
                else
                    printf("Not a palindrome number");
            }
            break;

        case 4:
            if(n > 0)
                printf("Positive number");
            else if(n < 0)
                printf("Negative number");
            else
                printf("Zero");
            break;

        case 5:
            rev = 0;

            while(n != 0)
            {
                rem = n % 10;
                rev = rev * 10 + rem;
                n = n / 10;
            }

            printf("Reverse = %d", rev);
            break;

        case 6:
            sum = 0;

            while(n != 0)
            {
                rem = n % 10;
                sum = sum + rem;
                n = n / 10;
            }

            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid choice");
    }
}

int main()
{
    menu();
    return 0;
}
