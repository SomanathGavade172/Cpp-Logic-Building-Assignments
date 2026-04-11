/* 
    1. Write a program which displays ASCII table. Table contains Symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Pattern
//  Description      : Contains function to print ASCII table with Symbol, Decimal, Hexadecimal and Octal values from 0 to 255.
//  Input            : None
//  Output           : Prints ASCII table on screen
//  Author           : Gavade Somanath Vilas
//  Date             : 11/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public:
        int iRow;
        int iCol;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Pattern (Parameterized Constructor)
//  Description      : Initializes data members with given values.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Pattern(int A, int B)
        {
            iRow = A;
            iCol = B;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Display
//  Description      : Prints ASCII table where each value from 0 to 255 is displayed with its Symbol, Decimal, Hexadecimal and Octal representation.
//  Input            : None (Uses loop variable)
//  Output           : Prints ASCII table on screen
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Display()
        {
            int iCnt = 0;
            char Ch = '\0';

            cout<<"Symbol\tDecimal\tHexadecimal\tOctal\n";
            cout<<"------------------------------------------------\n";

            for(iCnt = 0; iCnt <= 255; iCnt++)
            {
                Ch = iCnt;

                cout<< Ch << "\t";
                cout<< dec << iCnt << "\t";
                cout<< hex << iCnt << "\t\t";
                cout<< oct << iCnt << "\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : ASCII table printing using OOP
//  Description      : This application creates an object of Pattern class and prints ASCII table  containing Symbol, Decimal, Hexadecimal
//                     and Octal representation.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter number of Rows : \n";
    cin>>iValue1;

    cout<<"Enter number of coloumns : \n";
    cin>>iValue2;

    Pattern pobj(iValue1, iValue2);

    pobj.Display();

    return 0;
}