#include <stdio.h>
int main()
{
	char name[10];
	printf("enter name: ");
	fgets(name,sizeof(name), stdin); //read string
	printf("name: ");
	puts(name); 
	
	return 0;
}
