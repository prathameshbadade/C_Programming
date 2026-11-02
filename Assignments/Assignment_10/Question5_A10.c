#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Input         : Interger
//  Output        : double
//  Description   : Write a program which accept area in square feet and convert it into square meter.
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
  
    double dSqMeters = 0.0;
    double dConversionFactor = 0.0929;

    dSqMeters = iValue * dConversionFactor;

    return dSqMeters;
    
}

int main()
{

    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is : %lf", dRet);

    return EXIT_SUCCESS;
}