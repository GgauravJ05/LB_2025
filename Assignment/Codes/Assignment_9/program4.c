/* 
   Problem:
   Accept temperature in Fahrenheit and convert it into Celsius.
   Formula: Celsius = (Fahrenheit - 32) * (5.0 / 9.0)
*/

#include <stdio.h>

float FartoCel(float f)
{
    return (f - 32) * (5.0 / 9.0);   // formula
}

int main()
{
    float fval = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fval);

    float celsius = FartoCel(fval);
    printf("Fahrenheit converted into Celsius is: %f", celsius);

    return 0;
}