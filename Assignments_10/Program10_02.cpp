/* 
    2. Write a program which accept range from user and display all even numbers in between that range.

    Input  : 23 35
    Output : 24 26 28 30 32 34

    Input  : 10 18
    Output : 10 12 14 16 18

    Input  : 10 10
    Output : 10

    Input  : -10 2
    Output : -10 -8 -6 -4 -2 0 2

    Input  : 90 18
    Output : Invalid range

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to display even numbers between given range.
//  Input            : Integer iStart, iEnd
//  Output           : Displays even numbers in range
//  Author           : Gavade Somanath Vilas
//  Date             : 19/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public:
        int iStart;
        int iEnd;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Number (Parameterized Constructor)
//  Description      : Initializes data members with given range values.
//  Input            : Integer, Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Number(int A, int B)
        {
            iStart = A;
            iEnd = B;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Display
//  Description      : Displays all even numbers between given range.
//  Input            : None (Uses class data members)
//  Output           : Prints even numbers
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Display()
        {
            int iCnt = 0;

            if(iEnd < iStart)
            {
                cout << "Invalid range\n";
                return;
            }

            for(iCnt = iStart; iCnt <= iEnd; iCnt++)
            {
                if(iCnt % 2 == 0)
                {
                    cout << iCnt << "\t";
                }
            }

            cout << "\n";
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Display even numbers in range using OOP
//  Description      : This application accepts range from user, creates an object of Number class,
//                     and displays even numbers within that range.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter Starting point : \n";
    cin >> iValue1;

    cout << "Enter Ending point : \n";
    cin >> iValue2;

    Number nobj(iValue1, iValue2);

    nobj.Display();

    return 0;
}