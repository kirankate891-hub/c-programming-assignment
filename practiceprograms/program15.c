#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p = (int*) malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++) p[i] = i + 1;

    p = (int*) realloc(p, 5 * sizeof(int));  // size 3 se 5
    p[3] = 4;
    p[4] = 5;

    for (int i = 0; i < 5; i++) printf("%d ", p[i]);
    free(p);
    return 0;
}
