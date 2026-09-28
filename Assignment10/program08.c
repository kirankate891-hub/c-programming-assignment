#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    char *result;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to search: ");
    scanf("%c", &ch);

    result = strchr(str, ch);

    if (result != NULL)
    {
        printf("Character found at position = %d", (int)(result - str + 1));
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}
