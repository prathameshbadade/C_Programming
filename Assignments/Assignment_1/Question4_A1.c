#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////
//
//  Function Name : Check
//  Input         : Integer
//  Output        : Integer
//  Description   : Boolean
//  Date          : 19/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////
typedef int BOOL;
#define true 1
#define false 0

BOOL Check(int iNo)
{
    if((iNo % 5) ==0)
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
    BOOL bRet = false;

    printf("Enter Number :");
    scanf("%d", &iValue);

    bRet =Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }    
    

    return EXIT_SUCCESS;
}

// Q4. Accept one number and checkwhether is divisible by 5 or not