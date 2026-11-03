#include <stdio.h>

int main() {
    char a[100], b[50];
    int i = 0, j = 0;
    scanf("%s %s", a, b);
    while (a[i] != '\0') i++;
    while (b[j] != '\0') a[i++] = b[j++];
    a[i] = '\0';
    printf("Result: %s", a);
    return 0;
}
