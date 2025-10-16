// PS - program to divide two numbers

#include<stdio.h>

float divideTwoNumbers() {
    int num1, num2;
    float result;

    printf("Enter the dividentd (integer): ");
    scanf("%d", &num1);
    printf("Enter the divisor (integer): ");
    scanf("%d", &num2);

    if (num2<0) {
        printf("Error: Division by zero is not allowed.\n");
        return -1;
    }

    result = (float)num1 / num2;
    return result;
}

int main() {
    float result = divideTwoNumbers();
    if(result != -1) {
        printf("Result = %.2f \n", result);
    }

    return 0;
}