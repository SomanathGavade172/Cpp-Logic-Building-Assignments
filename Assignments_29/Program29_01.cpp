/* 
    1.Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

    Input : "Marvellous Multi OS"
            e
    Output : TRUE

    Input : "Marvellous Multi OS"
            W
    Output : FALSE

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : String
//  Description      : Contains function to check whether a given character is present in the string.
//  Input            : Character array (string) and a character
//  Output           : Returns TRUE if character is present, otherwise FALSE
//  Author           : Gavade Somanath Vilas
//  Date             : 27/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class String
{
    public:
        char *src;
        char Ch;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : String (Parameterized Constructor)
//  Description      : Initializes data members with given string and character.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        String(char *s, char C)
        {
            src = s;
            Ch = C;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : ChkChar
//  Description      : Checks whether the given character is present in the string.
//  Input            : None
//  Output           : Returns TRUE if character is present, otherwise FALSE
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        bool ChkChar()
        {
            while(*src != '\0')
            {
                if(*src == Ch)
                {
                    return true;
                }
                src++;
            }

            return false;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Character Presence Check in String using OOP
//  Description      : This application accepts string and a character from user and checks whether that character is present in the string.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[100];
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter a String : \n";
    cin.getline(Arr, 100);

    cout << "Enter Character : \n";
    cin >> cValue;

    String sobj(Arr, cValue);

    bRet = sobj.ChkChar();

    if(bRet == true)
    {
        cout << "TRUE\n";
    }
    else
    {
        cout << "FALSE\n";
    }

    return 0;
}