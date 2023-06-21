#include <stdio.h>

void decimalToBinary(int decimalNumber) {
    int binaryNumber[32];  // Array to store the binary digits
    int i = 0;

    while (decimalNumber > 0) {
        binaryNumber[i] = decimalNumber % 2;
        decimalNumber /= 2;
        i++;
    }

    printf("Binary representation: ");
    if (i == 0) {
        printf("0");  // Special case when the input is 0
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binaryNumber[j]);
        }
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);

    return 0;
}
