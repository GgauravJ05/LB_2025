/* 
   Problem:
   Write a program which accepts height and width of a rectangle 
   from the user and calculates its area.
   Formula: Area = width * height
*/

#include <stdio.h>

float RecArea(float fheight, float fwidth)
{
    return fheight * fwidth;   // formula for rectangle area
}

int main()
{
    float h = 0.0, w = 0.0;

    printf("Enter height: ");
    scanf("%f", &h);

    printf("Enter width: ");
    scanf("%f", &w);

    float area = RecArea(h, w);
    printf("Area of Rectangle is: %f", area);

    return 0;
}