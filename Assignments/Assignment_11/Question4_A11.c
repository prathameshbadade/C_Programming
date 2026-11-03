#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////////
//
//  Function Name : RangeSumEven
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept range from user and return addition of all even numbers in between that range.
//  Date          : 3/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        return -1;
    }
    
   
    for(iCnt = iStart; iCnt <=iEnd; iCnt++)
    {
         if(iCnt % 2 == 0)
        {
        iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter First number :");
    scanf("%d", &iValue1);

    printf("Enter second number :");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Addition is :  %d", iRet);
    }    

    return EXIT_SUCCESS;
}