#include <stdio.h>

// 1. No Argument + No Return Value
void case1()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase\n");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase\n");
    else
        printf("Not an alphabet\n");
}


// 2. Argument + No Return Value
void case2(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase\n");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase\n");
    else
        printf("Not an alphabet\n");
}


// 3. No Argument + Return Value
int case3()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 2;
    else
        return 0;
}


// 4. Argument + Return Value
int case4(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 2;
    else
        return 0;
}


int main()
{
    char ch;
    int result;

    // 1. No Argument + No Return
    printf("\n--- 1. No Argument + No Return ---\n");
    case1();


    // 2. Argument + No Return
    printf("\n--- 2. Argument + No Return ---\n");
    printf("Enter character: ");
    scanf(" %c", &ch);

    case2(ch);


    // 3. No Argument + Return
    printf("\n--- 3. No Argument + Return ---\n");
    result = case3();

    if(result == 1)
        printf("Uppercase\n");
    else if(result == 2)
        printf("Lowercase\n");
    else
        printf("Not an alphabet\n");


    // 4. Argument + Return
    printf("\n--- 4. Argument + Return ---\n");
    printf("Enter character: ");
    scanf(" %c", &ch);

    result = case4(ch);

    if(result == 1)
        printf("Uppercase\n");
    else if(result == 2)
        printf("Lowercase\n");
    else
        printf("Not an alphabet\n");


    return 0;
}
