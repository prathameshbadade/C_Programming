#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer
//  Output        : void
//  Description   : Write a program which accept number from user and print numbers till that number.
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}