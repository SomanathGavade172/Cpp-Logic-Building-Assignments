/* 
    1.Write a program which accept number from user and display below pattern.

    Input  : 5
    Output : * * * * * # # # # #

    Input  : 6
    Output : * * * * * * # # # # # #

    Input  :-5
    Output : * * * * * # # # # #

    Input  : 2
    Output : * * # #
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Pattern
//  Description      : Contains function to display pattern of '*' and '#' based on given number.
//  Input            : Integer iNo
//  Output           : Prints pattern on screen
//  Author           : Gavade Somanath Vilas
//  Date             : 15/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public:
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Pattern (Parameterized Constructor)
//  Description      : Initializes data member with the given integer value.
//  Input            : Integer
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Pattern(int A)
        {
            iNo = A;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Display
//  Description      : Displays '*' pattern first and then '#' pattern equal to the given number.
//  Input            : None (Uses class data member)
//  Output           : Displays pattern on screen
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition
        void Display()
        {
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -(iNo);
            }

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout << "*\t";
            }

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout << "#\t";
            }

            cout << "\n";
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Pattern Display using OOP
//  Description      : This application accepts a number from user, creates an object of Pattern class,
//                     and displays '*' and '#' pattern based on the given number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter a Number : \n";
    cin >> iValue;

    Pattern pobj(iValue);

    pobj.Display();

    return 0;
}