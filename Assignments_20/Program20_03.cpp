/* 
    3. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 3 iCol = 5

    Output :    
                5   4   3   2   1
                5   4   3   2   1
                5   4   3   2   1
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Patter
//  Description      : Contains function to print reverse number pattern using rows and columns.
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
//  Description      : Prints numbers in reverse order from column value to 1 for each row.
//  Input            : None (Uses class data members)
//  Output           : Prints pattern on screen
//  Time Complexity  : O(N^2)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Display()
        {
            int i = 0, j = 0;

            for(i = iRow; i >= 1; i--)
            {
                for(j = iCol; j >= 1; j--)
                {
                    cout << j << "\t";
                }

                cout << "\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Row and Column reverse number pattern printing using OOP
//  Description      : This application accepts number of rows and columns from user, creates an object of Patter class and prints reverse number pattern.
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