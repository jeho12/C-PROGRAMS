	//program to perform arithmetic operations 
	#include <stdio.h>
	
	int main()
	{
		int num1, num2;
		int addition, subtraction, multiplication, modulos, division;
		float div;
		
		printf("Input first number: ");
		scanf("%d", &num1);   //input first value
		printf("input second number: ");
		scanf("%d", &num2);  // input second value 
		
		addition=num1+num2;
		subtraction=num1-num2;
		multiplication=num1*num2;
		modulos=num1%num2;
		div=num1/num2;
		
		printf("The sum of %d and %d is %d \n" , num1, num2, addition);
		printf("The product of %d and %d is %d\n", num1, num2, multiplication);
		printf("The division %d and %d is %.3f", num1, num2, div);
}
