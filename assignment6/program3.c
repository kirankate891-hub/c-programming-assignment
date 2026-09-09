#include <stdio.h>

// 1. No Argument + No Return Value
void leap1()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");
}


// 2. Argument + No Return Value
void leap2(int year)
{
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");
}


// 3. No Argument + Return Value
int leap3()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}


// 4. Argument + Return Value
int leap4(int year)
{
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}


int main()
{
    int year;
    int result;

    printf("\n--- 1. No Argument + No Return ---\n");
    leap1();


    printf("\n--- 2. Argument + No Return ---\n");
    printf("Enter year: ");
    scanf("%d", &year);
    leap2(year);


    printf("\n--- 3. No Argument + Return ---\n");
    result = leap3();

    if(result == 1)
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");


    printf("\n--- 4. Argument + Return ---\n");
    printf("Enter year: ");
    scanf("%d", &year);

    result = leap4(year);

    if(result == 1)
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");


    return 0;
}
