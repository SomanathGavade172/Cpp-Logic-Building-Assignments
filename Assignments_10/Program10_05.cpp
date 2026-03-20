/* 
    5.Write a program which accept accept range from user and display all numbers in between that range in reverse order.

    Input  : 23 35
    Output : 35 34 33 32 31 30 29 28 27 26 25 24 23

    Input  : 10 18
    Output : 18 17 16 15 14 13 12 11 10

    Input  : 10 10
    Output : 10

    Input  : -10 2
    Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10

    Input  : 90 18
    Output : Invalid range

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to display numbers between given range in reverse order.
//  Input            : Integer iStart, iEnd
//  Output           : Displays numbers in reverse order
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
//  Function Name    : RangeDisplayRev
//  Description      : Displays all numbers between given range in reverse order.
//  Input            : None (Uses class data members)
//  Output           : Prints numbers in reverse order
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void RangeDisplayRev()
        {
            int iCnt = 0;

            if(iEnd < iStart)
            {
                cout << "Invalid range\n";
                return;
            }

            for(iCnt = iEnd; iCnt >= iStart; iCnt--)
            {
                cout << iCnt << "\t";                 
            }

            cout << "\n";
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Display numbers in reverse order using OOP
//  Description      : This application accepts range from user, creates an object of Number class,
//                     and displays numbers within that range in reverse order.
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

    nobj.RangeDisplayRev();

    return 0;
}