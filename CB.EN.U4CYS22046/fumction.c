
#include <stdio.h>
int sum(int a, int b)
{
printf("entrer the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
//a+b;
return a+b;
}



int main()
{
int add = sum(a,b);

printf("Sum is: %d", add);
return 0;
}
