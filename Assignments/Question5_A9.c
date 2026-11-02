#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Input         : Interger
//  Output        : void
//  Description   : Write a program which returns diffrence between even factorial and odd factorial of given number 
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

     for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) ==0 )
        {
            iEvenFact = iEvenFact *iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return iEvenFact - iOddFact;
    
}

int main()
{

    int iValue = 0, iRet = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Even factorial number is : %d", iRet);

    return EXIT_SUCCESS;
}