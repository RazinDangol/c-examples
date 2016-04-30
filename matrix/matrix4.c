/* Write a program to read matrix elements and calculate transpose of 4x5 matrix and print. */

#include <stdio.h>
#define ROW 2
#define COL 3
int main(){
	// Defining variables 
	int i,j;
	// Defining matrix
	int matrix[ROW][COL], transpose[ROW+1][COL-1];
	// Reading matrix elements from the user
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("Enter %d Row %d Col Element: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	// Transposing the matrix
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			transpose[j][i] = matrix[i][j];
		}
	}
	// Printing the transposed matrix
	for(i=0;i<ROW+1;i++){
		printf("[");
		for(j=0;j<COL-1;j++){
			printf("%d ",transpose[i][j]);
		}
		printf("]\n");
	}
}
