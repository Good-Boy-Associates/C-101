#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter value for num1: ");
    scanf("%d", &num1);

    printf("Enter value for num2: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
