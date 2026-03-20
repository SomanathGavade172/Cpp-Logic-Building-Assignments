/* 
    3. Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only).

    Input  : 23 30
    Output : 212

    Input  : 10 18
    Output : 126

    Input  : -10 2
    Output : Invalid range

    Input  : 90 18
    Output : Invalid range

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to calculate addition of numbers between given range.
//  Input            : Integer iStart, iEnd
//  Output           : Returns summation
//  Author           : Gavade Somanath Vilas
//  Date             : 19/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public:
        int iStart;
        int iEnd;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Number (Parameterized Constructor)
//  Description      : Initializes data members with given range values.
//  Input            : Integer, Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Number(int A, int B)
        {
            iStart = A;
            iEnd = B;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : RangeSum
//  Description      : Calculates addition of all numbers between given range.
//  Input            : None (Uses class data members)
//  Output           : Returns summation
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int RangeSum()
        {
            int iCnt = 0;
            int iSum = 0;

            if(iEnd < iStart || iStart < 0 || iEnd < 0)
            {
                cout << "Invalid range\n";
                return 0;
            }

            for(iCnt = iStart; iCnt <= iEnd; iCnt++)
            {
                iSum = iSum + iCnt;
            }

            return iSum;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Addition of numbers in range using OOP
//  Description      : This application accepts range from user, creates an object of Number class,
//                     and returns addition of numbers within that range.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout << "Enter Starting point : \n";
    cin >> iValue1;

    cout << "Enter Ending point : \n";
    cin >> iValue2;

    Number nobj(iValue1, iValue2);

    iRet = nobj.RangeSum();

    cout << "Summation is : " << iRet << "\n";

    return 0;
}