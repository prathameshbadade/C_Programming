#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayRev
//  Input         : Integer
//  Output        : None
//  Description   : Accept range from user and display all numbers in between that range in reverse order.
//  Date          : 3/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
  
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
    }


    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
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

    RangeDisplayRev(iValue1, iValue2);


    return EXIT_SUCCESS;
}