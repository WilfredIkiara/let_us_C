#include <stdio.h>
#include <string.h>

// Function to convert decimal to Roman numeral
void toRoman(int num) {
    int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    char roman_num[20] = "";
    int i = 0;

    while (num > 0) {
        while (num >= decimal[i]) {
            strcat(roman_num, roman[i]);
            num -= decimal[i];
        }
        i++;
    }

    printf("Roman numeral: %s\n", roman_num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number greater than zero.\n");
    } else {
        printf("Decimal number: %d\n", num);
        toRoman(num);
    }

    return 0;
}
