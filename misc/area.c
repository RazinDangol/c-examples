/*b)	Write a program to calculate and print area of circle and volume of sphere of given radius.
 With the help of single function void calculate (float radius, float  area, float  volume) */
 
 #include <stdio.h>
 #include <conio.h>
 #define PI 3.14
 
 float radius,area,volume;
 
 void calculate(float r){
 	area = PI * r* r;
	volume = PI * r * r * r; 
 	printf("The area of Circle is %.3f\n",area);
 	printf("The volume of Circle is %.3f\n",volume);
 }
 int main(){
 	printf("Enter radius: ");
 	scanf("%f",&radius);
 	calculate(radius);
 	getch();
 	return 0;
 }
