/*  Write a program to read long integer number, count the digit and print it. */

#include <stdio.h>

int main(){
	long int n;
	int i,counter,temp;
	printf("Enter long integer: ");
	scanf("%ld",&n);
	for(temp=n;temp>0;counter++){
		temp=temp/10;
	}
	printf("The given long integer is %ld and it has %d digits\n",n,counter);
	return 0;
}
