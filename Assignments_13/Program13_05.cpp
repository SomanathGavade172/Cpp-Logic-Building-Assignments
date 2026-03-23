/*  
    5. Accept N numbers from user and display all such elements which are multiples of 11.
    
    Input    : N : 6

    Elements : 85 66 3 55 93 88

    Output   : 66 55 88

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to display elements which are multiples of 11.
//  Input            : Integer array
//  Output           : Displays elements which are multiples of 11
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
//  Function Name    : MultipleOfEleven
//  Description      : Displays all elements which are multiples of 11.
//  Input            : None (Uses class data members)
//  Output           : Displays elements which are multiples of 11
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void MultipleOfEleven()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt] % 11 == 0)
                {
                    cout << Arr[iCnt] << "\t";
                }                
            }

            cout << "\n";
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Display elements which are multiples of 11 using OOP
//  Description      : This application accepts N numbers from user, creates an object of Number class,
//                     and displays all elements which are multiples of 11.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
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

    cout << "Elements which are multiples of 11 are : \n";
    nobj.MultipleOfEleven();

    delete []ptr;

    return 0;
}