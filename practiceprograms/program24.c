#include <stdio.h>
#include <stdlib.h>

typedef struct { int *arr; int top, cap; } Stack;

void push(Stack *s, int v) {
    if (s->top == s->cap) {
        s->cap *= 2;
        s->arr = realloc(s->arr, s->cap * sizeof(int));
    }
    s->arr[s->top++] = v;
}

int pop(Stack *s) { return s->arr[--s->top]; }

int main() {
    Stack s = { malloc(2 * sizeof(int)), 0, 2 };
    for (int i = 1; i <= 10; i++) push(&s, i * 10);
    while (s.top > 0) printf("%d ", pop(&s));
    free(s.arr);
    return 0;
}
