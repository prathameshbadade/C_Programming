#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : CheckDivisibility
//  Input         : Integer
//  Output        : void
//  Description   : Check voting eligibility
//  Date          : 21/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

 void CheckDivisibility(int iNo)
{
    if(iNo %5 == 0)
    {
        printf("It is divisibe by 5");
    }
    else
    {
        printf("It is not divisibe by 5");
    }
}

int main()
{
    int iValue= 5;
   
    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}