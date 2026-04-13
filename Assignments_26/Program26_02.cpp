/* 
    2. Accept character from user. If character is small display its corresponding capital character, 
       and if character is capital then display its corresponding small. 
       In other cases display as it is.
    
        Input  : Q
        Output : q

        Input  : m
        Output : M

        Input  : 4
        Output : 4

        Input  : %
        Output : %

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Pattern
//  Description      : Contains function to convert given character case (small to capital and capital to small).
//  Input            : Character
//  Output           : Displays converted character
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
//  Description      : Converts small character to capital and capital character to small. 
//                     Other characters are displayed as it is.
//  Input            : None
//  Output           : Displays converted character
//  Time Complexity  : O(1)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Display()
        {
            if(Ch >= 'A' && Ch <= 'Z')
            {
                Ch = Ch + 32;
                cout << Ch << "\n";
            }
            else if(Ch >= 'a' && Ch <= 'z')
            {
                Ch = Ch - 32;
                cout << Ch << "\n";
            }
            else
            {
                cout << Ch << "\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Character case conversion using OOP
//  Description      : This application creates an object of Pattern class and converts given character case.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    cout << "Enter a character : \n";
    cin >> cValue;

    Pattern pobj(cValue);

    pobj.Display();

    return 0;
}