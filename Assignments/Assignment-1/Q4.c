/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius.*/
#include <stdio.h>
int main()
{
    float area_of_circle, radius_of_circle;
    printf("Enter the radius of circle:");
    scanf("%f", &radius_of_circle);
    area_of_circle = 3.14 * (radius_of_circle) * (radius_of_circle);
    printf("Area of circle is %.2f having radius %.2f", area_of_circle, radius_of_circle);
    return 0;
}