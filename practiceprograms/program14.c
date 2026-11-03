#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 5, *p;
    p = (int*) calloc(n, sizeof(int));
    if (p == NULL) return 1;
    for (int i = 0; i < n; i++) printf("%d ", p[i]); // 0 0 0 0 0
    free(p);
    return 0;
}
