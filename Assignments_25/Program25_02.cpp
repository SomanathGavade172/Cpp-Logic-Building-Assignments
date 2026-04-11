/* 
    2. Accept number of rows and number of columns from the user and display the following pattern.

    Input  : iRow = 4   iCol = 4

    Output :    * * * #
                * * # @
                * # @ @
                # @ @ @

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Pattern
//  Description      : Contains function to print pattern where # appears on diagonal, * appears below diagonal and @ appears above diagonal.
//  Input            : Integer values (Row and Column)
//  Output           : Prints pattern on screen
//  Author           : Gavade Somanath Vilas
//  Date             : 09/04/2026
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
//  Description      : Prints pattern where # is printed when row number equals column number, * is printed when row number is greater than column number,
//                     and @ is printed when column number is greater than row number.
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
                cout << "Invalid Input\n";
                return;
            }

            for(i = iRow; i >= 1; i--)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if(i == j)
                    {
                        cout << "#\t";
                    }
                    else if(i > j)
                    {
                        cout << "*\t";
                    }
                    else
                    {
                        cout << "@\t";
                    }
                }

                cout << "\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Diagonal mixed symbol pattern printing using OOP
//  Description      : This application accepts number of rows and columns from user, creates an object of Pattern class and prints # on diagonal,
//                     * below diagonal and @ above diagonal.
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