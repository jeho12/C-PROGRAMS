// program to calculate the circumference of a circle 
// area
// circum = 2*pie*r 
#include <stdio.h>

int main()
{
	float radius;
	float area;
	float circum;
	const pie = 3.142;
	
	printf("input radius: ");
	scanf("%f", &radius);
	
	area = pie*radius*radius;
	circum = 2*pie*radius;
	
	printf("the Area of this circle is %.3f\n",area);
	printf("the circumference of this circle is %.2f",circum);
	
	return 0;
}
