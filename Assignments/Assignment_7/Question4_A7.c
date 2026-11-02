#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : OddDisplay
//  Input         : Integer
//  Output        : void
//  Description   : Write a program which accept N from user and print all odd numbers up to N.
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
        printf("%d\t", iCnt);
        }
    }

    printf("\n");
}


int main()
{
     int iValue = 0;
    printf("Enter number :");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}