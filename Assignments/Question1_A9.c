#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer
//  Output        : void
//  Description   : Write a program which accept number from user and display below pattern.
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
           printf("*\t");
    }

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("#\t");
    }

     
     printf("\n");
}

int main()
{

    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}