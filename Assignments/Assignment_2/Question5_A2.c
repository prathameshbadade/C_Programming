#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//////////////////////////////////////////////////////
//
//  Function Name : Check
//  Input         : Integer
//  Output        : Boolean
//  Description   : Accept number from user and check whether number is even or odd
//  Date          : 19/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////


bool Check(int iNo)
{
    if((iNo % 2) ==0)
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

    printf("Enter Number :");
    scanf("%d", &iValue);

    bRet =Check(iValue);

    if(bRet == true)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }    
    

    return EXIT_SUCCESS;
}