/*Write a program to calculate nth Fibonacci term using recursive function.*/

#include <stdio.h>

// declaring the prototype of the function
int fibo(int);

int main(){
	int n,i;
	printf("Enter no of terms : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		printf("%d\t",fibo(i));
	return 0;
}

int fibo(int n){
	if(n <=1)
		return n;
	else{
		return fibo(n-1) + fibo(n-2); 
	}
}
