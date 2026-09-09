#include <stdio.h>

// 1. No Argument and No Return Type
void message()
{
    printf("Student Discount Program\n");
}

// 2. Argument and No Return Type
void checkprice(float price)
{
    if(price <= 0)
        printf("Invalid price\n");
}

// 3. No Argument and Return Type
float getprice()
{
    float price;

    printf("Enter price: ");
    scanf("%f", &price);

    return price;
}

// 4. Argument and Return Type
float calculateDiscount(float price, char student)
{
    float discount = 0;

    if(student == 'y' || student == 'Y')
    {
        if(price > 500)
            discount = 20;
        else
            discount = 10;
    }
    else
    {
        if(price > 600)
            discount = 15;
        else
            discount = 0;
    }

    return discount;
}

int main()
{
    float price, discount, finalprice;
    char student;

    // Type 1
    message();

    // Type 3
    price = getprice();

    // Type 2
    checkprice(price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    // Type 4
    discount = calculateDiscount(price, student);

    if(price > 0)
    {
        finalprice = price - (price * discount / 100);

        printf("Discount = %.2f%%\n", discount);
        printf("Final price = %.2f\n", finalprice);
    }

    return 0;
}
