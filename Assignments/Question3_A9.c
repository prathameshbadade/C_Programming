#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Input         : Integer
//  Output        : Integer
//  Description   : Write a program to find even factorial of given number.
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

     for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) ==0 )
        {
            iFact = iFact *iCnt;
        }
    }

    return iFact;
    
}

int main()
{

    int iValue = 0, iRet = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial number is : %d", iRet);

    return EXIT_SUCCESS;
}