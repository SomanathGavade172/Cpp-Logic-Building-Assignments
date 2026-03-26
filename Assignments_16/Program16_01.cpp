/* 
    1. Accept N numbers from user and return the largest number.

    Input    : N : 6

    Elements : 85 66 3 66 93 88

    Output   : 93

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to return largest number from the array.
//  Input            : Integer array
//  Output           : Returns largest number
//  Author           : Gavade Somanath Vilas
//  Date             : 26/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public:
        int *Arr;
        int iLength;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Number (Parameterized Constructor)
//  Description      : Initializes data members with given values.
//  Input            : Integer array and size
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Number(int A[], int B)
        {
            Arr = A;
            iLength = B;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Maximum
//  Description      : Returns largest number from the array.
//  Input            : None (Uses class data members)
//  Output           : Returns largest element from array
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int Maximum()
        {
            int iCnt = 0;
            int iMax = Arr[0];

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(iMax < Arr[iCnt])
                {
                    iMax = Arr[iCnt];
                }
            }

            return iMax;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Find largest number from array using OOP
//  Description      : This application accepts N numbers from user,
//                     creates an object of Number class and returns largest number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    cout << "Enter a number of elements : \n";
    cin >> iSize;

    ptr = new int[iSize];

    cout << "Enter " << iSize << " elements : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> ptr[iCnt];
    }

    Number nobj(ptr, iSize);

    iRet = nobj.Maximum();

    cout << "Maximum Number is : " << iRet << "\n";

    return 0;
}