/*Create a structure called book having member name, price, author and published date in day, month and year. 
Write a program to read 100 books information from the user 
and display those books having price is greater than 250.*/

#include <stdio.h>
#include <conio.h>

#define MAX 3

struct book{
	char* name[20];
	int price;
	char* author[20];
	char* date[20];
};

int main(){
	int i;
	struct book b[MAX];
	for(i=0;i<MAX;i++){
		printf("Enter book name: ");
		scanf("%s",&b[i].name);
		printf("Enter book price: ");
		scanf("%d",&b[i].price);
		printf("Enter book author: ");
		scanf("%s",&b[i].author);
		printf("Enter Published date(day/month/year): ");
		scanf("%s",&b[i].date);
	}
	// Displaying the books whose price is greater than 250
	printf("%s %s %s %s\n","Name","Price","Author","Date");
	for(i=0;i<MAX;i++){
		if(b[i].price > 250){
			printf("%s %d %s %s\n",b[i].name,b[i].price,b[i].author,b[i].date);
		}
	}	
}
