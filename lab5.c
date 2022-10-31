#include <stdio.h>

//fibonacci 

//function for recursion
int fibonacci(int n){

	if (n==0 || n==1){
		return n;
	}

	else {
		return (fibonacci(n-1) + fibonacci (n-2));	//calls itself and adds the 2 previous numbers from the series
	}

}

//function for iteration
void loop_fib(int n){

	printf("Fibonacci: ");
	for (int i=0; i<n; i++){
		printf ("%d ", fibonacci(i));	//displays the value of the function 'fibonacci'
	}
}


//the main function
int main(){

	//datatypes of the variables
	int num, i=0, select;

	//the loop will continue on executing as long as the value of i is 0
	while(i==0){

		printf("Enter the number of terms: ");
		scanf("%d", &num);

		//prints the fibonacci sequence until the nth term
		loop_fib(num);	//function call

		//asks the user whether to exit or continue using the program
		printf ("\n\nDo you want to continue using the program?");
		printf ("\n\t(1) Yes");
		printf ("\n\t(2) No");
		printf ("\nYou choose: ");
		scanf ("%d", &select);

		//if user chooses not to continue using the program
		if (select == 2){
			i += 1;		//ends the loop
		}

		printf("\n");

	}
		return 0;
}

