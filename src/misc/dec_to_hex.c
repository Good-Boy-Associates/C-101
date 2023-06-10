#include <stdio.h>
#include <string.h>

// Function to convert binary to hexadecimal
void binaryToHexadecimal(const char* binary) {
    int decimal = 0;
    int base = 1;
    int binaryLength = strlen(binary);
    
    // Convert binary to decimal
    for (int i = binaryLength - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    
    // Convert decimal to hexadecimal
    char hexadecimal[16];
    int index = 0;
    
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[index] = remainder + '0';
        } else {
            hexadecimal[index] = remainder + 'A' - 10;
        }
        decimal /= 16;
        index++;
    }
    
    // Print the hexadecimal value in reverse order
    printf("Hexadecimal: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
}

int main() {
    char binary[32];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    binaryToHexadecimal(binary);
    
    return 0;
}
