#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////////
//
//  Function Name : Count
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept number from user and count frequency of such a digits which are less than 6.
//  Date          : 4/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int Count(int iNo)
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

        if(iDigit < 6)
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

    iRet = Count(iValue);


    printf("%d", iRet);
    

    return EXIT_SUCCESS;
}