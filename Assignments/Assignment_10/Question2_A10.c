#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Input         : float
//  Output        : double
//  Description   : Write a program which accept width & height of rectangle from user and calculate its area. 
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

double RectArea(float fwidth, float fheight)
{
    double dArea = 0.0;


    dArea = fwidth * fheight;

    return dArea;
}

int main()
{

    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : \n");
    scanf("%f", &fValue1);

    printf("Enter height : \n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area is : %lf", dRet);

    return EXIT_SUCCESS;
}