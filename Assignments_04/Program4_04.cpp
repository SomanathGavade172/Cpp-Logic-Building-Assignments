/* 
    4. Write a program which accept number from user and return summation of all its non factors.
    
    Input   : 12
    Output  : 50
    
    Input   : 10
    Output  : 37

*/


#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : NonFactorSummation
//  Description      : Contains function to calculate summation of non-factors of the given number.
//  Input            : Integer iNo - Number whose non-factors summation is to be calculated
//  Output           : Integer - Returns summation of non-factors
//  Author           : Gavade Somanath Vilas
//  Date             : 12/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class NonFactorSummation
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : NonFactorSummation (Parameterized Constructor)
//  Description      : Initializes data member with the given integer value.
//  Input            : Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        NonFactorSummation(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : SumNonFact
//  Description      : Calculates summation of all numbers which are not factors of the given number.
//  Input            : None (Uses class data member)
//  Output           : Integer (Returns summation of non-factors)
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        int SumNonFact()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if(iNo % iCnt != 0)
                {
                    iSum = iSum + iCnt;
                }
            }

            return iSum;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Summation of Non-Factors using OOP
//  Description      : This application accepts a number from user, creates an object of NonFactorSummation class,
//                     and returns summation of all non-factors of that number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    NonFactorSummation fobj(iValue);

    iRet = fobj.SumNonFact();

    cout << "Summation of Non Factors are : " << iRet << "\n";

    return 0;
}