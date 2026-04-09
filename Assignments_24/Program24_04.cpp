/* 
    4. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 6, iCol = 6

    Output :    
                * * * * * *
                * *       *
                *   *     *
                *     *   *
                *       * *
                * * * * * *
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Pattern
//  Description      : Contains function to print pattern where * appears on border and on main diagonal,
//                     and remaining positions contain space.
//  Input            : Integer values (Row and Column)
//  Output           : Prints pattern on screen
//  Author           : Gavade Somanath Vilas
//  Date             : 06/04/2026
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
//  Description      : Prints pattern where * is printed on border 
//                     (first row, last row, first column, last column)
//                     and also on main diagonal (i == j).
//                     Remaining positions are printed as space.
//  Input            : None (Uses class data members)
//  Output           : Prints pattern on screen
//  Time Complexity  : O(N^2)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Display()
        {
            int i = 0, j = 0;

            if(iRow != iCol)
            {
                cout << "Invalid Input...!";
                return;
            }

            for(i = 1; i <= iRow; i++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if(i == j)
                    {
                        cout << "*\t";
                    }
                    else if(i == 1 || i == iRow || j == 1 || j == iCol)
                    {
                        cout << "*\t";
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
//  Application Name : Border and diagonal star pattern printing using OOP
//  Description      : This application accepts number of rows and columns from user, creates an object of 
//                     Pattern class and prints * on border and main diagonal.
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