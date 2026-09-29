#include <stdio.h>

char mytolower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;

    return ch;
}

int mystrcasecmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' || str2[i] != '\0')
    {
        char ch1 = mytolower(str1[i]);
        char ch2 = mytolower(str2[i]);

        if (ch1 != ch2)
            return ch1 - ch2;

        i++;
    }

    return 0;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if (mystrcasecmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
