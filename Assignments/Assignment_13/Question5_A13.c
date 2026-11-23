#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////////
//
//  Function Name : CountDiff
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept number from user and return difference between summation of digits and summation of odd digits. 
//  Date          : 4/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0; 
    int iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }


    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else{
            iOddSum = iOddSum + iDigit;
        }
            iNo = iNo/10;
    }
    
    return (iEvenSum - iOddSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);


    printf("Difference is : %d\n", iRet);
    

    return EXIT_SUCCESS;
}