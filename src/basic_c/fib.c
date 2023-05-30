#include <stdio.h>

int main() {
    int terms, firstTerm = 0, secondTerm = 1, nextTerm;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");

    // Generate and print the Fibonacci series
    for (int i = 1; i <= terms; i++) {
        printf("%d ", firstTerm);

        // Calculate the next term by adding the previous two terms
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    printf("\n");
    return 0;
}
