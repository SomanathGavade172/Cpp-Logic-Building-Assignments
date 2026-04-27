/* 
    3.Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

    Input : "Marvellous Multi OS"
             M
    Output : 0

    Input : "Marvellous Multi OS"
             W
    Output : -1

    Input : "Marvellous Multi OS"
            e
    Output : 4

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : String
//  Description      : Contains function to find index of first occurrence of a given character in the string.
//  Input            : Character array (string) and a character
//  Output           : Returns index of first occurrence or -1 if not found
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
//  Function Name    : FirstIndex
//  Description      : Returns index of first occurrence of the given character.
//  Input            : None
//  Output           : Index (integer) or -1 if character not found
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int FirstIndex()
        {
            int iCnt = 0;

            while(*src != '\0')
            {
                if(*src == Ch)
                {
                    return iCnt;
                }
                src++;
                iCnt++;
            }

            return -1;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : First Occurrence of Character in String using OOP
//  Description      : This application accepts string and a character from user and returns index of first occurrence.
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

    iRet = sobj.FirstIndex();

    cout << "Character Location is : " << iRet << "\n";

    return 0;
}