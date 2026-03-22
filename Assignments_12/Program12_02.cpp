/* 
    2.Write a program which accept number from user and return the count of odd digits.

    Input  : 2395
    Output : 3

    Input  : 1018
    Output : 2

    Input  : -1018
    Output : 2

    Input  : 8462
    Output : 0

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to count odd digits in given number.
//  Input            : Integer iNo
//  Output           : Returns count of odd digits
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
//  Function Name    : CountOdd
//  Description      : Counts odd digits in given number.
//  Input            : None (Uses class data member)
//  Output           : Returns count of odd digits
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int CountOdd()
        {
            int iDigit = 0;
            int iCount = 0;

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

                if(iDigit % 2 != 0)
                {
                    iCount++;
                }

                iNo = iNo / 10;
            }

            return iCount;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Count odd digits using OOP
//  Description      : This application accepts a number from user, creates an object of Number class,
//                     and counts odd digits from given number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Number nobj(iValue);

    iRet = nobj.CountOdd();

    cout << "Count of odd digits is : " << iRet << "\n";

    return 0;
}