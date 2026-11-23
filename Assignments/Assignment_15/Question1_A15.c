#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : 
//  Input         : Character
//  Output        : Character
//  Description   : Accept name from user and print that name.
//  Date          : 4/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int main()
{
    char sName [30] ;

    printf("Enter your full name : \n");
    scanf("%[^'\n']s", sName);

    printf("Your name is :%s\n");

    return EXIT_SUCCESS;
}