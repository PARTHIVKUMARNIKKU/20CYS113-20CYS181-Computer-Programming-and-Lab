#include<stdio.h>
#define REWARD_PER_KM 10.0;
void main ()
{
/*the br refers to bigning reading and the er refers to the ending reading*/
int br,er;int tm;
printf("enter the bigning reading\n");
scanf("%d",&br);
printf("enter the ending reading\n");
scanf("%d",&er);
tm=(er-br)*REWARD_PER_KM;
printf("your reward is %d", tm);
}
