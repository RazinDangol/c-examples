/* 	Write a program to find the terms in the given series till the term value is less than 250.
(1^2+2^2)/3, (2^2+3^2)/4, (3^2+4^2)/5,.............................
*/

#include <stdio.h>
#define LIMIT 250

int main(){
	int n;
	int i=50;
	n = (i^2 + (i+1)^2)/(i+2);
	printf("%d",n);
	
	
}
