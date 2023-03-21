#include <stdio.h>

/*

    This program demonstrates the use of variables and arithmetic operators in C.
    It initializes two integer variables, x and y, with the values 23 and 12, respectively.
    It then prints the values of x and y to the console using the printf function.
    The printf function formats the output using format specifiers, which are represented
    by the % sign followed by a letter indicating the data type of the variable being printed.
    Finally, the program calculates and prints the difference of x and y using the - operator.
    */

int main(){
    int x = 23;
    int y = 12;
    printf("x = %d, y = %d\n", x, y);
    printf("x - y = %d \n", x - y);
}