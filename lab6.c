#include <stdio.h>

//sorting the inputs using selection sort
void selection_sort(int number[25], int n){

	int i, j, temp;

	/*sorts the array by selecting the smallest value from the array 
	and moving it to the left side of the array for each iteration*/
	for (i=0; i<n; i++){

		for(j=i+1; j<n; j++){

			if (number[i]>number[j]){
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}

	printf("Sorted elements: ");
	for (i=0; i<n; i++){
		printf("%d ", number[i]);
	}

}

//function for linear search
int linear_search(int number[25], int n, int x){

	//going through the array sequencially
	for (int i=0; i<n; i++)
		if (number[i] == x)
			return i;
	return -1;
}

//main function
int main(){

	//datatypes of the variables
	int count, search, position, i, select, select2, cond = 0;
	int number[25];		//one dimensional array for storing the user's inputs

	/*the program will continue on loop as long as 
	the value of cond is 0*/
	while (cond == 0){

		//asks the user whether to perform searching or sorting
		printf("Choose an action you wish to perform.");
		printf("\n\t(1) Search");
		printf("\n\t(2) Sort");
		printf("\nYou choose: ");
		scanf("%d", &select);

		printf ("\nHow many numbers are you going to enter? ");
		scanf ("%d", &count);

		printf ("Enter %d numbers: ", count);

		//loop for storing the elements in an array
		for (int i=0; i<count; i++){
			scanf ("%d", &number[i]);
		}

		//if user chooses to perform searching
		if (select == 1){
			printf ("\nEnter a number to search: ");
			scanf("%d", &search);

			/*function call to store the value of the function 
			'linear_search' into the variable 'position'*/
			position = linear_search(number, count, search);

			if (position == -1){
				printf("%d is not present in the array.", search);
			}

			else{
				printf("%d is present at location %d.", search, position+1);
			}
		}

		//if the user chooses to perform sorting
		else{

			selection_sort(number, count);

		}

		printf ("\n\nDo you want to continue using the program?");
		printf ("\n\t(1) Yes");
		printf ("\n\t(2) No");
		printf ("\nYou choose: ");
		scanf ("%d", &select2);

		if (select2 == 2){
			cond += 1;		//breaks the loop 
		}

		printf("\n");
	}
}

