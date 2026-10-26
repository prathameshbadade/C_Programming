#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactors
//  Input         : Integer
//  Output        : None
//  Description   : Write a program which accept number from user and print even factors of that number
//  Date          : 20/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void DisplayEvenFctor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt <= iNo/2; iCnt++)
        {
            if(((iNo % iCnt== 0) && (iCnt %2 ==0) && (iCnt != 4)))
            {
            printf("%d\t",iCnt);
            }
        }

}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    DisplayEvenFctor(iValue);



    return EXIT_SUCCESS;
}