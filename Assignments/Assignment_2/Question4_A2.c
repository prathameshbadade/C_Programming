#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer
//  Output        : None
//  Description   : Accept the number from user and display first number in second number of times
//  Date          : 19/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int i = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    for(i=1; i <= iFrequency; i++ )
    {
         printf("%d\t", iNo);
        
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter first Number : ");
    scanf("%d", &iValue);

     printf("Enter second Number : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);


    return EXIT_SUCCESS;
}