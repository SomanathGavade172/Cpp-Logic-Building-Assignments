/* 
    5. Accept N numbers from user and accept one another number as NO , return frequency of NO from it.

    Input : N        : 6
            NO       : 66
            Elements : 85 66 3 66 93 88
    Output : 2

    Input : N        : 6
            NO       : 12
            Elements : 85 11 3 15 11 111
    Output : 0

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to count frequency of given number from the array.
//  Input            : Integer array and number to search
//  Output           : Returns count of given number
//  Author           : Gavade Somanath Vilas
//  Date             : 24/03/2026
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
//  Function Name    : Frequency
//  Description      : Counts frequency of given number from the array.
//  Input            : None (Uses class data members)
//  Output           : Returns count of given number
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int Frequency()
        {
            int iCnt = 0, iCount = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    iCount++;
                }                
            }

            return iCount;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Count frequency of given number in array using OOP
//  Description      : This application accepts N numbers from user and another number as NO,
//                     creates an object of Number class and returns frequency of NO from the array.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;
    int iRet = 0;

    cout << "Enter a number of elements : ";
    cin >> iSize;

    cout << "Enter a number that you want to search : \n";
    cin >> iValue;

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

    Number nobj(ptr, iSize, iValue);

    iRet = nobj.Frequency();

    cout << "Frequency of " << iValue << " is : " << iRet << "\n";

    return 0;
}