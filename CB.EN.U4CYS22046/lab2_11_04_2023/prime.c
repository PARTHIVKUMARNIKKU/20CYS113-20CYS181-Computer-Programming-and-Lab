/* this program is to find whether the given number is prime or not a prime number*/
#include <stdio.h>

int main() 
    {
    int n, i;

    printf("Enter an integer ");
    scanf("%d", &n);

    if(n == 1) 
    {
        printf("1 is not a prime number.");
    }
    else 
    {
        // Check if n is divisible by any number other than 1 and itself
        for(i = 2; i <= n/2; i++) 
    {
            if(n%i == 0) 
    {
                printf("%d is not a prime number.", n);
                return 0;
    }
    }

        printf("%d is a prime number.", n);
    }

    return 0;
    }

