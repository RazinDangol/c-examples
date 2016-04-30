/*b)	Write a menu based system which accept operator as well as operand from user and perform the task according to user choice.
		Operator	Meaning
			+	Addition
			-	Subtraction
			/	Division
			I	Increment
			D	Decrement
*/

#include <stdio.h>
#include <conio.h>

int main(){
	int num[2];
	int result;
	char operator;
	puts("Choose operation:\n");
	puts("Operator Meaning\n");
	puts("+ \t Addition\n- \t Subtraction\n/ \t Division\nI \t Increment\nD \t Decrement\n");
	fflush(stdin);
	puts("Enter Operator: ");
	scanf("%c",&operator);
	puts("Enter operand separated by space: ");
	scanf("%d %d",&num[0],&num[1]);
	switch(operator){
		case '+' :
			printf("%d + %d = %d",num[0],num[1],num[0]+num[1]);
			break;
		case '-' :
			printf("%d - %d = %d",num[0],num[1],num[0]-num[1]);
			break;
		case '/' :
			printf("%d / %d = %d",num[0],num[1],num[0]/num[1]);
			break;
		case 'I' :
			printf("%d I %d = %d",num[0],num[1],num[0]+num[1]);
			break;
		default:
			printf("Please enter correct operator");
			break;
	}
	getch();
	return 0;
	
}
