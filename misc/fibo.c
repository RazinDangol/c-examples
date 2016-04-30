/*Write a recursive program to generate the first 15 numbers of Fibonacci sequence.*/
#include<stdio.h>
#define LIMIT 15 


//Defining a prototype recursion function to call in main function
int fibonacci(int);

int main(){
	int i;
	for(i=0;i < LIMIT;i++)
	{
		printf(" %d",fibonacci(i));
	}
	return 0;
}

int fibonacci(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return (fibonacci(n-1) + fibonacci(n-2));  
	}
	
}

/*OUTPUT:-
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 */
