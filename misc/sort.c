/* Write a program to sort n numbers in an array. */

#include <stdio.h>

int main(){
	int array[100],temp;
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter %d number: ",i+1);
		scanf("%d",&array[i]);
	}
	// Sorting begins
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(array[i]>array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	// print the sorted array
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}
