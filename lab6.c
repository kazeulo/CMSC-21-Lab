#include <stdio.h>

// Function for sorting using selection sort
void selection_sort(int number[25], int n) {
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++) {  // We can reduce the outer loop by 1 to avoid unnecessary comparisons
        for (j = i + 1; j < n; j++) {
            if (number[i] > number[j]) {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }
}

// Function to print the array
void print_array(int number[25], int n) {
    printf("Sorted elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");
}

// Function for linear search
int linear_search(int number[25], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (number[i] == x) {
            return i;  	// Return index of the found element
        }
    }
    return -1;  		// Return -1 if element is not found
}

// Main function
int main() {
    int count, search, position, select, select2;
    int number[25];  // Array to store user inputs

    while (1) {  // Infinite loop to continue the program until the user chooses to exit
        // Ask the user whether to perform searching or sorting
        printf("Choose an action you wish to perform.\n\t(1) Search\n\t(2) Sort\nYou choose: ");
        scanf("%d", &select);

        // Validate input for selecting action
        if (select != 1 && select != 2) {
            printf("Invalid selection, please try again.\n");
            continue;  // Skip the rest of the loop if invalid selection
        }

        printf("\nHow many numbers are you going to enter? ");
        scanf("%d", &count);

        // Input validation for the number of elements
        if (count <= 0 || count > 25) {
            printf("Invalid number of elements. Please enter a positive number (up to 25).\n");
            continue;  // Skip the rest of the loop if invalid count
        }

        printf("Enter %d numbers: ", count);
        for (int i = 0; i < count; i++) {
            scanf("%d", &number[i]);
        }

        if (select == 1) {  // Perform linear search
            printf("\nEnter a number to search: ");
            scanf("%d", &search);

            position = linear_search(number, count, search);

            if (position == -1) {
                printf("%d is not present in the array.\n", search);
            } else {
                printf("%d is present at location %d.\n", search, position + 1);
            }
        } else if (select == 2) {  // Perform sorting
            selection_sort(number, count);
            print_array(number, count);
        }

        // Ask user if they want to continue using the program
        printf("\nDo you want to continue using the program?\n\t(1) Yes\n\t(2) No\nYou choose: ");
        scanf("%d", &select2);

        if (select2 == 2) {
            break;  // Exit the loop and the program
        }
    }

    return 0;
}
