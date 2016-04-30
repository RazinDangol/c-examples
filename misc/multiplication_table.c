/*Use the nested loop to calculate and display the multiplication table from |X| =1 to 12 X 12 =144.*/

#include <stdio.h>
#include <conio.h>

#define ROWS 12
#define COLS 12

int main(){
	int i,j;
	printf("\t\t Multiplication table from %d to %d\n",1,COLS);
	for(i=1;i<ROWS+1;i++){
		for(j=1;j<COLS+1;j++){
			printf("%4d  ",i*j);
		}
			printf("\n");
	}
	getch();
	return 0;
}
