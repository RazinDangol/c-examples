/*b)	Write a program to reverse of string (Character Array) using pointer.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
	// Declaring  the variables
	char  string[100];
	char  temp;
	
	// Declaring the pointers
	char * start;
	char * end;
	
	// Getting input from the user
	printf("Enter string:");
	gets(string);
	
	// point start to starting address of the string 
	start = string;
	
	// point end to end of the string
	end = start + strlen(start)-1; // 1 is subtracted to remove '\0' or null terminate 

	// Looping through each character of the string and swapping the position of the start character with end character
	
	while(end>start){
		temp = *start; // Dereferencing the start pointer i.e putting the value of start in temp
		*start = *end;
		*end = temp;
		start++;
		end--;	
		}
		
	printf("Reversed : %s",string);
	getch();
	return 0;
	
}
