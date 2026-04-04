/*
    2. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 4 iCol = 5

    Output :    
                2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Pattern
//  Description      : Contains function to print even numbers in odd rows and odd numbers in even rows using rows and columns.
//  Input            : Integer values (Row and Column)
//  Output           : Prints pattern on screen
//  Author           : Gavade Somanath Vilas
//  Date             : 04/04/2026
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
//  Description      : Prints even numbers in odd rows and odd numbers in even rows.
//  Input            : None (Uses class data members)
//  Output           : Prints pattern on screen
//  Time Complexity  : O(N^2)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Display()
        {
            int i = 0, j = 0;
            int iEven = 0, iOdd = 0;

            for(i = 1; i <= iRow; i++)
            {
                iEven = 2, iOdd = 1;

                for(j = 1; j <= iCol; j++)
                {
                    if(i % 2 != 0)
                    {
                        cout << iEven << "\t";
                        iEven += 2;
                    }
                    else
                    {
                        cout << iOdd << "\t";
                        iOdd += 2;
                    }
                }
                cout << "\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Row and Column even-odd number pattern printing using OOP
//  Description      : This application accepts number of rows and columns from user, creates an object of Pattern class and prints even-odd number pattern.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter number of Rows : \n";
    cin >> iValue1;

    cout << "Enter Number of Coloumns : \n";
    cin >> iValue2;

    Pattern pobj(iValue1, iValue2);

    pobj.Display();

    return 0;
}