#include <stdio.h>

void mystrncpy(char dest[], char src[], int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0';
}

int main()
{
    char src[100], dest[100];
    int n;

    printf("Enter a string: ");
    gets(src);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    mystrncpy(dest, src, n);

    printf("Copied string = %s", dest);

    return 0;
}
