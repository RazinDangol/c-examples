/* Write a program to read N numbers dynamically and sort it using function. */

#include <stdio.h>

void sort(int num, int * number);
int main(){
	int n,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int* array = (int*)malloc(n*sizeof(int));
	
	// getting input from user
	for(i=0;i<n;i++){
		printf("Enter %d number: ",i+1);
		scanf("%d",&array[i]);
	}
	
	// Calling the sort function
	sort(n,array);
	
	// Printing the sorted array
	printf("The sorted number are as follow: \n");
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	
	// Free the dynamically allocated memory to prevent memory leak
	free(array);	
	return 0;
}

void sort(int n,int* array){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			// Sorting in ascending order. For descending order just replace > with <
			if(array[i]>array[j]){ 
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
