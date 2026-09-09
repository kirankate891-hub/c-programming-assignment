#include <stdio.h>

// 1. No Argument + No Return Value
void evenOdd1()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}


// 2. Argument + No Return Value
void evenOdd2(int n)
{
    if(n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}


// 3. No Argument + Return Value
int evenOdd3()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        return 1;
    else
        return 0;
}


// 4. Argument + Return Value
int evenOdd4(int n)
{
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}


int main()
{
    int n;
    int result;

    // 1. No Argument + No Return
    printf("\n--- 1. No Argument + No Return ---\n");
    evenOdd1();


    // 2. Argument + No Return
    printf("\n--- 2. Argument + No Return ---\n");
    printf("Enter number: ");
    scanf("%d", &n);

    evenOdd2(n);


    // 3. No Argument + Return
    printf("\n--- 3. No Argument + Return ---\n");
    result = evenOdd3();

    if(result == 1)
        printf("Even\n");
    else
        printf("Odd\n");


    // 4. Argument + Return
    printf("\n--- 4. Argument + Return ---\n");
    printf("Enter number: ");
    scanf("%d", &n);

    result = evenOdd4(n);

    if(result == 1)
        printf("Even\n");
    else
        printf("Odd\n");


    return 0;
}
