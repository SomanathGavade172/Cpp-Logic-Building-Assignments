/* 
    3. Accept N numbers from user and return the difference between largest and smallest number.
    
    Input : N : 6

    Elements : 85 66 3 66 93 88 90

    Output : 90 (93 - 3)

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to return difference between largest and smallest number from the array.
//  Input            : Integer array
//  Output           : Returns difference between largest and smallest element
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
//  Function Name    : Difference
//  Description      : Returns difference between largest and smallest number from the array.
//  Input            : None (Uses class data members)
//  Output           : Returns difference (Maximum - Minimum)
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int Difference()
        {
            int iCnt = 0;
            int iMin = Arr[0];
            int iMax = Arr[0];

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(iMax < Arr[iCnt])
                {
                    iMax = Arr[iCnt];
                }
                else if(iMin > Arr[iCnt])
                {
                    iMin = Arr[iCnt];
                }
            }

            return iMax - iMin;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Difference between largest and smallest number using OOP
//  Description      : This application accepts N numbers from user,
//                     creates an object of Number class and returns difference between largest and smallest number.
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

    iRet = nobj.Difference();

    cout << "Difference between Largest and Smallest element is : " << iRet << "\n";

    return 0;
}