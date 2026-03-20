/* 
    1.Write a program which accept range from user and display all numbers in between that range.

    Input  : 23 35
    Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
    
    Input  : 10 18
    Output : 10 11 12 13 14 15 16 17 18
    
    Input  : 10 10
    Output : 10
    
    Input  : -10 2
    Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
    
    Input  : 90 18
    Output : Invalid range

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to display numbers between given range.
//  Input            : Integer iStart, iEnd
//  Output           : Displays numbers in range
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
//  Description      : Displays all numbers between given range.
//  Input            : None (Uses class data members)
//  Output           : Prints numbers
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
                cout << iCnt << "\t";
            }

            cout << "\n";
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Display numbers in range using OOP
//  Description      : This application accepts range from user, creates an object of Number class,
//                     and displays numbers within that range.
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