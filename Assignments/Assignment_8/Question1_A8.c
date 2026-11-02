#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : Number
//  Input         : Integer
//  Output        : void
//  Description   : Check number is small medium or greater
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void Number(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo <= 50)
    {
        printf("Small");
    }
    else if(iNo <= 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}