#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept number from user and display its factors in decreasing order.
//  Date          : 4/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo =  -iNo;
    }


    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt  == 0)
        {
            printf("%d\t", iCnt);
        }
        
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}