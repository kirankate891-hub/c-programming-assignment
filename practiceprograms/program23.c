#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%999s", s);
    int len = strlen(s), start = 0, best = 1;

    for (int c = 0; c < len; c++) {
        for (int t = 0; t < 2; t++) {          // t=0 odd, t=1 even
            int l = c, r = c + t;
            while (l >= 0 && r < len && s[l] == s[r]) { l--; r++; }
            if (r - l - 1 > best) { best = r - l - 1; start = l + 1; }
        }
    }
    printf("%.*s\n", best, s + start);
    return 0;
}
