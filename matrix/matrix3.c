/*Write a program to input m n order matrix and find out the sum of diagonal elements.*/

#include <stdio.h>

int main(){
	int matrix[20][20],m,n,i,j,sum;
	printf("Enter row and column of the matrix: ");
	scanf("%d %d",&m,&n);
	// inputting the matrix from user
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter %d row %d column element: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}
	// Printing the matrix
	for(i=0;i<m;i++){
		printf("[");
		for(j=0;j<n;j++){
			printf(" %d ",matrix[i][j]);
		}
		printf("]\n");
	}
	// Calculating the sum of diagonal elements from left
	sum=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==j)
				sum+=matrix[i][j];
		}
	}
	printf("The sum of diagonal elements is %d",sum);
	
	return 0;
}
