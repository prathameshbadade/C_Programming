#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : VotingEligibility
//  Input         : Integer
//  Output        : void
//  Description   : Check voting eligibility
//  Date          : 21/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

 void VotingEligibility(int iNo)
{
    if(iNo >= 18)
    {
        printf("Eligible for voting");
    }
    else if(iNo > 0)
    {
        printf("Not eligible for voting");

    }
    else
    {
        printf("Invalid Age");
    }
}

int main()
{
    int iAge= 0;
   
    printf("Enter a number : ");
    scanf("%d", &iAge);

    VotingEligibility(iAge);

    return EXIT_SUCCESS;
}