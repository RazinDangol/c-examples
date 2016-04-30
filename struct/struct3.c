/*b)	Write a program
"	To create a structure for Telephone Subscriber's data:
	Tel no., name, address, previous month meter reading, current month meter reading
"	To write 100 customer's data in a file
*/

#include <stdio.h>
#include <conio.h>

#define CUSTOMER 100

struct subscriber{
	int number;
	char name[100];
	char address[1000];
	int previousReading;
	int currentReading;
};

int main(){
	struct subscriber s[CUSTOMER];
	int i;
	for(i=0;i<CUSTOMER;i++){
		printf("Enter Telphone number: ");
		scanf("%d",&s[i].number);
		printf("Enter Name: ");
		scanf("%s",&s[i].name);
		printf("Enter Address: ");
		scanf("%s",&s[i].address);
		printf("Enter Previous Month Reading: ");
		scanf("%d",&s[i].previousReading);
		printf("Enter Current Month Reading: ");
		scanf("%d",&s[i].currentReading);
		fflush(stdin);
	}
	FILE * fp;
	fp = fopen("data.txt","w");
	for(i=0;i<CUSTOMER;i++){
		fprintf(fp,"%d,%s,%s,%d,%d\n",s[i].number,s[i].name,s[i].address,s[i].previousReading,s[i].currentReading);
	}
	fclose(fp);
	getch();
	return 0;
}
