#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//////////////////////////////////////////////////////
//
//  Function Name : FindGreater
//  Input         : Integer
//  Output        : void
//  Description   : Greater of two numbers
//  Date          : 21/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void FindGreater(int iValue1, int iValue2)
{
    if(iValue1 > iValue2)
    {
         printf("%d is Greater", iValue1);
    }
    else if(iValue2 > iValue1)
    {
        printf("%d is Greater", iValue2);

    }
    else
    {
        printf("Both are equal");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
   
   

    printf("Enter a number : ");
    scanf("%d", &iValue1);

    printf("Enter a number : ");
    scanf("%d", &iValue2);


  FindGreater(iValue1, iValue2);


    
  

    return EXIT_SUCCESS;
}