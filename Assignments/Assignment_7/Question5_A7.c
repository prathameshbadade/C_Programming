#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Input         : Integer
//  Output        : void
//  Description   : Write a program which accept N and print first 5 multiple of N.
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);   
    }

    printf("\n");
}


int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}