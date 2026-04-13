/* 
    4. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

        Input  : %
        Output : TRUE

        Input  : d
        Output : FALSE

*/

#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Pattern
//  Description      : Contains function to check whether given character is a special symbol or not.
//  Input            : Character
//  Output           : Returns TRUE if special symbol, otherwise FALSE
//  Author           : Gavade Somanath Vilas
//  Date             : 13/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public:
        char Ch;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Pattern (Parameterized Constructor)
//  Description      : Initializes data member with given character.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Pattern(char A)
        {
            Ch = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Display
//  Description      : Checks whether given character is one of the special symbols 
//                     (!, @, #, $, %, ^, &, *) and returns TRUE or FALSE.
//  Input            : None
//  Output           : BOOL (TRUE / FALSE)
//  Time Complexity  : O(1)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        BOOL Display()
        {
            if((Ch == '!') || (Ch == '@') || (Ch == '#') || (Ch == '$') || (Ch == '%') || (Ch == '^') || (Ch == '&') || (Ch == '*'))
            {
                return TRUE;
            }
            else
            {
                return FALSE;
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Special symbol checker using OOP
//  Description      : This application creates an object of Pattern class and checks whether given character is special symbol.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    cout << "Enter a character : \n";
    cin >> cValue;

    Pattern pobj(cValue);

    bRet = pobj.Display();

    if(bRet == TRUE)
    {
        cout << "TRUE\n";
    }
    else
    {
        cout << "FALSE\n";
    }

    return 0;
}