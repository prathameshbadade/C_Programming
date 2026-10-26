#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////
//
//  Function Name : DisplayFactors
//  Input         : Integer
//  Output        : None
//  Description   : Write a program which accept numbers from user and print even factors of that number .
//  Date          : 20/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void DisplayFctor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt== 0) && (iCnt %2 ==0))
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

    DisplayFctor(iValue);



    return EXIT_SUCCESS;
}