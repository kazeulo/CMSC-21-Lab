#include <stdio.h>

int main(void) {
    int select, select_2;
    float area, perimeter, radius, length, width;

    // Prompt the user to choose a shape
    printf("Choose a shape.\n1) Circle\n2) Rectangle\nEnter the number only: ");
    scanf("%d", &select);

    switch (select) {
        case 1:  // Circle
            printf("\nWhat do you want to compute?\n1) Area\n2) Perimeter\nEnter the number only: ");
            scanf("%d", &select_2);

            if (select_2 == 1) {  
				
				// Compute area
                printf("\nEnter the radius of the circle: ");
                scanf("%f", &radius);

                area = 3.1416 * radius * radius;
                printf("\nThe area of the circle is %.2f.\n", area);

            } else if (select_2 == 2) {  
				// Compute perimeter
                printf("\nEnter the radius of the circle: ");
                scanf("%f", &radius);

                perimeter = 2 * 3.1416 * radius;
                printf("\nThe perimeter of the circle is %.2f.\n", perimeter);

            } else {
				// Invalid choice for circle computation
                printf("Invalid Input!\n");
            }
            break;

        case 2:  // Rectangle
            printf("\nWhat do you want to compute?\n1) Area\n2) Perimeter\nEnter the number only: ");
            scanf("%d", &select_2);

            if (select_2 == 1) {  
				// Compute area
                printf("\nEnter the length and width of the rectangle: ");
                scanf("%f %f", &length, &width);

                area = length * width;
                printf("\nThe area of the rectangle is %.2f.\n", area);

            } else if (select_2 == 2) {  
				// Compute perimeter
                printf("\nEnter the length and width of the rectangle: ");
                scanf("%f %f", &length, &width);

                perimeter = 2 * (length + width);
                printf("\nThe perimeter of the rectangle is %.2f.\n", perimeter);
				
            } else {
				// Invalid choice for rectangle computation
                printf("Invalid Input!\n");
            }
            break;

        default:
            printf("Invalid Input!\n");  // Invalid shape choice
    }

    return 0;
}
