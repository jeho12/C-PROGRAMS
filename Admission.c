// program to offer admission to stidents whose age is above 16 years of age
#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter applicant's age: ");
	scanf("%d", &age);
	if(age>=16)
	{
		printf("Offer Applicant Admission Letter!!  You are highly welcome to Anchor university");
	}
		else {
		printf("NO Admission Letter for you Abeg Rest!!");
			}
		
	return 0;
	
}
