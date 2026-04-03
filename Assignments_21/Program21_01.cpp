/* 
    1. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 4 iCol = 4

    Output :    
                A   B   C   D
                A   B   C   D
                A   B   C   D
                A   B   C   D

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Pattern
//  Description      : Contains function to print alphabet pattern using rows and columns.
//  Input            : Integer values (Row and Column)
//  Output           : Prints pattern on screen
//  Author           : Gavade Somanath Vilas
//  Date             : 03/04/2026
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
//  Description      : Prints alphabets from A onwards for each column in every row.
//  Input            : None (Uses class data members)
//  Output           : Prints pattern on screen
//  Time Complexity  : O(N^2)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Display()
        {
            int i = 0, j = 0;
            char Ch = '\0';

            for(i = 1; i <= iRow; i++)
            {
                for(j = 1, Ch = 'A'; j <= iCol; j++, Ch++)
                {
                    cout << Ch << "\t";
                }
                cout << "\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Row and Column alphabet pattern printing using OOP
//  Description      : This application accepts number of rows and columns from user, creates an object of Pattern class and prints alphabet pattern.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter Number of Rows : \n";
    cin >> iValue1;

    cout << "Enter Number of Coloumns : \n";
    cin >> iValue2;

    Pattern pobj(iValue1, iValue2);

    pobj.Display();

    return 0;
}