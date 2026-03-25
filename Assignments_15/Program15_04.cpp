/* 
    4. Accept N numbers from user and accept Range, Display all elements from that range.

    Input    : N : 6
    Start    : 60
    End      : 90
    Elements : 85 66  3 76 93 88

    Output   : 85 66 76 88

    Input    : N : 6
    Start    : 30
    End      : 50
    Elements : 85 66  3 76 93 88

    Output   : 

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to display all elements from the array which are within given range.
//  Input            : Integer array and range (start and end)
//  Output           : Displays elements within given range
//  Author           : Gavade Somanath Vilas
//  Date             : 25/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public:
        int *Arr;
        int iLength;
        int iStart, iEnd;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Number (Parameterized Constructor)
//  Description      : Initializes data members with given values.
//  Input            : Integer array, size, start range and end range
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Number(int A[], int B, int C, int D)
        {
            Arr = A;
            iLength = B;
            iStart = C;
            iEnd = D;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Range
//  Description      : Displays all elements which are within given range.
//  Input            : None (Uses class data members)
//  Output           : Prints elements within given range
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Range()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
                {
                    cout << Arr[iCnt] << "\t";
                }
            }
        }

};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Display elements within given range using OOP
//  Description      : This application accepts N numbers from user and range values,
//                     creates an object of Number class and displays elements within that range.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iSize = 0, iCnt = 0;
    int *ptr = NULL;

    cout << "Enter Number of elements : \n";
    cin >> iSize;

    cout << "Enter Starting Number : \n";
    cin >> iValue1;

    cout << "Enter Ending number : \n";
    cin >> iValue2;

    ptr = new int[iSize];

    cout << "Enter " << iSize << " elements : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> ptr[iCnt];
    }

    Number nobj(ptr, iSize, iValue1, iValue2);
    
    nobj.Range();

    return 0;
}