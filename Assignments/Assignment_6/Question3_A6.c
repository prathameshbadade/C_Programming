#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : CalcilateDiscount
//  Input         : float
//  Output        : void
//  Description   : Calculate shopping discount
//  Date          : 21/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////
void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;
   
    if(fAmount < 0)
    {
        printf("Invalid Input!!\n");
        return;
    }

    else if(fAmount < 1000)
    {
        fDiscount = 0.0f;
    }

    else if(fAmount >= 1000 && fAmount < 5000)
    {
        fDiscount = fAmount * 0.10f;
    }
    else
    {
        fDiscount = fAmount * 0.20f;
    }

    fFinalAmount = fAmount - fDiscount;

    printf("Payable Amount = %.2f\n", fFinalAmount);

}
int main()
{
   float fAmount = 0.0f;
    
   printf("Enter purchase amount:");
   scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}