#include <stdio.h>

int main (void){

	//declares the datatype of the variables that will be used
	int select, select_2;
	float area, perimeter, radius, length, width;

	//asks the user to choose a shape
	printf("Choose a shape.\n1) Circle\n2) Rectangle\nEnter the number only:");
	scanf("%d", &select);	//stores the user's input into the variable 'select'

	switch (select){

		//if the user chooses circle
		case 1:

			printf("\nWhat do you want to compute?\n1) Area\n2) Perimeter\nEnter the number only:");
			scanf("%d", &select_2);

			//if the user chooses to solve fo the area
			if (select_2 == 1){

				//asks for user's input
				printf ("\nEnter the radius of the circle: ");	
				scanf("%f", &radius);			//stores the user's input into the variable 'radius'

				area = 3.1416*radius*radius;	//formula for the area of circle
				printf("\nThe area of the circle is %.2f.\n", area);
			}

			//if the user chooses to solve for the perimeter
			else if (select_2==2){

				//asks for user's input
				printf ("\nEnter the radius of the circle: ");	
				scanf ("%f", &radius);			//stores the user's input into the variable 'radius'

				perimeter = 2*3.1416*radius;	//formula for the perimeter of the circle
				printf("\nThe perimeter of the circle is %.2f\n", perimeter);
			}

			//if the user entered a wrong input
			else{
				printf("Invalid Input!");
			}

			break;

		//if the user chooses rectangle
		case 2:
			printf ("\nWhat do you want to compute?\n1) Area\n2) Perimeter\nEnter the number only:");
			scanf ("%d", &select_2);

			//if the user chooses to solve for the area
			if (select_2 == 1){
				
				//asks for user's input
				printf ("\nEnter the length and width of the rectangle: ");
				scanf ("%f %f", &length, &width);	//stores the user's input into variable 'length' and 'width'

				area = length*width;				//formula for the area of rectangle
				printf("\nThe area of the rectangle is %.2f.\n", area);
			}

			//if the user chooses to solve for the perimeter
			else if (select_2==2){

				//asks for user's input
				printf ("\nEnter the length and width of the rectangle: ");
				scanf ("%f %f", &length, &width);	//stores the user's input into variable 'length' and 'width'

				perimeter = 2*(length+width);		//formula for the perimeter of rectangle
				printf("\nThe perimeter of the rectangle is %.2f\n", perimeter);
			}

			//if the user enters a wrong input
			else {
				printf("Invalid Input!");
			}

			break;

		//if the user enters a wrong input
		default:
			printf("Invalid Input!");	
	}

}