/* 
    5. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 4 iCol = 4

    Output :    
                1   1   1   1
                2   2   2   2
                3   3   3   3
                4   4   4   4
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Patter
//  Description      : Contains function to print row-wise number pattern using rows and columns.
//  Input            : Integer values (Row and Column)
//  Output           : Prints pattern on screen
//  Author           : Gavade Somanath Vilas
//  Date             : 31/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Patter
{
    public:
        int iRow = 0;
        int iCol = 0;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Patter (Parameterized Constructor)
//  Description      : Initializes data members with given values.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Patter(int A, int B)
        {
            iRow = A;
            iCol = B;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Display
//  Description      : Prints row number repeatedly for each column.
//  Input            : None (Uses class data members)
//  Output           : Prints pattern on screen
//  Time Complexity  : O(N^2)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Display()
        {
            int i = 0, j = 0;

            for(i = 1; i <= iRow; i++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    cout << i << "\t";                    
                }

                cout << "\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Row and Column row-wise number pattern printing using OOP
//  Description      : This application accepts number of rows and columns from user, creates an object of Patter class and prints row-wise number pattern.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter number of Rows : \n";
    cin >> iValue1;

    cout << "Enter number of Coloumns : \n";
    cin >> iValue2;

    Patter pobj(iValue1, iValue2);

    pobj.Display();

    return 0;
}