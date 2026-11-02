#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Input         : Integer
//  Output        : Integer
//  Description   : Write a program to find factorial of given number
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt <= iNo; iCnt++)
    {
        iFact = iCnt *  iFact;
    }
        return iFact;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return EXIT_SUCCESS;
}