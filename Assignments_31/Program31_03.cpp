/*
    3. Write a program which accept string from user and copy that characters of that string into another string by converting all small characters into capital case.

        Input : "Marvellous Python 2"

        Output : "MARVELLOUS PYTHON 2"

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : String
//  Description      : Contains function to copy string into another string by converting all small characters into capital case.
//  Input            : Character array (string)
//  Output           : Stores modified string (uppercase) in destination array
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
//  Function Name    : StrCpyCap
//  Description      : Copies characters of source string into destination string by converting all small characters into capital case.
//  Input            : None
//  Output           : Modified string (uppercase) stored in destination
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void StrCpyCap()
        {
            while(*src != '\0')
            {
                if(*src >= 'a' && *src <= 'z')
                {
                    *dest = *src - 32;
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
//  Application Name : String Copy with Uppercase Conversion using OOP
//  Description      : This application accepts string from user and copies it into another string after converting all small characters into capital case.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter a String : \n";
    cin.getline(Arr, 30);

    String sobj(Arr, Brr);
    
    sobj.StrCpyCap();

    cout << Brr << "\n";

    return 0;
}