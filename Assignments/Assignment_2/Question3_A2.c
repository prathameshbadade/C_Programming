#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer
//  Output        : None Accept one number from user if number is less than 10 print "Hello" otherwisw print "Demo".
//  Description   : Performs addition
//  Date          : 19/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10 )
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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