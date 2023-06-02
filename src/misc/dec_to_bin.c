#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;
    
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    
    printf("Binary equivalent: ");
    
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }
    
    printf("\n");
}

int main() {
    int decimal;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    decimalToBinary(decimal);
    
    return 0;
}
