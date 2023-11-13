// program to calculate the circumference of a circle 
// area
// circum = 2*pie*r 
#include <stdio.h>
#DEFINE pie 3.142

int main()
{
	float radius;
	float area;
	float circum;
	
	printf("input radius: ");
	scanf("%f", &radius);
	
	area = pie*radius*radius;
	circum = 2*pie*radius;
	
	printf("the Area of this circle is %f\n",area);
	printf("the circumference of this circle is %f",circum);
	
	return 0;
}
