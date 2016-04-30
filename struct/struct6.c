/*Write a program to create a structure for customers in a Shop of the following data:
CID, CName, Address, TelNo, Balance
Read 100 customers from a file customer.dat and display the information of the customers who has the balance is greater than Rs 1000.
*/

#include <stdio.h>
#define LIMIT 100

struct customer{
	int cid;
	char cname[50];
	char address[50];
	int tel;
	int balance;
};
int main(){
	struct customer c[LIMIT];
	int i;
	FILE * fp;
	fp = fopen("customers.dat","r");
	// Checking if the file is present or not
	if(fp==NULL){
		printf("No such file");
		return 1;
	}
	
	// Reading data from the data file
	for(i=0;i<LIMIT;i++){
		int ret = fscanf(fp,"%d %s %s %d %d\n",&c[i].cid,&c[i].cname,&c[i].address,&c[i].tel,&c[i].balance);
		if(ret == 5 && c[i].balance>1000) // Print only whose balance is greater than 1000
			printf("%d %s %s %d %d\n",c[i].cid,c[i].cname,c[i].address,c[i].tel,c[i].balance);
		else if(ret == EOF)	
			break;	
	}
// Closing the file and exiting	
fclose(fp);
return 0;
}
