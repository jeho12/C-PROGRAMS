#include<stdio.h>
#include<stdlib.h>


int main ()
{
	char fullname[20];
	char national[15];
	char DOB[15];
	
	printf("input/enter your fullname: ");
	fgets(fullname, sizeof(fullname),stdin);
	// fgets(fullname, 20, stdin);
	
	printf("input/enter your nationality: ");
	fgets(national, sizeof(national),stdin);
	
	printf("input/enter your DATE OF BIRTH: ");
	fgets(DOB, sizeof(DOB),stdin);
	
	system("cls");
	//display
	printf("....................STUDENT INFORMATION:.................... \n");
	
	printf("FULL NAME: %s\n", fullname);
	printf("NATIONALITY: %s\n", national);
	printf("DATE OF BIRTH: %s \n", DOB);
	
	return 0;
}
