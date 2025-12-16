#include <stdio.h>
#include <conio.h>
#include <string.h>
union Student {
    char name[50];
    int rollNo;
    float marks;
};
int main() {
    union Student student;
    strcpy(student.name, "Jagdish");
    printf("Name: %s\n", student.name);
    student.rollNo = 25;
    printf("Roll Number: %d\n", student.rollNo);
    student.marks = 88.50;
    printf("Marks: %.2f\n", student.marks);
    getch();
    return 0;
}