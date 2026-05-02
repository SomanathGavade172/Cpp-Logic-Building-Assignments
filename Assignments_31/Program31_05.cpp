/* 
    5. Write a program which accept string from user and copy that characters of that string into another string by toggling the case. 

    Input : "Marvellous Python 2"

    Output : "mARVELLOUS pYTHON 2"
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : String
//  Description      : Contains function to copy string into another string by toggling the case of characters.
//  Input            : Character array (string)
//  Output           : Stores modified string (toggle case) in destination array
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
//  Function Name    : StrCpyToggle
//  Description      : Copies characters of source string into destination string by toggling the case of each alphabet.
//  Input            : None
//  Output           : Modified string (toggle case) stored in destination
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void StrCpyToggle()
        {
            while(*src != '\0')
            {
                if(*src >= 'A' && *src <= 'Z')
                {
                    *dest = *src + 32;
                }
                else if(*src >= 'a' && *src <= 'z')
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
//  Application Name : String Copy with Toggle Case Conversion using OOP
//  Description      : This application accepts string from user and copies it into another string after toggling the case of all alphabets.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter a String : \n";
    cin.getline(Arr, 30);

    String sobj(Arr, Brr);
    
    sobj.StrCpyToggle();

    cout << Brr << "\n";

    return 0;
}