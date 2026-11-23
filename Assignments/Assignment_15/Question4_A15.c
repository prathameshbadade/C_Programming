#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept three numbers and print its multiplication.
//  Date          : 4/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
        int iAns = 1;
        int iCountZero = 0;

        if(iNo1 != 0)
        {
            iAns = iAns * iNo1;  
        }
        else
        {
            iCountZero++;
        }

        if(iNo2 != 0)
        {
            iAns = iAns * iNo2;  
        }
        else
        {
            iCountZero++;
        }

        if(iNo3 != 0)
        {
            iAns = iAns * iNo3;  
        }
        else
        {
            iCountZero++;
        }

        if(iCountZero == 3)
        {
            return 0;
        }

        return iAns;

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter first number :\n");
    scanf("%d", &iValue1);

    printf("Enter second number :\n");
    scanf("%d", &iValue2);

    printf("Enter third number :\n");
    scanf("%d", &iValue3);
    

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d\n", iRet);

    
    return EXIT_SUCCESS;
}