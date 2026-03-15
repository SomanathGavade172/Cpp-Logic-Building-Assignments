/* 
    4. Write a program to find odd factorial of given number.

    Input  : 5
    Output : 15 (5 * 3 * 1)

    Input  : -5
    Output : 15 (5 * 3 * 1)

    Input  : 10
    Output : 945 (9 * 7 * 5 * 3 * 1)

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Factorial
//  Description      : Contains function to calculate odd factorial of given number.
//  Input            : Integer iNo
//  Output           : Returns odd factorial value
//  Author           : Gavade Somanath Vilas
//  Date             : 15/03/2026
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
//  Function Name    : OddFact
//  Description      : Calculates factorial of odd numbers from 1 to given number.
//  Input            : None (Uses class data member)
//  Output           : Returns odd factorial
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        int OddFact()
        {
            int iCnt = 0;
            int iFact = 1;

            if(iNo < 0)
            {
                iNo = -(iNo);
            }

            if(iNo == 0)
            {
                return 1;
            }

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if(iCnt % 2 != 0)
                {
                    iFact = iFact * iCnt;
                }                
            }

            return iFact;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Odd Factorial using OOP
//  Description      : This application accepts a number from user, creates an object of Factorial class,
//                     and returns the odd factorial of the given number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Factorial fobj(iValue);

    iRet = fobj.OddFact();

    cout << "Odd Factorial is : " << iRet << "\n";

    return 0;
}