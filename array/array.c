/* Write a program to sort a one-dimensional, integer array having 10 numbers from smallest to largest number. */

#include <stdio.h>
#include <conio.h>

#define LIMIT 10

int main(){
	int arr[LIMIT];
	int i,j;
	int temp;
	//Reading integers from user
	for(i=0;i<LIMIT;i++){
		printf("Enter %d element: ",i+1);
		scanf("%d",&arr[i]);	
	}

	// Sorting the array
	for(i=0;i<LIMIT;i++){
		for(j=i+1;j<LIMIT;j++){
			if(arr[j]<arr[i]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
	}
	//Printing the sorted array
	for(i=0;i<LIMIT;i++){
		printf("%d ",arr[i]);
	}
	getch();
	return 0;
}
