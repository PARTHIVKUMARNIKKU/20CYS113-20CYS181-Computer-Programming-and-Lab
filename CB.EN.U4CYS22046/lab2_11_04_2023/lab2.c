#include <stdio.h>
/*this programe is to calculate the total and average*/
void main()
{
printf("enter the total marks \n");
/*here, the nos is number of studentsg*/
double total;
int nos;
int average;
/*total= 124;
nos= 5;*/
scanf("%lf", &total);
printf("enter the number of students \n");
scanf("%d", &nos);
average=(total/nos);
printf("the average marks is \n %d",average);
}
