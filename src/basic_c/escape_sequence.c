#include <stdio.h>

/*
    This program demonstrates the use of escape sequences in C to insert special characters into a string. 
    Escape sequences are special characters that are used to represent non-printable or special characters in a string. 
    Escape sequences begin with a backslash \ and are followed by one or more characters that specify the desired special character.
*/

int main() {
    printf("This is a string with a newline:\n");
    printf("This is a string with a tab:\t\t");
    printf("This is a string with a backslash:\\\n");
    printf("This is a string with a bell sound:\a");

    return 0;
}

/*
    This program demonstrates the use of escape sequences in C to insert special characters into a string. 
    Escape sequences are special characters that are used to represent non-printable or special characters in a string. 
    Escape sequences begin with a backslash \ and are followed by one or more characters that specify the desired special character.

    In the main() function, we use four different escape sequences:

    \n - inserts a newline character, which moves the cursor to the beginning of the next line
    \t - inserts a horizontal tab character, which moves the cursor to the next tab stop
    \\ - inserts a single backslash character
    \a - inserts a bell sound character, which may cause the computer to emit a beep sound
*/