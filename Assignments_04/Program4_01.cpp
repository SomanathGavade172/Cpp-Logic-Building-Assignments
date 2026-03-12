/* 
    1. Write a program which accept number from user and display its multiplication of factors.

    Input   : 12
    Output  : 144 (1 * 2 * 3 * 4 * 6)

    Input   : 13
    Output  : 1 (1)

    Input   : 10
    Output  : 10 (1 * 2 * 5)

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : FactorProduct
//  Description      : Contains function to calculate multiplication of factors of the given number.
//  Input            : Integer iNo - Number whose factors multiplication is to be calculated
//  Output           : Integer - Returns multiplication of factors
//  Author           : Gavade Somanath Vilas
//  Date             : 12/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class FactorProduct
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : FactorProduct (Parameterized Constructor)
//  Description      : Initializes data member with the given integer value.
//  Input            : Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        FactorProduct(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : MultFact
//  Description      : Calculates multiplication of all factors of the given number except the number itself.
//  Input            : None (Uses class data member)
//  Output           : Integer (Returns multiplication of factors)
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        int MultFact()
        {
            int iCnt = 0, iMulti = 1;

            for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    iMulti = iMulti * iCnt;
                }
            }

            return iMulti;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Multiplication of Factors using OOP
//  Description      : This application accepts a number from user, creates an object of FactorProduct class,
//                     and displays multiplication of its factors.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    FactorProduct fobj(iValue);

    iRet = fobj.MultFact();

    cout << "Multiplication of Factors are : " << iRet << "\n";

    return 0;
}