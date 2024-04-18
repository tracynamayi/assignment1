// To write student details in a file 
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
// opening a file
int main() {
    FILE *fp;
    fp = fopen("student_info.c", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }


    struct Student student1;
    struct Student student2;
    
    // student 1 information 
    strcpy(student1.name1, "Jim");
    strcpy(student1.name2, "Smith");
    student1.reg_no = 17456;
    strcpy(student1.course1, "Biology");
    strcpy(student1.course2, "Art History");
    strcpy(student1.course3, "Electrical Engineering");
    
    // student 2 information 
     strcpy(student2.name1, "Micheal");
    strcpy(student1.name2, "Simpson");
    student1.reg_no = 17463;
    strcpy(student1.course1, "Chemistry");
    strcpy(student1.course2, "Information Technology");
    strcpy(student1.course3, "Biomedical Engineering");

    fprintf(fp, "Student Information:\n");
    fprintf(fp, "Name: %s %s\n", student2.name1, student2.name2);
    fprintf(fp, "Registration Number: %d\n", student2.reg_no);
    fprintf(fp, "Enrolled Courses:\n");
    fprintf(fp, "1. %s\n", student2.course1);
    fprintf(fp, "2. %s\n", student2.course2);
    fprintf(fp, "3. %s\n", student2.course3);
    fprintf(fp, "\n");

    // Edit student information
    
    fprintf(fp, "Editing student information:\n");
    fprintf(fp, "Enter new first name: John\n");
    strcpy(student1.name1, "John");
    fprintf(fp, "Enter new last name: Smith\n");
    strcpy(student1.name2, "Smith");
    fprintf(fp, "Enter new registration number: 54321\n");
    student1.reg_no = 54321;
    fprintf(fp, "Enter new course 1: Calculus\n");
    strcpy(student1.course1, "Calculus");
    fprintf(fp, "Enter new course 2: Chemistry\n");
    strcpy(student1.course2, "Chemistry");
    fprintf(fp, "Enter new course 3: Biology\n");
    strcpy(student1.course3, "Biology");

    fprintf(fp, "\nUpdated Student Information:\n");
    fprintf(fp, "Name: %s %s\n", student1.name1, student1.name2);
    fprintf(fp, "Registration Number: %d\n", student1.reg_no);
    fprintf(fp, "Enrolled Courses:\n");
    fprintf(fp, "1. %s\n", student1.course1);
    fprintf(fp, "2. %s\n", student1.course2);
    fprintf(fp, "3. %s\n", student1.course3);

    fclose(fp);

    return 0;
}
