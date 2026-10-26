#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : None
//  Output        : None
//  Description   : Program to print 5 to 1 numbers on screen
//  Date          : 19/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    iCnt = 5;
    while(iCnt >= 1)
    {
        printf("%d\n", iCnt);
        iCnt--;
    }
}

int main()
{
    Display();


    return EXIT_SUCCESS;
}

//Q3. Program to print 5 to 1numbers on screen.