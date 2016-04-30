/*a)	A car company requires that records should be kept in stated format.
             	Model No, Engine Power, No of seats, No of doors, Model      
             name
             For example, 152DV4c, 76.234,5,5, NextGen.
             Write an EFFICIENT program to read 4 sets of such data and store in a data file.*/
             
#include <stdio.h>
#include <conio.h>

#define MAX 3

//defining our data structure/ record structure or creating custom data type with struct
struct car{
	char* model[30];
	float power;
	int seats;
	int doors;
	char* name[30];
};


int main(){
	int i;
	//declaring array c of size MAX(ie 3) as our custom car data type 
	struct car c[MAX];
	for(i=0;i<MAX;i++){
		printf("Enter Model no: ");
		scanf("%s",&c[i].model);
		printf("Enter Engine power: ");
		scanf("%f",&c[i].power);
		printf("Enter No of seats: ");
		scanf("%d",&c[i].seats);
		printf("Enter No of doors: ");
		scanf("%d",&c[i].doors);
		printf("Enter Model name: ");
		scanf("%s",&c[i].name);
	}
	
	// Writing to data file 
	FILE *fp;// Creating a pointer to file 
	fp = fopen("data.txt","w"); // Opening "data.txt" in write mode 
	for(i=0;i<MAX;i++){
		// writing data to the file with each element separated by comma
		fprintf(fp,"%s,%4.2f,%d,%d,%s\n",c[i].model,c[i].power,c[i].seats,c[i].doors,c[i].name);
	}
	fclose(fp); // Closing our file 
	getch();
	return 0;
}
