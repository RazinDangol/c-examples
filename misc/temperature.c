/*b)	Write a program in C to read temperature of 10 cities for a month (daily for 30 days).
 Then calculate and display the average monthly temperature of each city.*/
 
 #include <stdio.h>
 #include <conio.h>
 //Defining Constant values
 #define CITIES 2
 #define DAYS 3
 #define SIZE 20
 
 char* city[CITIES][SIZE];
 float temp[CITIES][DAYS];

 
 int main(){
 	// Getting input from the user
 	int i,j;
 	for(i=0;i<CITIES;i++){
 		printf("\nEnter city name: ");
 		scanf("%s",&city[i]);
 		for(j=0;j<DAYS;j++){
 			printf("\nEnter temp of %s for %d day: ",city[i],j+1);
 			scanf("%f",&(temp[i][j]));
 			fflush(stdin);
		 }
	 }
	 // Calculating the average temperature of the city and printing to the user
	 float avg,sum;
	 for(i=0;i<CITIES;i++){
	 	sum=0;
	 	for(j=0;j<DAYS;j++){
	 		sum+=temp[i][j];
		 }
		 avg = sum / DAYS;
		 printf("The avg of %s is %3.2f\n",city[i],avg);
	 }
	 getch();
	 return 0;	
 }
