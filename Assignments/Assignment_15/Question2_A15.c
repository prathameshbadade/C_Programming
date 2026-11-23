#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0
//////////////////////////////////////////////////////
//
//  Function Name : 
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept name from user and print that name.
//  Date          : 4/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if(iNo < 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number :\n");
    scanf("%d", &iValue);
    

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Smaller than 100");
    }
    else
    {
        printf("Greater than 100");
    }
    return EXIT_SUCCESS;
}