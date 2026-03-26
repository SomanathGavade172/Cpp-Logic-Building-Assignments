/* 
    4. Accept N numbers from user and display all such numbers which contains 3 digits in it.

    Input    : N : 6

    Elements : 8225 665 3 76 953 858

    Output   : 665 953 858

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to display all numbers which contain exactly 3 digits.
//  Input            : Integer array
//  Output           : Displays 3 digit numbers from array
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
//  Description      : Displays all numbers which contain exactly 3 digits.
//  Input            : None (Uses class data members)
//  Output           : Prints 3 digit numbers from array
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void Digit()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if((Arr[iCnt] >= 100) && (Arr[iCnt] <= 999))
                {
                    cout << Arr[iCnt] << "\t";
                }
            }

            cout << "\n";
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Display numbers having 3 digits using OOP
//  Description      : This application accepts N numbers from user,
//                     creates an object of Number class and displays numbers which contain 3 digits.
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