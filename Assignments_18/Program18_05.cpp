/* 
    5. Write a program which returns the difference between even factorial and odd factorial of a given number.

    Input  : 5
    Output : -7  (8 - 15)

    Input  : -5
    Output : -7  (8 - 15)

    Input  : 10
    Output : 2895  (3840 - 945)
    
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Factorial
//  Description      : Contains function to calculate difference between even factorial and odd factorial of given number.
//  Input            : Integer value
//  Output           : Returns difference between even factorial and odd factorial
//  Author           : Gavade Somanath Vilas
//  Date             : 29/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Factorial
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Factorial (Parameterized Constructor)
//  Description      : Initializes data member with given value.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Factorial(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : FactorialDiff
//  Description      : Calculates difference between even factorial and odd factorial.
//  Input            : None (Uses class data member)
//  Output           : Returns difference value
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int FactorialDiff()
        {
            int iCnt = 0;
            int iEvenFact = 1, iOddFact = 1;

            if(iNo < 0)
            {
                iNo = -(iNo);
            }
            
            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if(iCnt % 2 == 0)
                {
                    iEvenFact = iEvenFact * iCnt;
                }
                else
                {
                    iOddFact = iOddFact * iCnt;
                }
            }

            return iEvenFact - iOddFact;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Difference between even factorial and odd factorial using OOP
//  Description      : This application accepts number from user, creates an object of Factorial class and returns the difference.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a number : \n";
    cin >> iValue;

    Factorial fobj(iValue);

    iRet = fobj.FactorialDiff();

    cout << "Difference between even factorial and odd factorial is : " << iRet << "\n";

    return 0;
}