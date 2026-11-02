#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Input         : Integer
//  Output        : void
//  Description   : Write a program which accept number from user and display its table reverse order.
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }

}


int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}