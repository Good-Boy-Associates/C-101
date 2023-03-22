#include <stdio.h>

/*
    This program demonstrates the use of an if block in C.
    It prompts the user to enter three numbers and waits for the input.
    It then initializes a variable, max, with the first number and checks if the second and third numbers are greater than max.
    If they are, then the value of max is updated to the greater number.
    Finally, the program uses printf function to display the largest number to the user.

    An if block is a conditional statement in C that checks whether a condition is true or false.
    If the condition is true, the code inside the if block is executed, otherwise it is skipped.

*/

int main() {
    int num1, num2, num3, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = num1;

    if (num2 > max)
    {
        max = num2;
    }

    if (num3 > max)
    {
        max = num3;
    }

    printf("Largest number = %d\n", max);

    return 0;
}
