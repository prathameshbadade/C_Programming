#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Input         : float
//  Output        : double
//  Description   : Write a program which accept radius of circle from user and calculate its area. 
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    double dPi = 3.14;

    dArea = dPi *fRadius * fRadius;
    return dArea;
}

int main()
{

    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius : \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf", dRet);

    return EXIT_SUCCESS;
}