#include <stdio.h>

/* 1. No Argument + No Return Value */
void input()
{
    printf("This is No Argument No Return Function\n");
}


/* 2. Argument + No Return Value */
void addition(int a, int b)
{
    printf("Addition = %d\n", a + b);
}


/* 3. No Argument + Return Value */
int multiplication()
{
    int a, b;

    printf("Enter two numbers for multiplication: ");
    scanf("%d%d", &a, &b);

    return a * b;
}


/* 4. Argument + Return Value */
int operation(int a, int b, char op)
{
    switch(op)
    {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            return a / b;

        case '%':
            return a % b;

        default:
            return 0;
    }
}


int main()
{
    int a, b, result;
    char op;

    /* Type 1 */
    input();

    /* Type 2 */
    printf("\nEnter two numbers for addition: ");
    scanf("%d%d", &a, &b);

    addition(a, b);


    /* Type 3 */
    result = multiplication();
    printf("Multiplication = %d\n", result);


    /* Type 4 */
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    result = operation(a, b, op);

    printf("Result = %d\n", result);

    return 0;
}
