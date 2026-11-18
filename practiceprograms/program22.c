#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

struct Node* push(struct Node *head, int v) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = v; n->next = head;
    return n;
}

struct Node* reverse(struct Node *head) {
    struct Node *prev = NULL, *cur = head, *next;
    while (cur) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

int main() {
    struct Node *head = NULL;
    for (int i = 1; i <= 5; i++) head = push(head, i);
    head = reverse(head);
    for (struct Node *p = head; p; p = p->next) printf("%d ", p->data);
    return 0;
}
