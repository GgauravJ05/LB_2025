/* 
   Problem:
   Write a program which accepts radius from the user and calculates the 
   area of a circle. Take value of PI as 3.14. 
   Formula: Area = PI * r * r
*/

#include <stdio.h>

float circleArea(float radius)
{
    return 3.14 * radius * radius;   // simple formula
}

int main()
{
    float r = 0.0;
    printf("Enter radius: ");
    scanf("%f", &r);

    float area = circleArea(r);
    printf("Area of circle is: %f", area);

    return 0;
}