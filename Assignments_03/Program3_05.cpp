// 5. Accept on character from user and check whether that character is vowel(a, e, i, o, u) or not.
// Input : E        Output : TRUE
// Input : d        Output : FALSE.

#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to convert case of the given character.
//  Input            : Character Ch - Character whose case is to be converted
//  Output           : Character - Converted character
//  Author           : Gavade Somanath Vilas
//  Date             : 11/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public:
        char Ch;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Number (Parameterized Constructor)
//  Description      : Initializes data member with the given character value.
//  Input            : One character
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Number(char A)
        {
            Ch = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : DisplayConvert
//  Description      : Converts uppercase character to lowercase and lowercase character to uppercase.
//  Input            : None (Uses class data member)
//  Output           : Character (Returns converted character)
//  Time Complexity  : O(1)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        BOOL ChkVowel()
        {
            int iCnt = 0;

            if(Ch == 'A' || Ch == 'E' || Ch == 'I' || Ch == 'O' || Ch == 'U' || Ch == 'a' || Ch == 'e' || Ch == 'i' || Ch == 'o' || Ch == 'u')
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
//  Application Name : Character Case Converter using OOP
//  Description      : This application accepts a character from user, creates an object of Number class,
//                     and converts the case of that character.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    cout << "Enter a Character : \n";
    cin >> cValue;

    Number nobj(cValue);

    bRet = nobj.ChkVowel();

    if(bRet == TRUE)
    {
        cout << "TRUE" << "\n";
    }
    else
    {
        cout << "FALSE" << "\n";
    }

    return 0;
}