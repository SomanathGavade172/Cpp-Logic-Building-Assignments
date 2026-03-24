/* 
    4. Accept N numbers from user and return frequency of 11 from it.
    
    Input    : N : 6

    Elements : 85 66 3 15 93 88
    Output   : 0

    Input    : N : 6

    Elements : 85 11 3 15 11 111
    Output   : 2

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to count frequency of number 11 from the array.
//  Input            : Integer array
//  Output           : Returns count of number 11
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
//  Function Name    : ChkNumber
//  Description      : Counts frequency of number 11 from the array.
//  Input            : None (Uses class data members)
//  Output           : Returns count of number 11
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int Frequency()
        {
            int iCnt = 0, iCount = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt] == 11)
                {
                    iCount++;
                }                
            }

            return iCount;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Count frequency of 11 in array using OOP
//  Description      : This application accepts N numbers from user, creates an object of Number class,
//                     and returns frequency of number 11 from the array.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

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

    iRet = nobj.Frequency();

    cout << "Frequency of 11 is : " << iRet << "\n";

    return 0;
}