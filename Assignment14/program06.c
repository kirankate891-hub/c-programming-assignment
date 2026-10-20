#include <stdio.h>

struct Date {
    int date;
    int month;
    int year;
};

void store(struct Date *d) {
    printf("Enter Date: ");
    scanf("%d", &d->date);

    printf("Enter Month: ");
    scanf("%d", &d->month);

    printf("Enter Year: ");
    scanf("%d", &d->year);
}

void display(struct Date d) {
    printf("\nDate: %02d/%02d/%04d\n",
           d.date, d.month, d.year);
}

int main() {
    struct Date d1;

    store(&d1);
    display(d1);

    return 0;
}
