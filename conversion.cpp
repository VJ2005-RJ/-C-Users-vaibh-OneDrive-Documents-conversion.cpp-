#include <stdio.h>

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        (num & (1 << i)) ? printf("1") : printf("0");
    }

    printf("\nHexadecimal: 0x%X\n", num);
    printf("Octal: 0%o\n", num);

    return 0;
}

