/* Problem statement: Accept the radius from user and calculate the area of circle
//step 1 : understand the problem statement
        // radius : float value
        // use the formula : PI * R* R (Pi =3.14f)
 step 2: write the algorithm:
        START
            Accept the radius from user and store it into variable radius
            create the variable PI and store value 3.14f into it.
            calculate the area using the formula as PI*radius*radius
            display the area of circle .
        STOP
step 3: draw the flowchart
step 4: write pseudocode
    START
        INPUT radius
        DECLARE PI=3.14f
        CALCULATE areaOfCircle= PI*raius*radius
        OUTPUT areaOfCircle
    END
step 5: programming language : C
step 6: write program

*/

#include<stdio.h>
/// @brief //
//  Name: calculateArea
//  description : this function calculates the area of circle
//  author : shiv salunke (123456)
/// @param radius 
/// @return float//
float calculateArea(float radius)
{
    auto float fAreaOfCircle =0.0f;
    auto float const PI = 3.14f;
    fAreaOfCircle = PI*radius*radius;
    return fAreaOfCircle;
}

int main()
{
    auto float radius =0.0f;
    auto float fAns =0.0f;

    printf("Enter the  radius \n");
    scanf("%f",&radius);

    fAns=calculateArea(radius);
    printf("Area of circle is : %f",fAns);
    return 0;
}
