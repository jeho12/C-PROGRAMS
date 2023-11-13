#include <stdio.h>
int main()
{
	// full name []= "jehoshaphat ibenye";
	char fullname[10];
	printf("Enter your name: ");
	//scanf("%[^\n]s", fullname);
	get(fullname);
	
	printf("My name is %s",fullname);
	
	
	return 0;
}
