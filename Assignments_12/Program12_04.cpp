/* 
    4.Write a program which accept number from user and return multiplication of all digits. 

    Input  : 2395
    Output : 270

    Input  : 1018
    Output : 8

    Input  : 9440
    Output : 144

    Input  : 922432
    Output : 864

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to multiply all digits in given number.
//  Input            : Integer iNo
//  Output           : Returns multiplication of digits
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
//  Function Name    : MultiplyDigits
//  Description      : Multiplies all digits in given number.
//  Input            : None (Uses class data member)
//  Output           : Returns multiplication of digits
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int MultiplyDigits()
        {
            int iDigit = 0;
            int iMulti = 1;

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

                if(iDigit != 0)
                {
                    iMulti = iMulti * iDigit;
                }
                
                iNo = iNo / 10;
            }

            return iMulti;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Multiply digits using OOP
//  Description      : This application accepts a number from user, creates an object of Number class,
//                     and multiplies all digits from given number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Number nobj(iValue);

    iRet = nobj.MultiplyDigits();

    cout << "Multiplication of digits is : " << iRet << "\n";

    return 0;
}