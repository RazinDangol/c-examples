/* Write a program to print reverse elements of an array using dynamic memory allocation */

#include <stdio.h>

int main(){
	// Defining variables
	int i,n;
	
	// Defining array pointer
	int * array;
	
	// Getting elements from user
	printf("Please enter size of array: ");
	scanf("%d",&n);
	
	// Allocating memory to array
	array = malloc(n*sizeof(int));
	
	// Sanity check
	if(array == NULL){
		printf("Cannot Allocate memory");
		return 1;
	}
	
	// Getting input from the user
	for(i=0;i<n;i++){
		printf("Enter %d num: ",i+1);
		scanf("%d",&array[i]);
	}
	
	// Printing Reverse elements
	for(i=n-1; i>=0; i--){
		printf("%d\n",array[i]);		
		}
	
	// Give/ Free the memory back to the os
	free(array);
	return 0;
}

