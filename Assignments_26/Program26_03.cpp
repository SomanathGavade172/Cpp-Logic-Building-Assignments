/* 
    3. Accept character from user. If it is capital then display all the characters from the input character till Z. 
       If input character is small then print all the characters in reverse order till a. 
       In other cases return directly.

        Input  : Q
        Output : Q R S T U V W X Y Z

        Input  : m
        Output : m l k j i h g f e d c b a
        
        Input  : 8
        Output :

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Pattern
//  Description      : Contains function to display characters based on input (forward for capital, reverse for small).
//  Input            : Character
//  Output           : Displays sequence of characters
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
//  Description      : If character is capital, prints characters from input till Z.
//                     If character is small, prints characters in reverse from input till a.
//                     Other characters are ignored.
//  Input            : None
//  Output           : Displays character sequence
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Display()
        {
            int iCnt = 0;

            if(Ch >= 'A' && Ch <= 'Z')
            {
                for(iCnt = Ch; iCnt <= 'Z'; iCnt++)
                {
                    cout << (char)iCnt << "\t";
                }
            }
            else if(Ch >= 'a' && Ch <= 'z')
            {
                for(iCnt = Ch; iCnt >= 'a'; iCnt--)
                {
                    cout << (char)iCnt << "\t";
                }
            }
            else
            {
                cout << "\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Character sequence display using OOP
//  Description      : This application creates an object of Pattern class and displays characters based on input.
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