#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Input         : float
//  Output        : double
//  Description   : Write a program which accept temperature in Fahrenheit and convert it into celsius.
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;


    dCelsius = (fTemp - 32)  * (5.0 / 9.0); 

    return dCelsius;
}

int main()
{

    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is : %lf", dRet);

    return EXIT_SUCCESS;
}