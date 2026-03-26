/* 
    2. Accept N numbers from user and return the smallest number.

    Input     : N : 6

    Elements  : 85 66 3 66 93 88

    Output    : 3

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to return smallest number from the array.
//  Input            : Integer array
//  Output           : Returns smallest number
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
//  Function Name    : Minimum
//  Description      : Returns smallest number from the array.
//  Input            : None (Uses class data members)
//  Output           : Returns smallest element from array
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int Minimum()
        {
            int iCnt = 0;
            int iMin = Arr[0];

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(iMin > Arr[iCnt])
                {
                    iMin = Arr[iCnt];
                }
            }

            return iMin;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Find smallest number from array using OOP
//  Description      : This application accepts N numbers from user,
//                     creates an object of Number class and returns smallest number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    cout << "Enter number of elements : \n";
    cin >> iSize;

    ptr = new int[iSize];

    cout << "Enter " << iSize << " elements : \n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> ptr[iCnt];
    }

    Number nobj(ptr, iSize);

    iRet = nobj.Minimum();

    cout << "Smallest element is : " << iRet << "\n";

    return 0;
}