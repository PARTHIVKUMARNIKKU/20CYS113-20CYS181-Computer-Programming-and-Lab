#include <stdio.h>
//defining  a enum
enum score{
A,B,C,D,F
};
//defining a structure
struct Student
{
char name [1][40];
int age;
enum score garde;
}s;

//start of the main function


void addStudent(char sname1[40]){
struct student s1;
s1.name= gets(sname1);

}
void displystudents()


void main()
{
int option;
char sname[40];

printf("please select the option\n");
scanf("%d",&option);

//start of the if else statements... for selecting the options
if (option >0 && option < 5){
switch(option)
{
case 1:
printf("so the option you have selected is to add a student\n");
addStudent(char sname[40]);
break;

case 2:
printf("so the option you have selected is to Disply all the students\n");
break;

case 3:
printf("so the option you have selected is to find the highest scoring students\n");
break;

case 4:
printf("thankyou!!!!!!!");
break;
}
}
else
{
printf("please check your input");
}
