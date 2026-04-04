/* 
    3. Accept number of rows and number of columns from user and display below pattern.

    Input  : iRow = 5 iCol = 5

    Output :    
                a   b   c   d   e
                1   2   3   4   5
                a   b   c   d   e
                1   2   3   4   5
                a   b   c   d   e
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Pattern
//  Description      : Contains function to print small alphabets in odd rows and numbers in even rows using rows and columns.
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
//  Description      : Prints small alphabets in odd rows and numbers in even rows.
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
                for(j = 1, Ch = 'a'; j <= iCol; j++, Ch++)
                {
                    if(i % 2 != 0)
                    {
                        cout << Ch << "\t";
                    }
                    else
                    {
                        cout << j << "\t";
                    }
                }
                cout << "\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Row and Column alphabet-number pattern printing using OOP
//  Description      : This application accepts number of rows and columns from user, creates an object of Pattern class and prints alphabet-number pattern.
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