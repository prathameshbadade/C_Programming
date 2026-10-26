#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input         : Integer, Integer
//  Output        : Integer
//  Description   : Performs addition
//  Date          : 19/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0 )
    {
        return EXIT_FAILURE;
    }
    iAns = iNo1 / iNo2;

    return iAns;

}



int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter First No :\n");
    scanf("%d", &iValue1 );

    printf("Enter Second No :\n");
    scanf("%d", &iValue2 );

    iRet = Divide(iValue1,iValue2);
   

    printf("Division is :  %d", iRet);


    return EXIT_SUCCESS;
}

// Q1. Programto divide two numbers.