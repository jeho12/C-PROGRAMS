#include <stdio.h>

int main()
{
	double number;
	char alphabet;
	
	printf("Enter double input:  ");
	scanf("%1f", &number);
	
	printf("Enter character input: ");
	scanf("\n%c", &alphabet);
	
	printf("Number: %1f", number);
	printf("\nCharacter: %c", alphabet);
	
	return 0;
}
