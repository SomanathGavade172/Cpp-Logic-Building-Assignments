/*
    4. Write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into small case.

        Input : "Marvellous Python 2"

        Output : "marvellous python 2"

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : String
//  Description      : Contains function to copy string into another string by converting all capital characters into small case.
//  Input            : Character array (string)
//  Output           : Stores modified string (lowercase) in destination array
//  Author           : Gavade Somanath Vilas
//  Date             : 26/04/2026
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
//  Function Name    : StrCpySmall
//  Description      : Copies characters of source string into destination string by converting all capital characters into small case.
//  Input            : None
//  Output           : Modified string (lowercase) stored in destination
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void StrCpySmall()
        {
            while(*src != '\0')
            {
                if(*src >= 'A' && *src <= 'Z')
                {
                    *dest = *src + 32;
                }
                else
                {
                    *dest = *src;
                }

                dest++;
                src++;
            }

            *dest = '\0';
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String Copy with Lowercase Conversion using OOP
//  Description      : This application accepts string from user and copies it into another string after converting all capital characters into small case.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter a String : \n";
    cin.getline(Arr, 30);

    String sobj(Arr, Brr);
    
    sobj.StrCpySmall();

    cout << Brr << "\n";

    return 0;
}