#include <stdio.h>

char* mystrstr(char str[], char sub[])
{
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while (sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }

        if (sub[j] == '\0')
        {
            return &str[i];
        }
    }

    return NULL;
}

int main()
{
    char str[100], sub[50];
    char *result;

    printf("Enter main string: ");
    gets(str);

    printf("Enter substring: ");
    gets(sub);

    result = mystrstr(str, sub);

    if (result != NULL)
        printf("Substring found = %s", result);
    else
        printf("Substring not found");

    return 0;
}
