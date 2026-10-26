#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : FindGreatest
//  Input         : Integer
//  Output        : void
//  Description   : Greatest of three numbers
//  Date          : 21/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

 void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if((iFirst > iSecond) && (iFirst > iThird ))
    {
        printf("%d is Greatest !", iFirst);
    }

    else if((iSecond > iFirst) && (iSecond > iThird ))
    {
        printf("%d is Greatest !", iSecond);
    }

    else if((iThird > iFirst) && (iThird > iSecond ))
    {
        printf("%d is Greatest !", iThird);
    }

    else
    {
        printf("Invalid input");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
   
    printf("Enter three number : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}