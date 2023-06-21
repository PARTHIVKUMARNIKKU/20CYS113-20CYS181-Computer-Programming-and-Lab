#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 10

typedef enum 
{
A, 
B, 
C, 
D, 
F
} Score;

typedef struct 
{
    char name[50];
    int age;
    Score score;
}Student;
// including functions
//nos tracks the total number of students in the list
void addStudent(Student students[MAX_STUDENTS], int nos) 
{
    if (nos >= 10) 
    {
        printf("Error: Maximum number of students reached.\n");
        return;
    }

    Student newStudent;
    printf("\nEnter the details of the student:\n");
    printf("Name ");
    scanf("%s", newStudent.name);
    printf("Age ");
    scanf("%d", &newStudent.age);
    printf("Score");
    scanf("%d", &newStudent.score);

    students[nos] = newStudent;
    nos++;
}

void displayStudents(Student students[MAX_STUDENTS], int nos) 
{
    if (nos == 0) 
    {
        printf("no students\n");
        return;
    }

    printf("list of Students");
    
}

void highestscore(Student students[MAX_STUDENTS], int nos) 
{
    if (nos == 0) 
    {
        printf("No students to display.\n");
        return;
    }

    

    
}

void main() 
{
    Student students[MAX_STUDENTS];
    int nos = 0;
    int choice = 0;
    printf("type - 1 to add a student\n");
    printf("type -2 to display all students\n");
    printf("type 3 to find the highest-scoring student\n");
    printf("type 4 to exit the program\n");

    while (choice != 4) 
    {
         printf("enter your choice");
         scanf("%d", &choice);
         switch (choice) 
        {
            case 1:
            addStudent(students, &nos); //nos =. count the number of students in the list
                break;
            case 2:
                displayStudents(students, nos);
                break;
            case 3:
                highestscore(students, nos);
                break;
            case 4:
                printf("exiting....................\n");
                break;
            default:
                printf("invalid cinput\n");
                break;
        }
    }
}
