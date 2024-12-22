#include <stdio.h>

// Function for iterative Fibonacci
void iterativeFibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b; 	// Compute the next term
        a = b;        	// Update previous term
        b = next;     	// Update current term
    }
    printf("\n");
}

// Main function
int main() {
    int num, continueProgram = 1;

    while (continueProgram) {
        printf("Enter the number of terms (positive integer): ");
        if (scanf("%d", &num) != 1 || num <= 0) {
            printf("Invalid input. Please enter a positive integer.\n");
            while (getchar() != '\n'); 	// Clear invalid input
            continue;
        }

        printf("\n");
        iterativeFibonacci(num); 		// Call the iterative Fibonacci function

        // Ask if the user wants to continue
        printf("\nDo you want to continue using the program?");
        printf("\n\t(1) Yes");
        printf("\n\t(2) No");
        printf("\nYour choice: ");
        scanf("%d", &continueProgram);

        printf("\n");
    }

    return 0;
}
