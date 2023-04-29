/**
    This program demonstrates the use of the % sign in printf function for formatting the output of values in C.
    It shows how to use various % functions for different data types.
    */

#include <stdio.h>

int main() {
    int x = 10;
    char ch = 'A';
    float f = 3.14;
    double d = 2.71828;
    char str[] = "Hello, World!";
    void *ptr = &x;

    printf("Integer value x: %d\n", x);
    printf("Character value ch: %c\n", ch);
    printf("Floating-point value f: %f\n", f);
    printf("Scientific notation of double value d: %e\n", d);
    printf("String value str: %s\n", str);
    printf("Memory address of integer value x: %p\n", ptr);
    printf("Literal percentage sign: %%\n");

    return 0;
}

/**
    The % sign in printf is a special symbol used for formatting the output of values in C.
    It is used with a letter following it, which indicates the data type of the value being printed.
    For example, %d is used to print integer values, %f is used to print floating-point values, and %s is used to print string values.

    Here are some other commonly used % functions:

    %c: used to print single characters.
    %f: used to print floating-point values with decimal points.
    %e or %E: used to print floating-point values in scientific notation.
    %p: used to print memory addresses.
    %%: used to print a literal % symbol.

    It's important to use the correct % function for the corresponding data type to avoid errors and unexpected results in the output.
    */