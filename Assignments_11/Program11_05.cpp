/* 
    5.Write a program which accept number from user and count frequency of such a digits which are less than 6.

    Input  : 2395
    Output : 3

    Input  : 1018
    Output : 3

    Input  : 9440
    Output : 3

    Input  : 96672
    Output : 1

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to count digits which are less than 6 in given number.
//  Input            : Integer iNo
//  Output           : Returns count of digits less than 6
//  Author           : Gavade Somanath Vilas
//  Date             : 20/03/2026
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
//  Function Name    : CountLessThanSix
//  Description      : Counts digits which are less than 6 in given number.
//  Input            : None (Uses class data member)
//  Output           : Returns count of digits less than 6
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int CountFour()
        {
            int iDigit = 0;
            int iCount = 0;

            if(iNo < 0)
            {
                iNo = -(iNo);
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                
                if(iDigit < 6)
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
//  Application Name : Count digits less than 6 using OOP
//  Description      : This application accepts a number from user, creates an object of Number class,
//                     and counts digits which are less than 6.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Number nobj(iValue);

    iRet = nobj.CountFour();

    cout << "Count of digits less than 6 is : " << iRet << "\n";

    return 0;
}