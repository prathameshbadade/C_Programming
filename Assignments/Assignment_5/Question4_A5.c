#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : CheckMultipleDivisibility
//  Input         : Integer
//  Output        : void
//  Description   : Check divisibility 
//  Date          : 21/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

 void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 3 == 0) && (iValue % 5 ==0 ))
    {
        printf("%d Divisible by both", iValue );
    }

    else if(iValue % 5 == 0)
    {
        printf("%d Divisible by 5 omly", iValue );
    }

    else if(iValue % 3 == 0)
    {
        printf("%d Divisible by 3 only", iValue);
    }

    else
    {
        printf("Not divisible by either");
    }
}

int main()
{
    int iValue = 0;
   
    printf("Enter number : ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}