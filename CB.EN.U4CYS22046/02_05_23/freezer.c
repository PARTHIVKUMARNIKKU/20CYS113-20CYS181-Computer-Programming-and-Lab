#include<stdio.h>
int main ()
{
int t;
double T;
printf("please enter the elapsed time since tthe power cut in hours \n");
scanf("%d", &t);
T=((4*t*t)/(t+2))-20;
printf("the inside temperature is %f",T);
return 0;
}
