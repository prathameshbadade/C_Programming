#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name : CheckCharacterType
//  Input         : Character
//  Output        : void
//  Description   : Check divisibility 
//  Date          : 21/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

 void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c is Uppercase alphabet", cValue );
    }

    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c is Lowercase alphabet", cValue );
    }

    else if(cValue >= '0' && cValue <= '9')
    {
        printf("%c is Digit", cValue);
    }

    else
    {
        printf("Special character");
    }
}

int main()
{
    char cValue = '\0';
   
    printf("Enter a character : ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}