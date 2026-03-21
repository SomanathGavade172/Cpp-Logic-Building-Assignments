/* 
    3.Write a program which accept number from user and count frequency of 2 in it.

    Input  : 2395
    Output : 1

    Input  : 1018
    Output : 0

    Input  : 9000
    Output : 0
     
    Input  : 922432
    Output : 3

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to count frequency of digit 2 in given number.
//  Input            : Integer iNo
//  Output           : Returns frequency of digit 2
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
//  Function Name    : CountTwo
//  Description      : Counts frequency of digit 2 in given number.
//  Input            : None (Uses class data member)
//  Output           : Returns frequency of digit 2
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int CountTwo()
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
                
                if(iDigit == 2)
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
//  Application Name : Count frequency of digit 2 using OOP
//  Description      : This application accepts a number from user, creates an object of Number class,
//                     and counts frequency of digit 2 in it.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Number nobj(iValue);

    iRet = nobj.CountTwo();

    cout << "Frequency of 2 is : " << iRet << "\n";

    return 0;
}