#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

void store(struct Product *p) {
    printf("Enter Product ID: ");
    scanf("%d", &p->id);

    printf("Enter Product Name: ");
    scanf("%49s", p->name);

    printf("Enter Quantity: ");
    scanf("%d", &p->quantity);

    printf("Enter Price: ");
    scanf("%f", &p->price);
}

void display(struct Product p) {
    printf("\nProduct Details\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Quantity: %d\n", p.quantity);
    printf("Price: %.2f\n", p.price);
    printf("Total Price: %.2f\n", p.quantity * p.price);
}

int main() {
    struct Product p1;

    store(&p1);
    display(p1);

    return 0;
}
