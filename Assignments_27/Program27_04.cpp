/* 
    4. Write a program which accept string from user and check whether it contains vowels in it or not.

    Input  : "marvellous"
    Output : TRUE

    Input  : "Demo"
    Output : TRUE

    Input  : "xyz"
    Output : FALSE
*/

#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : String
//  Description      : Contains function to check whether given string contains vowels or not.
//  Input            : Character array (string)
//  Output           : Returns TRUE if vowel is present, otherwise FALSE
//  Author           : Gavade Somanath Vilas
//  Date             : 14/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class String
{
    public:
        char *str;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : String (Parameterized Constructor)
//  Description      : Initializes data member with given string.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        String(char Arr[])
        {
            str = Arr;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : CheckVowel
//  Description      : Checks whether string contains any vowel (a, e, i, o, u).
//  Input            : None
//  Output           : BOOL (TRUE / FALSE)
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        BOOL CheckVowel()
        {
            BOOL bFlag = FALSE;

            while(*str != '\0')
            {
                if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || 
                   (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
                {
                    bFlag = TRUE;
                }

                str++;
            }

            return bFlag;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Vowel checker using OOP
//  Description      : This application accepts string from user and checks whether it contains vowels.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50];
    BOOL bRet = FALSE;

    cout << "Enter a string : \n";
    cin.getline(Arr, 50);

    String sobj(Arr);

    bRet = sobj.CheckVowel();

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