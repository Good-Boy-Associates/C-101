#include <stdio.h>

/*

    This program prompts the user to enter an integer and checks whether it is even or odd.
    The program works by reading in the input integer using scanf() and then checking whether
    it is divisible by 2 using the modulo operator (%). If the input number is divisible by 2,
    then it is even; otherwise, it is odd.
    If the input number is found to be even, the program prints a message indicating that the
    number is even. Otherwise, it prints a message indicating that the number is odd.
    */

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if(num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    
    return 0;
}
