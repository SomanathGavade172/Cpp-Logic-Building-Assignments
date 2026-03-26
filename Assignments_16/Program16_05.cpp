/* 
    5. Accept N numbers from user and display summation of digits of each number.

    Input    : N : 6

    Elements : 8225 665 3 76 953 858

    Output   : 17 17 3 13 17 21

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to display summation of digits of each number from the array.
//  Input            : Integer array
//  Output           : Displays sum of digits of each number
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
//  Function Name    : Digit
//  Description      : Displays summation of digits of each number from array.
//  Input            : None (Uses class data members)
//  Output           : Prints sum of digits of each element
//  Time Complexity  : O(N * D)  where D = number of digits
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Digit()
        {
            int iCnt = 0, iDigit = 0, iSum = 0, iNo = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                iNo = Arr[iCnt];
                iSum = 0;

                while(iNo != 0)
                {
                    iDigit = iNo % 10;
                    iSum = iSum + iDigit;
                    iNo = iNo / 10;
                }

                cout << iSum << "\t";
            }

            cout << "\n";
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Summation of digits of each number using OOP
//  Description      : This application accepts N numbers from user,
//                     creates an object of Number class and displays summation of digits of each number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
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

    nobj.Digit();

    return 0;
}