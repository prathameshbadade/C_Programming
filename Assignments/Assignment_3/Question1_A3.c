#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Input         : Integer
//  Output        : None
//  Description   : Write a program which accept one number from user and print that number of even numbers on screen
//  Date          : 20/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt =1; iCnt <= iNo; iCnt++)
        {
            printf("%d\t",iCnt *2);
        }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    PrintEven(iValue);



    return EXIT_SUCCESS;
}