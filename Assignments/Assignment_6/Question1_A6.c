#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : CalculateElectricityBill
//  Input         : Integer
//  Output        : void
//  Description   : Calculate electricity bill
//  Date          : 21/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

 void CalculateElectricityBill(int iUnits)
{

    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid Input!!");
    }

    else if(iUnits <= 100)
    {
        fBill = iUnits * 5.0;
    }

     else if(iUnits <= 200)
    {
        fBill = (100 *5 ) + ((iUnits - 100 )* 7.0);
    }

    else
    {
        fBill = (100 *5 ) +(100 *7 ) +  ((iUnits - 200 )* 10.0);   
    }

    printf("Your Bill is = %.2f", fBill);
}

int main()
{
    int iUnits = 0;
   
    printf("Enter consumed units : ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}