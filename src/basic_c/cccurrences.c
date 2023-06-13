#include <stdio.h>

int countOccurrences(const char* str, char ch) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    const char* message = "Hello, world!";
    char searchChar = 'o';
    
    int occurrences = countOccurrences(message, searchChar);
    
    printf("Number of occurrences of '%c' in the string: %d\n", searchChar, occurrences);
    
    return 0;
}
