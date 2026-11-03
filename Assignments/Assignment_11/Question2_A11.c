#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Input         : Integer
//  Output        : void
//  Description   : Accept range from user and display all numbers in between that range.
//  Date          : 31/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt %2 == 0)
        {
        printf("%d\t", iCnt);
        }
}
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First number :");
    scanf("%d", &iValue1);

    printf("Enter second number :");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);


    return EXIT_SUCCESS;
}