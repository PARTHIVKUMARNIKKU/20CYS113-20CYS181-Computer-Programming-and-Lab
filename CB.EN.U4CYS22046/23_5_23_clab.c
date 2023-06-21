struct student {
   int rollno;
   char name[20];
   char fathername[30];
   char mothername[30];
   double sgpa, avg;
   int total;
   long emergencycontact;
   };
#include <stdio.h>
void main()
{
struct student s1;
s1.rollno=1;
printf("rollno"
