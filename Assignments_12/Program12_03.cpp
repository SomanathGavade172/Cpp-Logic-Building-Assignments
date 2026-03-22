/* 
    3.Write a program which accept number from user and return the count of digits in between 3 and 7.

    Input   : 2395
    Output  : 1

    Input   : 1018
    Output  : 0

    Input   : 4521
    Output  : 2
    
    Input   : 9922
    Output  : 0

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to count digits in between 3 and 7 in given number.
//  Input            : Integer iNo
//  Output           : Returns count of digits in between 3 and 7
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
//  Function Name    : CountBetween3And7
//  Description      : Counts digits in between 3 and 7 in given number.
//  Input            : None (Uses class data member)
//  Output           : Returns count of digits between 3 and 7
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int CountBetween3And7()
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

                if(iDigit > 3 && iDigit < 7)
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
//  Application Name : Count digits between 3 and 7 using OOP
//  Description      : This application accepts a number from user, creates an object of Number class,
//                     and counts digits between 3 and 7 from given number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Number nobj(iValue);

    iRet = nobj.CountBetween3And7();

    cout << "Count of digits between 3 and 7 is : " << iRet << "\n";

    return 0;
}