#include <stdio.h>

struct Student {
int rollNo;
char name[50];
float marks;
};

struct Student store(struct Student s) {
printf("Enter Roll Number: ");
scanf("%d", &s.rollNo);

printf("Enter Name: ");
scanf("%49s", s.name);

printf("Enter Marks: ");
scanf("%f", &s.marks);

return s;


}

void display(struct Student s) {
printf("\nRoll Number: %d", s.rollNo);
printf("\nName: %s", s.name);
printf("\nMarks: %.2f\n", s.marks);
}

int main(void) {
struct Student s;


s = store(s);
display(s);

return 0;


}
