#include <stdio.h>

int n, count = 0;
int col[20], d1[40], d2[40];

void solve(int r) {
    if (r == n) { count++; return; }
    for (int c = 0; c < n; c++) {
        if (col[c] || d1[r + c] || d2[r - c + n - 1]) continue;
        col[c] = d1[r + c] = d2[r - c + n - 1] = 1;
        solve(r + 1);
        col[c] = d1[r + c] = d2[r - c + n - 1] = 0;
    }
}

int main() {
    scanf("%d", &n);
    solve(0);
    printf("Solutions: %d\n", count);
    return 0;
}
