#include <stdio.h>
#include <string.h>

int isPalindrome(const char* str) {
    int length = 0;
    
    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }
    
    int i, j;
    
    for (i = 0, j = length - 1; i < j; ++i, --j) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    
    if (isPalindrome(str)) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    
    return 0;
}
