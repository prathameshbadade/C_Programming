#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Input         : Integer
//  Output        : None
//  Description   : Performs addition
//  Date          : 19/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

   
    for( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return EXIT_SUCCESS;
}

//Q5. Accept one number from user and print that  number of * on screen. 