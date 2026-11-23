#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept number from user and return difference between summations of display its factors and non factors.
//  Date          : 4/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if(iNo < 0)
    {
        iNo =  -iNo;
    }

    for(iCnt =1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }

    }
        return (iSumFact - iSumNonFact);
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference is :%d\n", iRet);

    return EXIT_SUCCESS;
}