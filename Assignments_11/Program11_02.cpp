/* 
    2.Write a program which accept number from user and check whether it contains 0 in it or not.

    Input  : 2395
    Output : There is no Zero

    Input  : 1018
    Output : It Contains Zero

    Input  : 9000
    Output : It Contains Zero

    Input  : 10687
    Output : It Contains Zero

*/

#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to check whether number contains zero or not.
//  Input            : Integer iNo
//  Output           : Returns TRUE if zero is present, otherwise FALSE
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
//  Function Name    : ChkZero
//  Description      : Checks whether given number contains zero or not.
//  Input            : None (Uses class data member)
//  Output           : Returns TRUE if zero is present, otherwise FALSE
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        BOOL ChkZero()
        {
            int iDigit = 0;
            BOOL bFlag = FALSE;

            if(iNo < 0)
            {
                iNo = -(iNo);
            }
            
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                
                if(iDigit == 0)
                {
                    bFlag = TRUE;
                    break;
                }

                iNo = iNo / 10;
            }

            return bFlag;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Check whether number contains zero using OOP
//  Description      : This application accepts a number from user, creates an object of Number class,
//                     and checks whether it contains zero or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Number nobj(iValue);

    bRet = nobj.ChkZero();

    if(bRet == TRUE)
    {
        cout << "It Contains Zero\n";
    }
    else
    {
        cout << "There is no Zero\n";
    }

    return 0;
}