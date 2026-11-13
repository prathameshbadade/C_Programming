#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Input         : Integer
//  Output        : None
//  Description   : Accept range from user and display its digits in reverse order.
//  Date          : 4/11/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
  int iDigit = 0;

  if(iNo < 0)
  {
    iNo = -iNo;
  }
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    printf("%d\n", iDigit);
    iNo = iNo / 10;
  }
    

  
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}