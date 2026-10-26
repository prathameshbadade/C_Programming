#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : DisplayGrade
//  Input         : Float
//  Output        : void
//  Description   : Calculate student grade
//  Date          : 21/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

 void DisplayGrade(float fMarks)
{

    if((fMarks > 100 ) || (fMarks < 0))
    {
        printf("Invalid marks!!, Please enter a valid marks");
    }
    else if(fMarks >= 90) 
    {
        printf("Grade A");
    }

    else if(fMarks >= 75) 
    {
        printf("Grade B");
    }

    else if(fMarks >= 60) 
    {
        printf("Grade C");
    }

    else if(fMarks >= 40) 
    {
        printf("Grade D");
    }
   
    else
    {
        printf("FAIL!!");
    }
}

int main()
{
    float fMarks = 0.0f;
   
    printf("Enter marks : ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}