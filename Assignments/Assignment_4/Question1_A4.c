#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : CheckNumber
//  Input         : Integer
//  Output        : void
//  Description   :Check whether Number is Positive,Negative or zero 
//  Date          : 21/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("It is Postive number ");
    }
    else if(iValue < 0)
    {
        printf("It is Negative number");
    }
    else
    {
        printf("It is zero");

    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}