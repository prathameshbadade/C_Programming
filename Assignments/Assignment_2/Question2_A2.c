#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer
//  Output        : None
//  Description   : Accept one from user and print that number of * on screen
//  Date          : 19/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void Display(int iNo)
{
    while(iNo > 0)
    {
         printf(" * ");
         iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);


    return EXIT_SUCCESS;
}