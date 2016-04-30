/*Write a recursive program to generate the first 25 numbers of Fibonacci sequence and 
compute the sum of numbers produced. 
[The Fibonacci sequence is 1, 1, 2, 3, 4, 5, 8, 13…]
*/

#include <stdio.h>
#define LIMIT 11


//Defining a prototype recursion function to call in main function
int fibonacci(int);

int main(){
	int i,n;
	int sum=0;
	for(i=0;i < LIMIT;i++)
	{
		n = fibonacci(i+1);
		printf("%d ",n);
		sum+=n;
	}
	printf("\nThe Sum of %d fibonacci numbers is %d\n",LIMIT,sum);
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

