/* 
   Problem:
   Accept area in square feet and convert it into square meter.
   1 square feet = 0.0929 square meter
*/

#include <stdio.h>

double squaremeter(float sqft)
{
    return sqft * 0.0929;   // conversion formula
}

int main()
{
    float val = 0;

    printf("Enter area in square feet: ");
    scanf("%f", &val);

    double sqmeter = squaremeter(val);
    printf("Square feet converted in square meter is: %f", sqmeter);

    return 0;
}