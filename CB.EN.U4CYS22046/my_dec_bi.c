#include <stdio.h>
void main()
{
int number_in_decimal;
int rimender,loopcounter=0;
printf("enter the number in decimal\n");
scanf("%d",&number_in_decimal);
int temp=number_in_decimal;
while(number_in_decimal != 1)
{
rimender=number_in_decimal%2;
number_in_decimal=number_in_decimal/2;
loopcounter++;
}
int binary[loopcounter];
for(int i=loopcounter-1;i>=0;i--)
{
 binary[i]=temp %2;
 temp=temp/2;
}
for(int j=0; j<loopcounter; j++)
{
printf("%d",binary[j]);
}
}
