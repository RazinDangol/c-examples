/*Write a menu program to satisfy the following functions.
a)  Check whether given string is palindrome or not
b)  Find all the prime numbers from 100 to 200
c)   Sum of n natural numbers
d)  Exit from program
(Perform above task until the user wants to exit. Full marks is given if user-defined functions are used)
*/

#include <stdio.h>
#include <string.h>

// Defining the prototype functions
void palindrome(char*);
void prime(int,int);
void sum(int);

int main(){
	int n;
	char string[100],option;
	
	// Providing the user the menu, the program exits only if the user enter 'd' as option
	do{
	printf("\n\nPlease Choose the following option:\n");
	printf("a) Check whether given string is palindrome or not\n");
	printf("b) Find all the prime numbers from 100 to 200\n");
	printf("c) Sum of n natural numbers\n");
	printf("d) Exit from program\n");
	printf("Enter option: ");
	scanf("%c",&option);
	
	switch(option){
		case 'a':
			printf("Enter string: ");
			scanf("%s",string);
			palindrome(string);
			break;
		case 'b':
			prime(100,200); // passing 100 and 200 as arguments as the questions asks for it 
			break;
		case 'c':
			printf("Enter number: ");
			scanf("%d",&n);
			sum(n);
		case 'd':
			break;
		default:
			printf("Please enter correct option\n");
	}
	// Flush the stdin so that we don't get multiple menu. Remove the following fflush line to see what issue I am talking about 
	fflush(stdin);
	}while(option!='d'); // Loop until the user explictly enters 'd' as the option 
		return 0;
}

// Checking if the given string is palindrome or not
void palindrome(char* string){
	int i;
	char temp[100];
	strcpy(temp,string);
	strrev(temp);
	if(strcmp(string,temp)==0)
		printf("The given string %s is palindrome\n",string);
	else
		printf("The given string %s is not palindrome\n",string);
	}

// Printing the prime numbers from start number to end number
void prime(int start,int end){
	int i;
	int j;
	int counter=0;
	printf("\nPrime number from %d to %d:-\n",start,end);
	for(i=start;i<end;i++){
		for(j=2;j<i;j++){
			if((i%j)==0){
				break;
			}
		}
		if(i==j)
		{
			printf("%d\t",i);
			counter++;
		}
	}
	printf("\nTotal prime numbers between %d and %d is %d",start,end,counter);
}

// Printing the sum of n natural numbers
void sum(int n){
	int i;
	int sum=0;
	for(i=0;i<n;i++){
		sum+=i+1;
	}
	printf("Sum of %d natural numbers is %d\n",n,sum);
}
