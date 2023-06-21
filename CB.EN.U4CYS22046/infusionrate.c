#include<stdio.h>
void main()
{
int volume,time;
double time_in_hour,infusionrate;
printf("please enter thr volume in ml\n");
scanf("%d", &volume);
printf("please enter the time in minutes\n");
scanf("%d", &time);
time_in_hour=(time)/60;
infusionrate=volume/time_in_hour;
printf("the infusion rate is %f", infusionrate);
}
