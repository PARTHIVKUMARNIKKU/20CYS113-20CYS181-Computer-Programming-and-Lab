#include <stdio.h>
void main()
{
printf("enter the number of rows ");
int rows;
scanf("%d", &rows);
for (int i=0; i<=rows; i++)
{
   for(int j=0; j<i; j++)
   {
   //for(int k=1;k<rows;k++)
   printf("%d",i);
   }
printf("\n");
}
}
