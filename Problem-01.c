#include <stdio.h>

void decimalToBinary(int decimalNum) {
    int binaryNum[32];
    int index = 0;
    while (decimalNum > 0) {
        binaryNum[index] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        index++;
    }

    printf("Binary equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binaryNum[i]);
    }
}

int main() {
    int decimalNum;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    decimalToBinary(decimalNum);

    return 0;
}
