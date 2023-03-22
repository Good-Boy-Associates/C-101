#include <stdio.h>

/*

    This program demonstrates the use of input and output functions in C.
    It declares a character array, name, with a size of 50.
    It then prompts the user to enter their name using printf function and waits for the user to input their name using scanf function.
    The input is stored in the name array.
    Finally, the program uses printf function to greet the user with their name.
    */

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s! Welcome to C programming. \n", name);
    return 0;
}
