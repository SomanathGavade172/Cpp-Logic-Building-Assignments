/* 
    1.Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TRUE otherwise return FALSE.

    Input  : 10 2
    Output : TRUE
    
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Bit
//  Description      : Contains function to check whether bit at given position is ON or OFF.
//  Input            : Unsigned Integer and Position
//  Output           : Returns TRUE if bit is ON, otherwise FALSE
//  Author           : Gavade Somanath Vilas
//  Date             : 05/05/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Bit
{
    public:
        UINT iNo;
        UINT iPos;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Bit (Parameterized Constructor)
//  Description      : Initializes data members with given number and position.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Bit(UINT A, UINT B)
        {
            iNo = A;
            iPos = B;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : CheckBit
//  Description      : Checks whether bit at specified position is ON or OFF.
//  Input            : None
//  Output           : TRUE if bit is ON, FALSE otherwise
//  Time Complexity  : O(1)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        bool CheckBit()
        {
            UINT iMask = 0x1;
            UINT iResult = 0;

            iMask = iMask << (iPos - 1);

            iResult = iNo & iMask;

            if(iResult == iMask)
            {
                return true;
            }
            else
            {
                return false;
            }            
        }        
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Check Bit at Given Position using OOP
//  Description      : This application accepts a number and position and checks whether that bit is ON or OFF.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iLocation = 0;
    bool bRet = false;

    cout << "Enter a Number : \n";
    cin >> iValue;

    cout << "Enter a Position : \n";
    cin >> iLocation;

    Bit bobj(iValue, iLocation);

    bRet = bobj.CheckBit();

    if(bRet == true)
    {
        cout << "TRUE\n";
    }
    else
    {
        cout << "FALSE\n";
    }

    return 0;
}