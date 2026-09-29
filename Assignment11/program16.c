#include <stdio.h>

char lower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;

    return ch;
}

int mystrncasecmp(char str1[], char str2[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        char ch1 = lower(str1[i]);
        char ch2 = lower(str2[i]);

        if (ch1 != ch2)
            return ch1 - ch2;

        if (str1[i] == '\0' || str2[i] == '\0')
            break;
    }

    return 0;
}

int main()
{
    char str1[100], str2[100];
    int n;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    if (mystrncasecmp(str1, str2, n) == 0)
        printf("First %d characters are equal", n);
    else
        printf("First %d characters are not equal", n);

    return 0;
}
