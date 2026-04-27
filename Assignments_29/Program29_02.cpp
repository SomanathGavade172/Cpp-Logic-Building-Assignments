/*
    2.Write a program which accept string from user and accept one character. Return frequency of that character.

    Input : "Marvellous Multi OS"

            M

    Output : 2

    Input : "Marvellous Multi OS"

            W

    Output : 0
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : String
//  Description      : Contains function to count frequency of a given character in the string.
//  Input            : Character array (string) and a character
//  Output           : Returns frequency of that character
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
//  Function Name    : Count
//  Description      : Counts frequency of the given character in the string.
//  Input            : None
//  Output           : Returns frequency (integer)
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int Count()
        {
            int iCount = 0;

            while(*src != '\0')
            {
                if(*src == Ch)
                {
                    iCount++;
                }
                src++;
            }

            return iCount;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Character Frequency Count in String using OOP
//  Description      : This application accepts string and a character from user and returns frequency of that character.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[100];
    char cValue = '\0';
    int iRet = 0;

    cout << "Enter a String : \n";
    cin.getline(Arr, 100);

    cout << "Enter Character : \n";
    cin >> cValue;

    String sobj(Arr, cValue);

    iRet = sobj.Count();

    cout << "Frequency is : " << iRet << "\n";

    return 0;
}