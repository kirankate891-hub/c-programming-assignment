#include <stdio.h>

int main() {
    int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int top = 0, bot = 2, left = 0, right = 3;

    while (top <= bot && left <= right) {
        for (int j = left; j <= right; j++) printf("%d ", a[top][j]);
        top++;
        for (int i = top; i <= bot; i++) printf("%d ", a[i][right]);
        right--;
        if (top <= bot) { for (int j = right; j >= left; j--) printf("%d ", a[bot][j]); bot--; }
        if (left <= right) { for (int i = bot; i >= top; i--) printf("%d ", a[i][left]); left++; }
    }
    return 0;
}
