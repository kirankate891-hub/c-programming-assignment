#include <stdio.h>

struct Employee {
int id;
char name[50];
float salary;
};

void store(struct Employee e[], int n) {
for (int i = 0; i < n; i++) {
printf("\nEnter Employee ID: ");
scanf("%d", &e[i].id);

    printf("Enter Name: ");
    scanf("%49s", e[i].name);

    printf("Enter Salary: ");
    scanf("%f", &e[i].salary);
}


}

void display(struct Employee e[], int n) {
for (int i = 0; i < n; i++) {
printf("\nID: %d", e[i].id);
printf("\nName: %s", e[i].name);
printf("\nSalary: %.2f\n", e[i].salary);
}
}

int main(void) {
struct Employee e[3];



store(e, 3);
display(e, 3);

return 0;


}
