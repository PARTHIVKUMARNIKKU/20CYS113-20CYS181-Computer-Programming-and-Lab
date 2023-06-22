#include <stdio.h>

typedef struct 
{
double real;
double img;
}CN;
//CN is complex number
int main()
{
CN var1, var2, res;
printf("Enter the real and img parts of number 1:\n");
scanf("%f %f", &var1.real, &var1.img);
printf("Enter the real and img parts of number 2:\n");
scanf("%f %f", &var2.real, &var2.img)
res.real = (var1.real * var2.real) - (var1.img * var2.img);
res.img = (var1.real * var2.img) + (var1.img * var2.real);

if (res.img > 0) 
{
printf("%f+%fi", res.real, res.img);
} else if (res.img == 0) 
{
printf("%f", res.real);
} 
else 
{
    printf("%f-%fi", res.real, -res.img);
}

 return 0;
}
