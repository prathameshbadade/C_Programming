#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Input         : Integer
//  Output        : void
//  Description   : Check leap year
//  Date          : 21/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

 void CheckLeapYear(int iYear)
{
    if(iYear % 400 ==0) 
    {
        printf("%d Leap Year", iYear);
    }

    else if((iYear % 4 ==0) && (iYear % 100 !=0  ))
    {
        printf("%d Leap Year", iYear);
    }
    else if(iYear <= 0)
    {
        printf("Invalid input");
    }
    else
    {
        printf("Not a leap year");
    }
}

int main()
{
    int iYear = 0;
   
    printf("Enter year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}