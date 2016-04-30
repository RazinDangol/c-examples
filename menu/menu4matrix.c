/*a)	Write a program to input a square matrix and print the menu:
MENU
i.	Sum of diagonal elements from left
ii.	Find maximum element
iii. Sum of All Elements
iv.	Exit from Program
      and perform tasks as per users choice.
*/

#include <stdio.h>


int main(){
	int matrix[20][20],sum,max,i,j;
	int row,col;
	int option;
	// Inputting matrix elements
		printf("Enter row and column of matrix: ");
		scanf("%d %d",&row,&col);
		for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter %d row %d column element: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
			fflush(stdin);
		}
	}
	do{
		printf("\n\nMENU\n");
		printf("i. Sum of diagonal elements from left\n");
		printf("ii. Find maximum elements\n");
		printf("iii. Sum of all Elements\n");
		printf("iv. Exit from program\n");
		printf("Enter option: ");
		scanf("%d",&option);
		switch(option){
			case 1:
				// Calculating the sum of diagonal elements from left
				sum=0;
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						if(i==j)
							sum+=matrix[i][j];
					}
				}
				printf("The sum of diagonal elements is %d\n",sum);
				break;
			case 2:
				max = matrix[0][0];
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						if(matrix[i][j]>max)
							max = matrix[i][j];
					}
				}
				printf("The maximum elements in the matrix is %d\n",max);
				break;
			case 3:
				sum = 0;
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
							sum += matrix[i][j];
					}				
				}
				printf("The sum of all the elements in the matrix is %d\n",sum);
				break;
			case 4:
				printf("The program will colse now!!!");
				return 0;
			default:
				printf("Please enter correct option\n");
				break;
		}						
	}while(option!=4);
	return 0;
}
