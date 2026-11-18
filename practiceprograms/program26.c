#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], st[1000];
    int top = -1;
    scanf("%999s", s);

    for (int i = 0; s[i]; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') st[++top] = c;
        else {
            if (top < 0) { printf("Not balanced\n"); return 0; }
            char o = st[top--];
            if ((c == ')' && o != '(') || (c == '}' && o != '{') || (c == ']' && o != '[')) {
                printf("Not balanced\n"); return 0;
            }
        }
    }
    printf(top == -1 ? "Balanced\n" : "Not balanced\n");
    return 0;
}
