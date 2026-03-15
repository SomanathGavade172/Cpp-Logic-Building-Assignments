/*
    5. Write a program which returns difference between Even factorial and odd factorial of given number.
    
    Input  : 5    
    Output : -7 (8 - 15)
    
    Input  : -5
    Output : -7 (8 - 15)
    
    Input  : 10
    Output : 2895 (3840 - 945)

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Factorial
//  Description      : Contains function to calculate difference between even factorial and odd factorial.
//  Input            : Integer iNo
//  Output           : Returns difference (EvenFact - OddFact)
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
//  Function Name    : FactDiff
//  Description      : Calculates even factorial and odd factorial and returns their difference.
//  Input            : None (Uses class data member)
//  Output           : Returns difference between even factorial and odd factorial
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        int FactDiff()
        {
            int iCnt = 0;
            int iEvenFact = 1, iOddFact = 1;

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
//  Application Name : Even and Odd Factorial Difference using OOP
//  Description      : This application accepts a number from user, creates an object of Factorial class,
//                     and returns the difference between even factorial and odd factorial.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Factorial fobj(iValue);

    iRet = fobj.FactDiff();

    cout << "Difference between Even and Odd Factorial is : " << iRet << "\n";

    return 0;
}