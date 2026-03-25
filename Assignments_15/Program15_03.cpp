/* 
    3. Accept N numbers from user and accept one another number as NO ,return index of last occurrence of that NO.

    Input    : N : 6
    NO       : 66
    Elements : 85 66 3 66 93 88

    Output   : 3

    Input    : N : 6
    NO       : 93
    Elements : 85 66 3 66 93 88 74

    Output   : 4

    Input    : N : 6
    NO       : 12
    Elements : 85 11 3 15 11 111

    Output   : -1

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to return index of last occurrence of given number from the array.
//  Input            : Integer array and number to search
//  Output           : Returns index of last occurrence of given number
//  Author           : Gavade Somanath Vilas
//  Date             : 25/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Number
{
    public:
        int *Arr;
        int iLength;
        int iNo;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Number (Parameterized Constructor)
//  Description      : Initializes data members with given values.
//  Input            : Integer array, size and number to search
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Number(int A[], int B, int C)
        {
            Arr = A;
            iLength = B;
            iNo = C;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : LastOcc
//  Description      : Returns index of last occurrence of given number from the array.
//  Input            : None (Uses class data members)
//  Output           : Returns index of last occurrence, otherwise -1 if number is not present
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int LastOcc()
        {
            int iCnt = 0, iIndex = -1;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    iIndex = iCnt;
                }
            }

            return iIndex;
        }

};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Find last occurrence of given number in array using OOP
//  Description      : This application accepts N numbers from user and another number as NO,
//                     creates an object of Number class and returns index of last occurrence of NO.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    cout << "Enter Number of elements : \n";
    cin >> iSize;

    cout << "Enter number that you want to search : \n";
    cin >> iValue;

    ptr = new int[iSize];

    cout << "Enter " << iSize << " elements : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> ptr[iCnt];
    }

    Number nobj(ptr, iSize, iValue);

    iRet = nobj.LastOcc();

    cout << "Last occurrence index is : " << iRet << "\n";

    return 0;
}