/*b)	Create a structure called students which contains student's name, id, age and marks.
 Read the marks scored by 20 students into a file named "student.dat". 
Find the highest marks scored and the average age of students who appeared in the exam.
*/

#include <stdio.h>
#include <conio.h>

#define LIMIT 2

struct student{
	int id;
	char* name[30];
	int age;
	int marks;
};

int main(){
	int i,sum;
	
	struct student s[LIMIT],buffer[LIMIT];
	
	FILE *fp;
	for(i=0;i<LIMIT;i++){		
		
		printf("%s",s[i].name);
		fflush(stdin);
	}
	fp = fopen("student.dat","rb");
	for(i=0;i<LIMIT;i++){
		fread(buffer[i],sizeof(student),1,fp);
		printf("%s\n",buffer[i].name);
		printf("%d\n",buffer[i].age);
		sum+=buffer[i].age;
	}
	fclose(fp);
	printf("The average age is: %d",(sum/LIMIT));
	getch();
	return 0;
}
