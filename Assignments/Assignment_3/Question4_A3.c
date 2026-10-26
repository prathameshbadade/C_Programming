#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Input         : Character
//  Output        : None
//  Description   : Accept one character from user and convert caase of that number.
//  Date          : 20/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <='z')
    {
        printf("%c", cValue - 32);
    }    
    else if(cValue >= 'A'  && cValue <= 'Z')
    {
        printf("%c", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Number :");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}