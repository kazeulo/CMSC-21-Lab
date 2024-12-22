#include <stdio.h>

// Function to convert integer to Roman numeral
void convertToRoman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;

    printf("\nRoman numeral form: ");
    while (num > 0) {
        while (num >= values[i]) {
            printf("%s", numerals[i]);
            num -= values[i];
        }
        i++;
    }
    printf("\n");
}

int main(void) {
    int num, select;

    do {
        printf("\nEnter a positive integer: ");
        scanf("%d", &num);

        if (num > 0) {
            convertToRoman(num);  			// Call function to convert and display Roman numeral
        } else {
            printf("\nInvalid input!");  	// Notify user of invalid input
        }

        // Prompt to continue or exit
        printf("\nDo you want to continue using the program?\n1. Yes\n2. Exit\nEnter the number only: ");
        scanf("%d", &select);

    } while (select == 1);

    return 0;
}
