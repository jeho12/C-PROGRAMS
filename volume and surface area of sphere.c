// c program to find volume and surface area of sphere 
// volume of a sphere = 4*pie*r*r*r
// surface area of a sphere = 4*pie*r*r
// where R is the the Radius of sphere 

#include <stdio.h>
#include <math.h>

int main() {
    float radius; 
	float height;
    const float pi = 3.142; 

    // Input the radius and height of the cylinder
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate the volume and surface area
    float volume = pi * pow(radius, 2) * height;
    float surface_area = (2 * pi * pow(radius, 2)) + (2 * pi * radius * height);

    // Display the results
    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surface_area);

    return 0;
}

