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

 void CheckAddmission(float fMarks, float iAge)
{

    if(fMarks < 0 || fMarks >100 || iAge <0)
    {
        printf("Invalid Input!!\n");
    }

    else if(fMarks >= 60 && iAge >=17)
    {
        printf("Eligible for Addmission\n");
    }

    else
    {
        printf("Not Eligible");
    }


}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;
   
    printf("Enter marks and age : ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAddmission(fMarks, iAge);

    return EXIT_SUCCESS;
}