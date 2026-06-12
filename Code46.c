#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, digits = 0;
    int result = 0;

    originalNum = num;

    while (originalNum != 0) {
        digits++;
        originalNum /= 10;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    return (result == num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}