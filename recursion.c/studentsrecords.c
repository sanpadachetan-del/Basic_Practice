#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void addStudent() {
    FILE *fp = fopen("students.dat", "ab");
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
    printf("Student record added successfully.\n");
}

void viewStudents() {
    FILE *fp = fopen("students.dat", "rb");
    struct Student s;

    printf("\n--- Student Records ---\n");
    while(fread(&s, sizeof(s), 1, fp)) {
        printf("Roll No: %d\nName: %s\nMarks: %.2f\n\n", s.rollNo, s.name, s.marks);
    }
    fclose(fp);
}

void searchStudent() {
    FILE *fp = fopen("students.dat", "rb");
    struct Student s;
    int roll, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    while(fread(&s, sizeof(s), 1, fp)) {
        if(s.rollNo == roll) {
            printf("Record Found:\nRoll No: %d\nName: %s\nMarks: %.2f\n", s.rollNo, s.name, s.marks);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Record not found.\n");
    fclose(fp);
}

void deleteStudent() {
    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct Student s;
    int roll, found = 0;

    printf("Enter Roll Number to delete: ");
    scanf("%d", &roll);

    while(fread(&s, sizeof(s), 1, fp)) {
        if(s.rollNo != roll) {
            fwrite(&s, sizeof(s), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);
    remove("students.dat");
    rename("temp.dat", "students.dat");

    if(found)
        printf("Record deleted successfully.\n");
    else
        printf("Record not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Student Record Management ---\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: printf("Exiting program.\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while(choice != 5);

    return 0;
}  
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// struct student{
//  char name[20];
//  int rollno;
//  float marks;
// }
// void addstudent(){
//     FILE *fp = fopen("student.dat","ab");
//     struct student s;
//     printf("enter roll no");
//     scanf("%d",&s.rollno);
//     printf("enter namer");
//     scanf("%\n",s.name);
//     printf("entr marks");
//     scanf("%f",s.marks);
//     fwrite(&s,sizeof(s),1,fp);
//     fclose(fp);
//     printf("record added suceccfully");

// }
// int main(){
//     int choice;
//         do {
//             printf("\n student record management");
//             printf("\n no.1 add students ");
//             printf("\n no.2 view all student");
//             printf("\n no.3 searchstudent ");
//             printf("\n n0.4 delete student");
//             printf("\n no.5 exite student program");
//             printf("\n enter the choice");
//             scanf("%d",choice);

//             switch(choice){
//                 case 1: addstudents();break;
//                 case 2: viewallstudent();break;
//                 case 3: searchstudent();break;
//                 case 4: deletestudent();break;
//                 case 5: printf("exiting program\n");break;
//                 default: printf ("record not found");
//             }
//         } while(choice!=5);

//     return 0;
// }
