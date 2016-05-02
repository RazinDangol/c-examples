/* Write a C program to read a string and display only vowels of that string. */

#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	int i,j;
	char vowel[6]={'a', 'e', 'i','o','u','\0'}; /* 
	use single quote instead of  double quotes as double quote create a string literal. 'a' is a single a character literal
	, while "a" is a string literal containing an 'a' and a null terminator (that is a 2 char array)
	*/
	
	// Getting input from the user
	printf("Enter string: ");
	scanf("%s",string);
	
	// Printing only vowel
	for(i=0;i<strlen(string);i++){
		for(j=0;j<5;j++){
			if(string[i]==vowel[j])
				printf("%c",string[i]);
		}
	}
}
