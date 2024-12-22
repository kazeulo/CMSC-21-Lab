#include <stdio.h>
#include <stdbool.h>

// Function to validate input as a positive integer
bool isValidInput(float num) {
    return (num > 0 && (int)num == num);
}

// Function to convert an integer to Roman numerals
void convertToRoman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    for (int i = 0; i < 13 && num > 0; i++) {
        while (num >= values[i]) {
            printf("%s", numerals[i]);
            num -= values[i];
        }
    }
}

// Main function
int main(void) {
    int x, y, result;
    int select, repeat = 1;

    while (repeat == 1) {
        printf("Choose an operation you want to perform:");
        printf("\n\t(1) Addition");
        printf("\n\t(2) Subtraction");
        printf("\n\t(3) Multiplication");
        printf("\n\t(4) Division");
        printf("\nYour choice: ");
        scanf("%d", &select);

        printf("\nEnter two positive integers.");
        printf("\nFirst number: ");
        float tempX, tempY;
        scanf("%f", &tempX);
        printf("Second number: ");
        scanf("%f", &tempY);

        if (isValidInput(tempX) && isValidInput(tempY)) {
            x = (int)tempX;
            y = (int)tempY;

            printf("\nFirst number in Roman numerals: ");
            convertToRoman(x);
            printf("\nSecond number in Roman numerals: ");
            convertToRoman(y);

            switch (select) {
                case 1:  // Addition
                    result = x + y;
                    printf("\nSum: ");
                    break;
                case 2:  // Subtraction
                    result = x - y;
                    printf("\nDifference: ");
                    break;
                case 3:  // Multiplication
                    result = x * y;
                    printf("\nProduct: ");
                    break;
                case 4:  // Division
                    if (y != 0) {
                        printf("\nQuotient: %.2f", (float)x / y);
                        continue;  // Skip Roman numeral conversion for floating-point results
                    } else {
                        printf("\nError: Division by zero!");
                        continue;
                    }
                default:
                    printf("\nInvalid choice!");
                    continue;
            }

            convertToRoman(result);
        } else {
            printf("\nInvalid input! Please enter positive integers only.");
        }

        printf("\n\nDo you want to continue using the program?");
        printf("\n\t(1) Yes");
        printf("\n\t(2) No");
        printf("\nYour choice: ");
        scanf("%d", &repeat);

        printf("\n");
    }

    return 0;
}