/*
    4. Accept two numbers from user and display first number second number of times.

    Input  : 12    5
    Output : 12    12    12    12    12 

    Input  : -2    3    
    Output : -2    -2    -2

    Input  : -2    0
    Output : 

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to display the first number second number of times.
//  Input            : Integer iNo1 - Number to be displayed
//                     Integer iNo2 - Number of times to display
//  Output           : None (Prints result on console)
//  Author           : Gavade Somanath Vilas
//  Date             : 09/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public:
        int iNo1, iNo2;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Number (Parameterized Constructor)
//  Description      : Initializes data members with the given integer values.
//  Input            : Two integers
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Number(int A, int B)
        {
            iNo1 = A;
            iNo2 = B;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Display
//  Description      : Prints the first number second number of times on the screen.
//  Input            : None (Uses class data members)
//  Output           : None (Prints numbers on console)
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Function Definition

        void Display()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= iNo2; iCnt++)
            {
                cout << iNo1 << "\t";
            }            
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Display Number Multiple Times using OOP
//  Description      : This application accepts two integers from user, creates an object of Number class,
//                     and prints the first number second number of times.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter First Number : \n";
    cin >> iValue1;

    cout << "Enter Second Number : \n";
    cin >> iValue2;

    // Create a object of a Class
    Number nobj(iValue1, iValue2);

    nobj.Display();         //  Function Call

    return 0;
}