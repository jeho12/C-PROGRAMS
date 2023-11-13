// c program to find 

#include <stdio.h>
#include <math.h>

int main() {
    double radius, height;
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate the volume of the cylinder
    double volume = M_PI * pow(radius, 2) * height;

    // Calculate the surface area of the cylinder
    double surface_area = 2 * M_PI * radius * (radius + height);

    printf("Volume of the cylinder: %.2lf\n", volume);
    printf("Surface area of the cylinder: %.2lf\n", surface_area);

    return 0;
}

