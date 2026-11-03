#include <stdio.h>
struct Student {
    int id;
    char name[20];
    float marks;
};
int main() {
    struct Student s = {1, "Kiran", 85.5};
    printf("%d %s %.1f", s.id, s.name, s.marks);
    return 0;
}
