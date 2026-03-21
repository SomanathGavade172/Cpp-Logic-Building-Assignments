/* 
        1. Write a program which accept number from user and display its digits in reverse order.

            Input : 2395
            Output : 5
                     9
                     3
                     2

            Input : -1018
            Output : 8
                     1
                     0
                     1
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to display digits of number in reverse order.
//  Input            : Integer iNo
//  Output           : Displays digits in reverse order
//  Author           : Gavade Somanath Vilas
//  Date             : 20/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Number (Parameterized Constructor)
//  Description      : Initializes data member with given value.
//  Input            : Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Number(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : DisplayReverse
//  Description      : Displays digits of given number in reverse order.
//  Input            : None (Uses class data member)
//  Output           : Prints digits in reverse order
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void DisplayReverse()
        {
            int iDigit = 0;

            if(iNo < 0)
            {
                iNo = -(iNo);
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                cout << iDigit << "\n";
                iNo = iNo / 10;
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Display digits of number in reverse order using OOP
//  Description      : This application accepts a number from user, creates an object of Number class,
//                     and displays its digits in reverse order.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Number nobj(iValue);

    nobj.DisplayReverse();

    return 0;
}