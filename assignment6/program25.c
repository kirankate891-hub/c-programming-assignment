#include <stdio.h>

void menu(int n)
{
    int choice, i, rem, rev, sum, flag;

    printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome or Not");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse");
    printf("\n6. Sum of Digits");

    printf("\n\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(n % 2 == 0)
                printf("Even");
            else
                printf("Odd");
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

            if(flag)
                printf("Prime");
            else
                printf("Not Prime");
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
                printf("Palindrome");
            else
                printf("Not Palindrome");

            break;
        }

        case 4:
            if(n > 0)
                printf("Positive");
            else if(n < 0)
                printf("Negative");
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

            printf("Sum = %d", sum);
            break;

        default:
            printf("Invalid choice");
    }
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    menu(n);

    return 0;
}
