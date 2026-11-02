#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Input         : Integer
//  Output        : void
//  Description   : Write a program which accept number from user and display its table
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }

}


int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}