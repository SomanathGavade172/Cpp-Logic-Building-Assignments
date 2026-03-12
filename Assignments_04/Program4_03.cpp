/* 
    3. Write a program which accept number from user and display all its non factor.

    Input   : 12
    Output  : 5 7 8 9 10 11

    Input   : 13
    Output  : 2 3 4 5 6 7 8 9 10 11 12

    Input   : 10
    Output  : 3 4 6 7 8 9

*/


#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : NonFactorDisplay
//  Description      : Contains function to display non-factors of the given number.
//  Input            : Integer iNo - Number whose non-factors are to be displayed
//  Output           : None (Displays non-factors on console)
//  Author           : Gavade Somanath Vilas
//  Date             : 12/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class NonFactorDisplay
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : NonFactorDisplay (Parameterized Constructor)
//  Description      : Initializes data member with the given integer value.
//  Input            : Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        NonFactorDisplay(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : DisplayNonFactors
//  Description      : Displays all numbers which are not factors of the given number.
//  Input            : None (Uses class data member)
//  Output           : None (Displays non-factors on console)
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        void DisplayNonFactors()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if(iNo % iCnt != 0)
                {
                    cout << iCnt << "\t";
                }
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Display Non-Factors using OOP
//  Description      : This application accepts a number from user, creates an object of NonFactorDisplay class,
//                     and displays all non-factors of that number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    NonFactorDisplay fobj(iValue);

    fobj.DisplayNonFactors();

    return 0;
}