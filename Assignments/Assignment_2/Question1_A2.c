#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer
//  Output        : None
//  Description   : Display * character according to given number
//  Date          : 04/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    
      if(iNo < 0)
        {
            iNo = -iNo;
        }

    while(iCnt < iNo)
    {
        printf(" * ");
        iCnt++;
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}