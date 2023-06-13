#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main() {
    const char *message = "Hello, world!";
    int length = stringLength(message);

    printf("Length of the string: %d\n", length);

    return 0;
}
