/* Write a program that asks a user for a number and finds out if the number is present in the 2D array given below:
int	arr [3] [3]   = 	{ { 6, 37, 33},
			{ 12, 11, 13},
			{ 14, 85, 96}
			};
*/

#include <stdio.h>

int main(){
	int arr[3][3] = { { 6, 37, 33},
			{ 12, 11, 13},
			{ 14, 85, 96}
			};
	int i,j,n;
	// Getting input from user
	printf("Enter the number: ");
	scanf("%d",&n);
	// Searching if the number is in the given array arr
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(arr[i][j] == n){
				printf("The number %d is in the array\n",n);
				return 0;
			}	
		}
	}
	printf("The number %d is not in the array\n",n);
	return 0;
}
