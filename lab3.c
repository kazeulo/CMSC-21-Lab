#include <stdio.h>

int main (void){

	int num, i=1, select;

	/*do-while statement will be executed on loop
	as long as i is equal to 1*/
	do {
		printf("\nEnter a positive integer: ");
		scanf("%d", &num);

		//checks if the number is positive
		if (num>0){

			printf("\nRoman numeral form: ");

			/*as long the num is greater than 0, the set of codes
			under the while statement will be executed on loop*/
			while (num > 0){
				
				/*break down the number entered by the user into numbers 
				that have a roman numeral representation until the value
				of variable num is reduced to 0*/
				
				if (num >= 1000){
					printf ("M");
					num -= 1000;
				}

				else if (num>=900){
					printf ("CM");
					num -= 900;
				}

				else if (num>=500){
					printf ("D");
					num -= 500;
				}

				else if (num>=100){
					printf ("C");
					num -= 100;
				}

				else if (num>=90){
					printf ("XC");
					num -= 90;
				}

				else if (num>=50){
					printf ("L");
					num -= 50;
				}

				else if (num>=40){
					printf ("XL");
					num -= 40;
				}

				else if (num >= 10){
					printf ("X");
					num -= 10;
				}

				else if (num>=9){
					printf ("IX");
					num -= 9;
				}

				else if (num>=5){
					printf ("V");
					num -= 5;
				}

				else if (num>=4){
					printf ("IV");
					num -= 4;
				}

				else {
					printf ("I");
					num -= 1;
				}

			}
		}

		//if the number negative 
		else{
			printf("\nInvalid input!");  //informs the user that the input is invalid
		}

		//asks the user if he/she would like to continue using the program
		printf ("\n\nDo you want to continue using the program?\n1. Yes\n2. Exit\nEnter the number only: ");
		scanf ("%d", &select);

		//if the user wants to exit the program
		if (select == 2){
			i -= 1;			//breaks the do-while loop
		}	
	}

	while (i==1);	//condition for the do-while loop
	
	return 0;
}