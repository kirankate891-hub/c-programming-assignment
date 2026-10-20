#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

void store(struct Complex *c) {
    printf("Enter Real Part: ");
    scanf("%f", &c->real);

    printf("Enter Imaginary Part: ");
    scanf("%f", &c->imaginary);
}

void display(struct Complex c) {
    printf("\nComplex Number: %.2f + %.2fi\n",
           c.real, c.imaginary);
}

int main() {
    struct Complex c1;

    store(&c1);
    display(c1);

    return 0;
}
