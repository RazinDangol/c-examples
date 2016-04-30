/*Write a program to read a 4×4 matrix and find the sum of each row of elements*/

#include <stdio.h>
#include <conio.h>

#define ROW 4
#define COL 4

int main(){
	int arr[ROW][COL];
	int i,j;
	int sum[ROW];
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("Enter %d row %d column element: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<ROW;i++){
		sum[i] = 0;
		for(j=0;j<COL;j++){
			sum[i] += arr[i][j];
		}
		printf("Sum of %d Row is %d\n",i+1,sum[i]);
	}
}
