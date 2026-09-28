#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *token;

    printf("Enter a string: ");
    gets(str);

    token = strtok(str, " ");

    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
