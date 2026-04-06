/* 
    3. Accept number of rows and number of columns from user and display below pattern. 

    Input  : iRow = 5, iCol = 5

    Output :    
                $ * * * *
                # $ * * *
                # # $ * *
                # # # $ *
                # # # # $

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Pattern
//  Description      : Contains function to print pattern where $ appears on main diagonal,
//                     * appears above diagonal and # appears below diagonal.
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
//  Description      : Prints pattern where $ is printed on main diagonal (i == j),
//                     * is printed when column number is greater than row number (i < j),
//                     and # is printed when row number is greater than column number (i > j).
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
                        cout << "$\t";
                    }
                    else if(i < j)
                    {
                        cout << "*\t";
                    }
                    else if(i > j)
                    {
                        cout << "#\t";
                    }
                }
                cout << "\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Diagonal mixed symbol pattern printing using OOP
//  Description      : This application accepts number of rows and columns from user, creates an object of 
//                     Pattern class and prints $ on diagonal, * above diagonal and # below diagonal.
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