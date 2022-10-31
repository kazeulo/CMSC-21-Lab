#include <stdio.h>

void main(){

	//declares the datatype of the variables that will be used
	float miles, kilometers;	

	/*variables 'miles' and 'kilometers' are specified as type float 
	which means they'll hold float values or numbers with decimal places.*/

	printf ("MILES TO KILOMETERS CONVERTER\n\n");					//prompts the name of the program
	printf ("Enter a value you wish to convert to kilometers:");	//Asks the user for an input

	scanf ("%f", &miles);	//the user's input will be stored into the float variable "miles"

	/*Since one mile is equal to 1.60934 kilometers, we'll multiply the user's input 
	or the value of the variable 'miles' to 1.60934 and store the
	product into the float variable 'kilometers'.*/
	kilometers = miles * 1.60934;

	//prints the result of the conversion
	printf ("%.2f miles is equal to %f kilometers.\n", miles, kilometers);	//we use %.2f to limit the decimal places into two

}