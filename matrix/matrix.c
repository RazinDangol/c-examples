/*c)	Write a program to find out maximum number of following 2-D integer array.
	int arr[3] [2] = 	{
			{ 12, 29},
			{ 30,40},
			{16,10},
			};
*/

#include <stdio.h>
#include <conio.h>

int main(){
	int arr[3] [2] = 	{
			{ 12, 29},
			{ 30,40},
			{16,10},
			};
	int max,i,j;
	max=arr[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	printf("Max number: %d",max);
	getch();
	return 0;
}
