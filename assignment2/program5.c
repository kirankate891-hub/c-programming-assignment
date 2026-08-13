#include <stdio.h>
void main()
{
    float price, discount, finalPrice;
    char student;

    printf("Enter purchase price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if (student == 'y' || student == 'Y')
    {
        if (price > 500)
            discount = 20;
        else
            discount = 10;
    }
    else
    {
        if (price > 600)
            discount = 15;
        else
            discount = 0;
    }

    finalPrice = price - (price * discount / 100);

    printf("Discount = %.0f%%\n", discount);
    printf("Final Price = %.2f\n", finalPrice);

    return 0;
}
