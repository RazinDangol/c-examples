/* Write a program with user defined function using pointers to convert all the upper- case letters to lower-case and vice versa in a string given by the user.
       For example: The C pRogramming.
                               tHE c PrOGRAMMING.
*/

#include <stdio.h>
#include <string.h>

//Defining prototype function
char* alternate(char* letter);

int main(){
	char* letters[100];
	
	printf("%s","Please Enter the letter: ");
	gets(letters);//Getting input from the user
	printf("Original Letters: %s\n",letters);
	printf("Alternated letters: %s\n",alternate(&letters));//Passing the address of letters as an argument to the alternate function
	return 0;
}

char* alternate(char* letters){
	int i;
	for(i=0;i<strlen(letters)+1;i++){
		if(letters[i]>=97){
			letters[i]=letters[i]-32;			
		}
		else if(letters[i]>=65){
			letters[i]=letters[i]+32;
		}
		else{
			letters[i]=letters[i];
		}
	}
	return letters;
}
