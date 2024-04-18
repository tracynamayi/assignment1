
#include <stdio.h>
#include <string.h>

struct Student {
    char name1[50];
    char name2[50];
    int reg_no;
    char course1[50];
    char course2[50];
    char course3[50];
};

int main() {
    FILE *fp;
    fp = fopen("student_info.c", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    struct Student s = {
        "John", "Doe",
        12345,
        "Mathematics",
        "Physics",
        "Computer Science"
    };

    fprintf(fp, "Student Information:\n");
    fprintf(fp, "Name: %s %s\n", s.name1, s.name2);
    fprintf(fp, "Registration Number: %d\n", s.reg_no);
    fprintf(fp, "Enrolled Courses:\n");
    fprintf(fp, "1. %s\n", s.course1);
    fprintf(fp, "2. %s\n", s.course2);
    fprintf(fp, "3. %s\n", s.course3);
    fprintf(fp, "\n");

    // Edit student information
    fprintf(fp, "Editing student information:\n");
    fprintf(fp, "Enter new first name: John\n");
    strcpy(s.name1, "John");
    fprintf(fp, "Enter new last name: Smith\n");
    strcpy(s.name2, "Smith");
    fprintf(fp, "Enter new registration number: 54321\n");
    s.reg_no = 54321;
    fprintf(fp, "Enter new course 1: Calculus\n");
    strcpy(s.course1, "Calculus");
    fprintf(fp, "Enter new course 2: Chemistry\n");
    strcpy(s.course2, "Chemistry");
    fprintf(fp, "Enter new course 3: Biology\n");
    strcpy(s.course3, "Biology");

    fprintf(fp, "\nUpdated Student Information:\n");
    fprintf(fp, "Name: %s %s\n", s.name1, s.name2);
    fprintf(fp, "Registration Number: %d\n", s.reg_no);
    fprintf(fp, "Enrolled Courses:\n");
    fprintf(fp, "1. %s\n", s.course1);
    fprintf(fp, "2. %s\n", s.course2);
    fprintf(fp, "3. %s\n", s.course3);

    fclose(fp);

    return 0;
}

