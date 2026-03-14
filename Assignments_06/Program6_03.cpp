/* 
    3.Write a program to find factorial of given number.

    Input  : 5
    Output : 120 (5 * 4 * 3 * 2 * 1)

    Input  :-5
    Output : 120 (5 * 4 * 3 * 2 * 1)

    Input  : 4
    Output : 24 (4 * 3 * 2 * 1)

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Factorial
//  Description      : Contains function to calculate factorial of given number.
//  Input            : Integer iNo
//  Output           : Returns factorial of the given number
//  Author           : Gavade Somanath Vilas
//  Date             : 14/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Factorial
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Factorial (Parameterized Constructor)
//  Description      : Initializes data member with the given integer value.
//  Input            : Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Factorial(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Calculate
//  Description      : Calculates factorial of the given number.
//  Input            : None (Uses class data member)
//  Output           : Returns factorial value
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        int Calculate()
        {
            int iCnt = 0;
            int iFact = 1;

            if(iNo < 0)
            {
                iNo = -(iNo);
            }

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                iFact = iFact * iCnt;
            }

            return iFact;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Factorial Calculation using OOP
//  Description      : This application accepts a number from user, creates an object of Factorial class,
//                     and calculates factorial of the given number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    // Create a object of a class
    Factorial fobj(iValue);

    iRet = fobj.Calculate();         // Function Call

    cout << "Factorial is : " << iRet << "\n";

    return 0;
}
