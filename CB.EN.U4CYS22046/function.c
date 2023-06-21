#include <stdio.h>

// Function declaration
//int addNumbers(int a, int b);
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Function call
    int result = addNumbers(num1, num2);
    
    printf("The sum is: %d\n", result);
    
    return 0;
}

// Function definition

