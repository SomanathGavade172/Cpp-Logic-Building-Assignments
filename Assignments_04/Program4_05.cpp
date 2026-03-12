/* 
    5. Write a program which accept number from user and return difference between summation of all its factor and non factors.
    
    Input   : 12
    Output  : -34 (16 - 50)
    
    Input   : 10
    Output  : -29 (8 - 37)

*/


#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : FactorDifference
//  Description      : Contains function to calculate difference between summation of factors and non-factors of the given number.
//  Input            : Integer iNo - Number whose factor and non-factor difference is to be calculated
//  Output           : Integer - Returns difference between summation of factors and non-factors
//  Author           : Gavade Somanath Vilas
//  Date             : 12/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class FactorDifference
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : FactorDifference (Parameterized Constructor)
//  Description      : Initializes data member with the given integer value.
//  Input            : Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        FactorDifference(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : FactorDiff
//  Description      : Calculates difference between summation of all factors and non-factors of the given number.
//  Input            : None (Uses class data member)
//  Output           : Integer (Returns difference value)
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        int FactorDiff()
        {
            int iCnt = 0;
            int iSum = 0, iNonFactSum = 0;

            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    iSum = iSum + iCnt;
                }
                else
                {
                    iNonFactSum = iNonFactSum + iCnt;
                }
            }

            return iSum - iNonFactSum;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Difference Between Factor and Non-Factor Summation using OOP
//  Description      : This application accepts a number from user, creates an object of FactorDifference class,
//                     and returns difference between summation of factors and non-factors.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    FactorDifference fobj(iValue);

    iRet = fobj.FactorDiff();

    cout << "Difference between Factor and Non Factor Summation is : " << iRet << "\n";

    return 0;
}