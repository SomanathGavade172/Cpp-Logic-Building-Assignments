/* 
    3.Write a program to find even factorial of given number.

    Input  : 5
    Output : 8 (4 * 2)

    Input  : -5
    Output : 8 (4 * 2)

    Input  : 10
    Output : 3840 (10 * 8 * 6 * 4 * 2)

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Factorial
//  Description      : Contains function to calculate even factorial of given number.
//  Input            : Integer iNo
//  Output           : Returns even factorial value
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
//  Function Name    : EvenFact
//  Description      : Calculates factorial of even numbers from 1 to given number.
//  Input            : None (Uses class data member)
//  Output           : Returns even factorial
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        int EvenFact()
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

            for(iCnt = 2; iCnt <= iNo; iCnt += 2)
            {
                iFact = iFact * iCnt;
            }

            return iFact;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Even Factorial using OOP
//  Description      : This application accepts a number from user, creates an object of Factorial class,
//                     and returns the even factorial of the given number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Factorial fobj(iValue);

    iRet = fobj.EvenFact();

    cout << "Even Factorial is : " << iRet << "\n";

    return 0;
}