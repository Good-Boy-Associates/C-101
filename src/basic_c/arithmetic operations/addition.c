#include <stdio.h>

/*

    This program demonstrates the use of variables and arithmetic operators in C.
    It initializes two integer variables, x and y, with the values 5 and 4, respectively.
    It then prints the values of x and y to the console using the printf function.
    The printf function formats the output using format specifiers, which are represented
    by the % sign followed by a letter indicating the data type of the variable being printed.
    Finally, the program calculates and prints the sum of x and y using the + operator.
    */

int main(){
    int x = 5;
    int y = 4;
    printf("x = %d, y = %d\n", x, y);
    printf("x + y = %d \n", x + y);
    return 0;
}