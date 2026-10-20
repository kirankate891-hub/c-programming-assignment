#include <stdio.h>

struct Time {
    int hour;
    int min;
    int sec;
};

void store(struct Time *t) {
    printf("Enter Hour: ");
    scanf("%d", &t->hour);

    printf("Enter Minute: ");
    scanf("%d", &t->min);

    printf("Enter Second: ");
    scanf("%d", &t->sec);
}

void display(struct Time t) {
    printf("\nTime: %02d:%02d:%02d\n",
           t.hour, t.min, t.sec);
}

int main() {
    struct Time t1;

    store(&t1);
    display(t1);

    return 0;
}
