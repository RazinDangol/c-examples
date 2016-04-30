/*b.	Print the following pattern using a C program. Take the string as an input from the user. 
Write a generic program to accept string of any length.
	Example pattern
	If the user input is NEPAL than the output should be as follows: 
1 N
2 E E
3 P P P
4 A A A A
5 L L L L L
*/

#include <stdio.h>
#include <string.h>

int main(){
	int i,j;
	char string[100];
	printf("Enter string: ");
	scanf("%s",string);
	for(i=0;i<strlen(string);i++){
		printf("%2d",i+1); // print number 
		for(j=0;j<=i;j++){
			printf("%2c",string[i]); // printing characters
		}
		printf("\n");
	}
	return 0;
}
