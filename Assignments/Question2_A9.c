#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : DollarToINR
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept amount in US dollar and return its corresponding value in indian currency.
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iRupees = 0;

    iRupees = iNo * 70;

    return iRupees;
}

int main()
{

    int iValue = 0, iRet = 0;
    printf("Enter number of USD : \n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is : %d", iRet);

    return EXIT_SUCCESS;
}