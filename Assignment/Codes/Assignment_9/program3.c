/* 
   Problem:
   Write a program to get distance in kilometer and convert it into meter.
   (1 KM = 1000 meter)
*/

#include <stdio.h>

int KMtoMeter(int km)
{
    return km * 1000;   // conversion formula
}

int main()
{
    int km = 0;

    printf("Enter distance in KM: ");
    scanf("%d", &km);

    int meter = KMtoMeter(km);
    printf("Distance converted in meter is: %d", meter);

    return 0;
}