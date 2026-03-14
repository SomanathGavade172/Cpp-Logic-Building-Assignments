/* 
    5. Write a program which accept number from user and display its table in reverse order.

    Input  : 2
    Output : 20 18 16 14 12 10  8  6  4 2

    Input  : 5
    Output : 50 45 40 35 30 25 20 15 10 5

    Input  : -5
    Output : 50 45 40 35 30 25 20 15 10 5

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Table
//  Description      : Contains function to display multiplication table of given number in reverse order.
//  Input            : Integer iNo
//  Output           : Prints reverse table of the given number on screen
//  Author           : Gavade Somanath Vilas
//  Date             : 14/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Table
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Table (Parameterized Constructor)
//  Description      : Initializes data member with the given integer value.
//  Input            : Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Table(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Display
//  Description      : Prints multiplication table of the given number in reverse order.
//  Input            : None (Uses class data member)
//  Output           : Displays reverse table on screen
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        void Display()
        {
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -(iNo);
            }

            for(iCnt = 10; iCnt >= 1; iCnt--)
            {
                cout << iNo * iCnt << "\t";
            }

            cout << "\n";
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Reverse Multiplication Table using OOP
//  Description      : This application accepts a number from user, creates an object of Table class,
//                     and displays multiplication table of the given number in reverse order.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Table tobj(iValue);

    tobj.Display();

    return 0;
}