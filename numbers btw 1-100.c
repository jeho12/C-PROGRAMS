// program to find nujmbers btween 0 and 20, 21 and 50, 51 and 80, 81 and 100// program to check if value is 10, 50 or 100
#include<stdio.h>

int main()
{
	int value;
	printf("Enter a value to check: ");
	scanf("%d", &value);
	
	if(value>=0 && value<=20)
	{
		printf("value entered is btw 0 and 20");
	}
	else if(value>=21 && value<=50)
	{
		printf("value entered is btw 21 and 50");
	}
	else if(value>=51 && value<=80)
	{
		printf("value entered is btw 51 and 80");
	}
	else if(value>=81 && value<=100)
	{
		printf("value entered is btw 81 and 100");
	}
	else
	{
		printf("value entered is not in range of numbers 1-100 / out of the range of 100");
	}
	
	return 0;
}
