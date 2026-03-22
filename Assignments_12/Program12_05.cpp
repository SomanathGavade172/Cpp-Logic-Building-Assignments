/*  
    5.Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

    Input  : 2395
    Output : -15    (2 - 17)

    Input  : 1018
    Output : 6      (8 - 2)

    Input  : 8440
    Output : 16     (16 - 0)

    Input  : 5733
    Output : -18    (0 - 18)

*/
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to calculate difference between summation of even digits and odd digits.
//  Input            : Integer iNo
//  Output           : Returns difference (Even Sum - Odd Sum)
//  Author           : Gavade Somanath Vilas
//  Date             : 22/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Number (Parameterized Constructor)
//  Description      : Initializes data member with given value.
//  Input            : Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Number(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : DiffEvenOddSum
//  Description      : Calculates difference between summation of even digits and odd digits.
//  Input            : None (Uses class data member)
//  Output           : Returns difference (Even Sum - Odd Sum)
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int DiffEvenOddSum()
        {
            int iDigit = 0;
            int iSumEven = 0, iSumOdd = 0;

            // Updator
            if(iNo < 0)
            {
                iNo = -(iNo);
            }

            if(iNo == 0)
            {
                return 0;
            }            

            while(iNo != 0)
            {
                iDigit = iNo % 10;

                if(iDigit % 2 == 0)
                {
                    iSumEven = iSumEven + iDigit;
                }
                else
                {
                    iSumOdd = iSumOdd + iDigit;
                }
                
                iNo = iNo / 10;
            }

            return iSumEven - iSumOdd;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Difference between even and odd digit sum using OOP
//  Description      : This application accepts a number from user, creates an object of Number class,
//                     and returns difference between sum of even digits and sum of odd digits.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Number nobj(iValue);

    iRet = nobj.DiffEvenOddSum();

    cout << "Difference between even and odd digit sum is : " << iRet << "\n";

    return 0;
}