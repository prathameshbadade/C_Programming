#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////////
//
//  Function Name : CountFour
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept number from user and count frequency of 4 in it.
//  Date          : 4/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }


    while(iNo > 0)
    {
        iDigit = iNo% 10;

        if(iDigit <= 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    


    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);


    printf("%d", iRet);
    

    return EXIT_SUCCESS;
}