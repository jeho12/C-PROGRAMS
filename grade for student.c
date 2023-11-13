// c program that outputs that prints out grade math211 cmp 211 gst 211
// also calculate the average score
// input your score in GST 211 CMP 211 MATH 211
// print out total and average score 
// Based on the average score output your garde
// A=70-100; B=60-69; C=50-59; D=45-49; E=40-44; F=0-39;
#include<stdio.h>

int main()
{
	int Math211, Gst211, Cmp211;
	int score=0-100;
	
	printf("Enter score for Math 211: ");
	scanf("%d", &Math211);
	
	printf("Enter score for Gst 211: ");
	scanf("%d", &Gst211);
	
	printf("Enter score for Cmp 211: ");
	scanf("%d", &Cmp211);
	
	if(score>=70 && score<=100)
	{
		printf("Your grade is A");
	}
	else if(score>=60 && score<=69)
	{
		printf("Your grade  is B");
	}
	else if(score>=50 && score<=59)
	{
		printf("Your grade is C");
	}
	else if(score>=45 && score<=49)
	{
		printf("Your grade  is D");
	}
	else if(score>=40 && score<=44)
	{
	  printf("Your grade in MATH 211 is E");
	}
		else if(score>=0 && score<=39)
	{
		printf("Your grade is F");
	}
	else
	{
		printf("value entered is invalid");
	}
}
