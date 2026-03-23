/* 
    3. Accept N numbers from user and display all such elements which are even and divisible by 5.
    
    Input    : N : 6

    Elements : 85 66 3 80 93 88

    Output   : 80

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to display elements which are even and divisible by 5.
//  Input            : Integer array
//  Output           : Displays elements which are even and divisible by 5
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
//  Function Name    : EvenDivisibleByFive
//  Description      : Displays all elements which are even and divisible by 5.
//  Input            : None (Uses class data members)
//  Output           : Displays elements which are even and divisible by 5
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void EvenDivisibleByFive()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 2 == 0))
                {
                    cout << Arr[iCnt] << "\t";
                }                
            }

            cout << "\n";
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Display elements which are even and divisible by 5 using OOP
//  Description      : This application accepts N numbers from user, creates an object of Number class,
//                     and displays all elements which are even and divisible by 5.
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

    cout << "Elements which are even and divisible by 5 are : \n";
    nobj.EvenDivisibleByFive();

    delete []ptr;

    return 0;
}