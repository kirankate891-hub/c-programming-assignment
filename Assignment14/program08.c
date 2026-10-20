#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

void store(struct Distance *d) {
    printf("Enter Feet: ");
    scanf("%d", &d->feet);

    printf("Enter Inches: ");
    scanf("%f", &d->inch);
}

void display(struct Distance d) {
    printf("\nDistance Details\n");
    printf("Feet: %d\n", d.feet);
    printf("Inches: %.2f\n", d.inch);
}

int main() {
    struct Distance d1;

    store(&d1);
    display(d1);

    return 0;
}
