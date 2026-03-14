/* 
    2. Accept single digit number from user and print it into word.

    Input  : 9
    Output : Nine

    Input  : -3
    Output : Three

    Input  : 12
    Output : Invalid Number
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Digit
//  Description      : Contains function to convert single digit number into word.
//  Input            : Integer iNo
//  Output           : Prints digit in word format on screen
//  Author           : Gavade Somanath Vilas
//  Date             : 14/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Digit
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Digit (Parameterized Constructor)
//  Description      : Initializes data member with the given integer value.
//  Input            : Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Digit(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Display
//  Description      : Converts the given single digit number into word.
//  Input            : None (Uses class data member)
//  Output           : Displays digit in word format
//  Time Complexity  : O(1)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        void Display()
        {
            if(iNo < 0)
            {
                iNo = -(iNo);
            }

            switch(iNo)
            {
                case 0: 
                    cout << "Zero\n";
                    break;

                case 1: 
                    cout << "One\n";
                    break;

                case 2:
                    cout << "Two\n";
                    break;

                case 3:
                    cout << "Three\n";
                    break;

                case 4: 
                    cout << "Four\n";
                    break;

                case 5:
                    cout << "Five\n";
                    break;

                case 6:
                    cout << "Six\n";
                    break;

                case 7:
                    cout << "Seven\n";
                    break;

                case 8:
                    cout << "Eight\n";
                    break;

                case 9:
                    cout << "Nine\n";
                    break;

                default :
                    cout << "Invalid Number\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Digit To Word Conversion using OOP
//  Description      : This application accepts a number from user, creates an object of Digit class,
//                     and displays the number in word format if it is a single digit.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Digit dobj(iValue);

    dobj.Display();

    return 0;
}