/*Write a program to display the following menu: 
Menu
a)	conversion of ASCII code to char
b)	conversion of 0F temperature to 0C
c)	multiplication table of given number
d)	exit from program
and to perform task as per user's choice repeatedly until his/her choice is to exit.
*/

#include <stdio.h>
#include <conio.h>

int main(){
	char option;
	int ascii;
	float temp,celsius;
	int i,num;
	do{
	printf("Menu\n");
	printf("a) Conversion of ASCII code to char\n");
	printf("b) conversion of F temperature to C\n");
	printf("c) multiplication table of given number\n");
	printf("d) exit from program\n");
	printf("Enter option: ");
	scanf("%c",&option);
	switch(option){
		case 'a':
			printf("Enter ascii code: ");
			scanf("%d",&ascii);
			printf("The equivalent char of ASCII code %d is %c\n",ascii,ascii);
			break;
		case 'b':
			printf("Enter temperature in F: ");
			scanf("%f",&temp);
			celsius = (5*(temp - 32))/9;
			printf("%.2f F = %.2f C\n",temp,celsius);
			break;
		case 'c':
		
			printf("Enter number: ");
			scanf("%d",&num);
			for(i=0;i<10;i++){
				printf("%d x %d = %d\n",num,i+1,num*(i+1));
			}
			break;
		case 'd':
			printf("Exiting....\n");
			break;
		default:
			printf("Please choose correct option\n");
	}
	fflush(stdin);
	}while(option != 'd');


	getch();
	return 0;
}
