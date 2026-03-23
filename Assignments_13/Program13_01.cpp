/* 
    1. Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

    Input    : N : 6

    Elements : 85 66 3 80 93 88

    Output   : 53 (234 - 181)

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to calculate difference between summation of even elements and odd elements.
//  Input            : Integer array
//  Output           : Returns difference (Even Sum - Odd Sum)
//  Author           : Gavade Somanath Vilas
//  Date             : 23/03/2026
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
//  Function Name    : Difference
//  Description      : Calculates difference between summation of even elements and odd elements.
//  Input            : None (Uses class data members)
//  Output           : Returns difference (Even Sum - Odd Sum)
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int Difference()
        {
            int iSumEven = 0, iSumOdd = 0, iCnt = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iSumEven = iSumEven + Arr[iCnt];
                }
                else
                {
                    iSumOdd = iSumOdd + Arr[iCnt];
                }
            }

            return iSumEven - iSumOdd;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Difference between even and odd element sum using OOP
//  Description      : This application accepts N numbers from user, creates an object of Number class,
//                     and returns difference between summation of even elements and odd elements.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    cout << "Enter Number of elements : \n";
    cin >> iSize;

    ptr = new int[iSize];

    cout << "Enter elements : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> ptr[iCnt];
    }

    Number nobj(ptr, iSize);

    iRet = nobj.Difference();

    cout << "Difference is : " << iRet << "\n";

    delete []ptr;

    return 0;
}