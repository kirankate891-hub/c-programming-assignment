#include <stdio.h>

int main() {
    char a[50], b[50];
    int i = 0;
    scanf("%s %s", a, b);
    while (a[i] != '\0' && a[i] == b[i]) i++;
    if (a[i] == b[i]) printf("Equal");
    else printf("Not Equal");
    return 0;
}
