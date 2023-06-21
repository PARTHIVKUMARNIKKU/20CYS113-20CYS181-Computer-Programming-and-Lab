#include <stdio.h>

int main()
{
    int number_in_decimal;
    int remainder, loopcounter = 0;
    
    printf("Enter the number in decimal: ");
    scanf("%d", &number_in_decimal);
    
    int temp = number_in_decimal;
    
    while (number_in_decimal != 0)
    {
        remainder = number_in_decimal % 2;
        number_in_decimal = number_in_decimal / 2;
        loopcounter++;
    }
    
    int binary[loopcounter];
    for (int i = loopcounter - 1; i >= 0; i--)
    {
        binary[i] = temp % 2;
        temp = temp / 2;
    }
    
    printf("The number in binary: ");
    for (int j = 0; j < loopcounter; j++)
    {
        printf("%d", binary[j]);
    }
    
    return 0;
}
