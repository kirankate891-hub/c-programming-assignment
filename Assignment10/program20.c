#include <stdio.h>
#include <string.h>

int main()
{
    int error;

    printf("Enter error number: ");
    scanf("%d", &error);

    printf("Error message = %s", strerror(error));

    return 0;
}
