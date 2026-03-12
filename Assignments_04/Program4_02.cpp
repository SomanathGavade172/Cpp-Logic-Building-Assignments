/* 
    2. Write a program which accept number from user and display it factor in decreasing order.

    Input    : 12
    Output   : 6 4 3 2 1

    Input    : 13
    Output   : 1

    Input    : 10
    Output   : 5 2 1
*/


#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : FactorDisplay
//  Description      : Contains function to display factors of the given number in decreasing order.
//  Input            : Integer iNo - Number whose factors are to be displayed
//  Output           : None (Displays factors on console)
//  Author           : Gavade Somanath Vilas
//  Date             : 12/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class FactorDisplay
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : FactorDisplay (Parameterized Constructor)
//  Description      : Initializes data member with the given integer value.
//  Input            : Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        FactorDisplay(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : FactReverse
//  Description      : Displays all factors of the given number in decreasing order except the number itself.
//  Input            : None (Uses class data member)
//  Output           : None (Displays factors on console)
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        void FactReverse()
        {
            int iCnt = 0;

            for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
            {
                if(iNo % iCnt == 0)
                {
                    cout << iCnt << "\t";
                }
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Display Factors in Decreasing Order using OOP
//  Description      : This application accepts a number from user, creates an object of FactorDisplay class,
//                     and displays its factors in decreasing order.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    FactorDisplay fobj(iValue);

    fobj.FactReverse();

    return 0;
}