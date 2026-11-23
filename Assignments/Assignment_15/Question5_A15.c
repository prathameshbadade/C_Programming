#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Input         : Integer
//  Output        : Float
//  Description   : Accept total marks and obtained marks from user and calculate prcentage.
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

float Multiply(int iTotal, int iObtained)
{
    float fAns = 0;

    if(iTotal == 0)
    {
        return 0.0;
    }

    fAns = ((float)iObtained / (float)iTotal) * 100;

    return fAns;


}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter total marks :\n");
    scanf("%d", &iValue1);

    printf("Enter obtained marks :\n");
    scanf("%d", &iValue2);

    fRet = Multiply(iValue1, iValue2);

    printf("Total pecentage :%f\n", fRet);

    return EXIT_SUCCESS;
}