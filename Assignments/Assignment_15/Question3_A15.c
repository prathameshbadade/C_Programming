#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0
//////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept two numbers from user and check whether numbers is equal or not.
//  Date          : 4/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter first number :\n");
    scanf("%d", &iValue1);

    printf("Enter second number :\n");
    scanf("%d", &iValue2);
    

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return EXIT_SUCCESS;
}