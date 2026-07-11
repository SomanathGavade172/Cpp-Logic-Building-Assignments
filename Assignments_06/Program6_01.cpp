/*
    1. Write a program which accept number from user and if number is less than 50 then print small ,
       if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.

    Input  : 75

    Output : Medium
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to check whether the number is Small, Medium or Large.
//  Input            : Integer iNo
//  Output           : Prints Small, Medium or Large on screen
//  Author           : Gavade Somanath Vilas
//  Date             : 14/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Number (Parameterized Constructor)
//  Description      : Initializes data member with the given integer value.
//  Input            : Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Number(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Display
//  Description      : Checks the number and prints Small, Medium or Large.
//  Input            : None (Uses class data member)
//  Output           : Displays result on screen
//  Time Complexity  : O(1)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        void Display()
        {
            if(iNo < 0)
            {
                iNo = -(iNo);
            }

            if(iNo < 50)
            {
                cout << "Small\n";
            }
            else if((iNo > 50) && (iNo < 100))
            {
                cout << "Medium\n";
            }
            else
            {
                cout << "Large\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Number Classification using OOP
//  Description      : This application accepts a number from user, creates an object of Number class,
//                     and displays whether the number is Small, Medium or Large.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Number nobj(iValue);

    nobj.Display();

    return 0;
}