#include <stdio.h>

/*

    This program prompts the user to enter a positive integer and checks whether it is a prime number or not.
    The program works by iterating through all numbers from 2 to half of the input number and checking whether
    the input number is divisible by any of them. If the input number is divisible by any number other than 1
    and itself, then it is not a prime number.
    If the input number is found to be prime, the program prints a message indicating that the number is prime.
    Otherwise, it prints a message indicating that the number is not prime.
    */

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}