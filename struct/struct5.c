/*Given a structure
Name	Address	Telephone	Salary	Year of joining
									mm	dd	yy
Write a program to input data of 100 employee and display records of those employees living in "Pokhara."
*/

#include <stdio.h>
#include <string.h>

#define LIMIT 100 

struct employee{
	char name[50];
	char address[50];
	long int telephone;
	int month;
	int day;
	int year;
};

int main(){
	int i;
	struct employee emp[LIMIT];
	// Inputting the record of the employee
	for(i=0;i<LIMIT;i++){
		printf("\nEnter %d employee's Name: ",i+1);
		gets(emp[i].name);
		printf("Enter %d employee's Address: ",i+1);
		gets(emp[i].address);
		printf("Enter %d employee's telephone: ",i+1);
		scanf("%ld",&emp[i].telephone);
		printf("Enter %d employee's month of joining: ",i+1);
		scanf("%d",&emp[i].month);
		printf("Enter %d employee's day of joining: ",i+1);
		scanf("%d",&emp[i].day);
		printf("Enter %d employee's year of joining: ",i+1);
		scanf("%d",&emp[i].year);
		fflush(stdin);
	}
	
	// Printing the record of employees whose address is Pokhara
	for(i=0;i<LIMIT;i++){
		if(strcmp(emp[i].address,"Pokhara")==0){
			printf("\nName: %s\n",emp[i].name);
			printf("Address: %s\n",emp[i].address);
			printf("Telephone: %ld\n",emp[i].telephone);
			printf("Date of Joining: %d/%d/%d",emp[i].month,emp[i].day,emp[i].year);
		}
		printf("\n\n");
		
		return 0;
	}
	
}
