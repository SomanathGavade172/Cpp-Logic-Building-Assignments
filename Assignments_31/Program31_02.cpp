/*
    2. Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.

        Input : Marvel lous Pyth on

        Output : MarvellousPython

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : String
//  Description      : Contains function to copy string into another string by removing all white spaces.
//  Input            : Character array (string)
//  Output           : Stores modified string (without spaces) in destination array
//  Author           : Gavade Somanath Vilas
//  Date             : 17/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class String
{
    public:
        char *src;
        char *dest;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : String (Parameterized Constructor)
//  Description      : Initializes data members with given source and destination strings.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        String(char *s, char *d)
        {
            src = s;
            dest = d;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : StrCpyX
//  Description      : Copies characters of source string into destination string by removing all white spaces.
//  Input            : None
//  Output           : Modified string (without spaces) stored in destination
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void StrCpyX()
        {
            while(*src != '\0')
            {
                if(*src != ' ')
                {
                    *dest = *src;
                    dest++;
                }
                src++;
            }

            *dest = '\0';
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String Copy Without White Spaces using OOP
//  Description      : This application accepts string from user and copies it into another string after removing all white spaces.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter a String : \n";
    cin.getline(Arr, 30);

    String sobj(Arr, Brr);

    sobj.StrCpyX();
    
    cout << Brr << "\n";

    return 0;
}