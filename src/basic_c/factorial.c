#include <stdio.h>

/*
    This program calculates the factorial of a number using a for loop.
    It prompts the user to enter a number and stores it in the variable num using scanf.
    It initializes a variable fact to 1 and uses a for loop to calculate the factorial.
    The loop runs from i=1 to i=num and multiplies the value of fact by i in each iteration.
    Finally, it prints the calculated factorial using printf.

    NOTE: A factorial can become very large for large values of n. 
          If the calculated factorial is too high, it may not fit in the data type used to store it, resulting in overflow. 
          In such cases, the calculated value may not be accurate or even cause the program to crash.
*/

int main() {
    int num, fact = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %d \n", num, fact);

    return 0;
}
