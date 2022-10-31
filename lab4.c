#include <stdio.h>
#include <stdbool.h>

//function for checking if the input is valid
bool check(float num){

	int q = (int) num;		//converts the number into its integer form

	//checks if the number is integer and greater than 0
	if ((q-num) == 0 && num > 0){
		return true;
	}

	else {
		return false;
	}
}

//function to get the sum
int sum (int a, int b){
	int add = a + b;
	return add;
}

//function to get the difference
int difference (int a, int b){
	int subtract = a - b;
	return subtract;
}

//function to get the product
int product (int a, int b){
	int multiply = a * b;
	return multiply;
}

//function to get the quotient
float quotient (float a, float b){
	float divide = a/b;
	return divide;
}

//function for roman numeral conversion
void convert_roman (float num){

	int w = (int) num;	//converts the number into its integer value

	//checks whether the number is integer and between 0 and 4000
	if ((num > 0 && num < 4000) && (num - w) == 0){

		while (num > 0){

			/*breaks down the number into numbers that have a roman numeral 
			representation until the value of variable num is reduced to 0*/
			if (num >= 1000){
				printf("M"); num -= 1000;
			}

			if (num >= 900){
				printf ("CM"); num -= 900;
			}

			else if (num >= 500 ){
				printf ("D"); num -= 500;
			}

			else if (num >= 100 ){
				printf ("C"); num -= 100;
			}

			else if (num >= 90 ){
				printf ("XC"); num -= 90;
			}

			else if (num >= 50 ){
				printf ("L"); num -= 50;
			}

			else if (num >= 40 ){
				printf ("XL"); num -= 40;
			}

			else if (num >= 10 ){
				printf ("X"); num -= 10;
			}

			else if (num >= 9 ){
				printf ("IX"); num -= 9;
			}

			else if (num >= 5 ){
				printf ("V"); num -= 5;
			}

			else if (num >= 4 ){
				printf ("IV"); num -= 4;
			}

			else {
				printf ("I"); num -= 1;
			}
		}
	}

	else {
		printf ("%.3f", num);
	}
}

//the main function
int main (void) {

	float x, y, add, diff, prod, quo;
	int i = 0, select, select2;

	while (i==0){

		printf ("Choose an operation you want to perform.");
		printf ("\n\t(1) Addition");
		printf ("\n\t(2) Subtraction");
		printf ("\n\t(3) Multiplication");
		printf ("\n\t(4) Division");
		printf ("\nYou choose: ");
		scanf ("%d", &select);

		printf ("\nEnter two numbers.");
		printf ("\nFirst number: ");
		scanf ("%f", &x);
		printf ("Second number: ");
		scanf ("%f", &y);

		printf ("\n");

		//check whether the inputs are valid
		if (check (x) == true && check (y) == true){

			//converts the numbers entered by the user into roman numerals
			printf ("First number: "); convert_roman(x);
			printf ("\nSecond number: "); convert_roman(y);

			//stores the values of functions
			add = sum(x,y);
			diff = difference (x,y);
			prod = product (x,y);
			quo = quotient (x,y);

			switch (select){
				case 1: printf ("\nSum: "); convert_roman(add); break;
				case 2: printf ("\nDifference: "); convert_roman(diff); break;
				case 3: printf ("\nProduct: "); convert_roman(prod); break;
				case 4: printf ("\nQoutient: "); convert_roman(quo); break;
			}
		}

		//if user's input is invalid
		else {
			printf ("Invalid Input!");
		}

		printf ("\n\nDo you want to continue using the program?");
		printf ("\n\t(1) Yes");
		printf ("\n\t(2) No");
		printf ("\nYou choose: ");
		scanf ("%d", &select2);

		printf ("\n");

		//if the user chose to not continue using the program
		if (select2 == 2){
			i += 1; 	//ends the loop
		}
	}

	return 0;
}