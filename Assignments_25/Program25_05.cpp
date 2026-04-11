/* 
    5. Accept number of rows and number of columns from user and display below pattern.

    Input : iRow = 4 iCol = 4

    Output : 
                1 2 3 4 5
                1     4 5
                1   3   5
                1 2     5
                1 2 3 4 5

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Pattern
//  Description      : Contains function to print hollow square pattern with numbers on border and secondary diagonal.
//  Input            : Integer values (Row and Column)
//  Output           : Prints pattern on screen
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
//  Description      : Prints pattern where numbers are printed on first row, last row, first column, last column and secondary diagonal (i + j == iCol + 2).
//                     Remaining positions are printed as blank spaces.
//  Input            : None (Uses class data members)
//  Output           : Prints pattern on screen
//  Time Complexity  : O(N^2)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Display()
        {
            int i = 0, j = 0;

            for(i = 1; i <= iRow + 1; i++)
            {
                for(j = 1; j <= iCol + 1; j++)
                {
                    if(i == 1 || i == iRow + 1 || j == 1 || j == iCol + 1 || i + j == iCol + 2)
                    {
                        cout << j << "\t";
                    }
                    else
                    {
                        cout << " \t";
                    }
                }

                cout << "\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Hollow square with secondary diagonal number pattern printing using OOP
//  Description      : This application accepts number of rows and columns from user, creates an object of Pattern class and prints hollow square
//                     with numbers on border and secondary diagonal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter a number of Rows : \n";
    cin >> iValue1;

    cout << "Enter a number of Coloumns : \n";
    cin >> iValue2;

    Pattern pobj(iValue1, iValue2);

    pobj.Display();

    return 0;
}