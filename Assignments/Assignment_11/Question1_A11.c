#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Input         : Integer
//  Output        : void
//  Description   : Accept range from user and display all numbers in between that range.
//  Date          : 31/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
    }


    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First number :");
    scanf("%d", &iValue1);

    printf("Enter second number :");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);


    return EXIT_SUCCESS;
}