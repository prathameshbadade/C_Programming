#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Input         : Interger
//  Output        : void
//  Description   : Write a program which accept number from user and print that number of $ & * on screen.
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
     printf("\n");
}

int main()
{

    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}