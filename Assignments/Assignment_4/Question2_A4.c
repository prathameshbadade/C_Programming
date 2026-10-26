#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Input         : Integer
//  Output        : bool
//  Description   : Check Even or Odd
//  Date          : 21/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

bool CheckEvenOdd(int iValue)
{
    if(iValue %2 == 0)
    {
        return true;
    }
    else
    {
        return false;

    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    
    if(bRet == true)
    {
        printf("It is Even number ");
    }
    else
    {
        printf("It is Odd number");
    }


    return EXIT_SUCCESS;
}