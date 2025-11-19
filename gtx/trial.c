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

    // Assign and print name
    strcpy(student.name, "Jagdish");
    printf("Name: %s\n", student.name);

    // Assign and print roll number
    student.rollNo = 25;
    printf("Roll Number: %d\n", student.rollNo);

    // Assign and print marks
    student.marks = 88.5f;
    printf("Marks: %.2f\n", student.marks);
    getch();
    return 0;
}