#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : KMtoMeter
//  Input         : Interger
//  Output        : Integer
//  Description   : Write a program which accept distance in kilometer and convert it into meter.
//  Date          : 2/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
  
    int iMeters = 0;

    iMeters = iNo * 1000;

    return iMeters;
    
}

int main()
{

    int iValue = 0, iRet = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Even factorial number is : %d", iRet);

    return EXIT_SUCCESS;
}