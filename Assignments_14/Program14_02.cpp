/* 
    2. Accept N numbers from user and return difference between frequency of even number and odd numbers.
    
    Input    : N : 7

    Elements : 85 66 3 80 93 88 90

    Output   : 1 (4 - 3)

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to return difference between frequency of even and odd numbers.
//  Input            : Integer array
//  Output           : Returns difference between count of even and odd numbers
//  Author           : Gavade Somanath Vilas
//  Date             : 24/03/2026
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
//  Description      : Calculates difference between frequency of even and odd numbers from the array.
//  Input            : None (Uses class data members)
//  Output           : Returns difference between count of even and odd numbers
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int Difference()
        {
            int iCnt = 0, iCountEven = 0, iCountOdd = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iCountEven++;
                }
                else
                {
                    iCountOdd++;
                }
            }

            return iCountEven - iCountOdd;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Difference between frequency of even and odd numbers using OOP
//  Description      : This application accepts N numbers from user, creates an object of Number class,
//                     and returns difference between frequency of even and odd numbers.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr;

    cout << "Enter a number of elements : ";
    cin >> iSize;

    ptr = new int[iSize];

    if(ptr == NULL)
    {
        cout << "Unable to allocate memory\n";
        return -1;
    }

    cout << "Enter " << iSize << " elements : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> ptr[iCnt];
    }

    Number nobj(ptr, iSize);

    iRet = nobj.Difference();

    cout << "Difference between frequency of even and odd numbers is : " << iRet << "\n";

    return 0;
}