/* 
    1.Write a program which accept number from user and return the count of even digits.

        Input  : 2395
        Output : 1

        Input  : 1018
        Output : 2

        Input  : -1018
        Output : 2

        Input  : 8462
        Output : 4

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to count even digits in given number.
//  Input            : Integer iNo
//  Output           : Returns count of even digits
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
//  Function Name    : Counteven
//  Description      : Counts even digits in given number.
//  Input            : None (Uses class data member)
//  Output           : Returns count of even digits
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int Counteven()
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
                return 1;
            }            

            while(iNo != 0)
            {
                iDigit = iNo % 10;

                if(iDigit % 2 == 0)
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
//  Application Name : Count even digits using OOP
//  Description      : This application accepts a number from user, creates an object of Number class,
//                     and counts even digits from given number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Number nobj(iValue);

    iRet = nobj.Counteven();

    cout << "Count of even digits is : " << iRet << "\n";

    return 0;
}