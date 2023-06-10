
#include <stdio.h>
  
int main() {
  
    int decimal_Number;
    printf("Enter a number: ");
    scanf("%d", &decimal_Number);
    int i = 1, j, temp;
    char hexa_Number[100];

    while (decimal_Number != 0) {
        temp = decimal_Number % 16;

        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa_Number[i++] = temp;
        decimal_Number = decimal_Number / 16;
    }
    // printing the hexa decimal number
    printf("Hexadecimal value is: ");
    for (j = i - 1; j > 0; j--) {
        printf("%c", hexa_Number[j]);
    }
    printf("\n");
    return 0;
}