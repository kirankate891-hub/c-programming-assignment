#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    // Count characters in first string
    for (i = 0; str1[i] != '\0'; i++)
    {
        freq[(unsigned char)str1[i]]++;
    }

    // Decrease character counts using second string
    for (i = 0; str2[i] != '\0'; i++)
    {
        freq[(unsigned char)str2[i]]--;
    }

    // Check character frequencies
    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Both strings are Anagrams.");
    }
    else
    {
        printf("Strings are not Anagrams.");
    }

    return 0;
}
