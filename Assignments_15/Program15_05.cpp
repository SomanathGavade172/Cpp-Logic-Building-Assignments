/* 
    5. Accept N numbers from user and return product of all odd elements.

    Input    : N : 6
    Elements : 15 66 3 70 10 88

    Output   : 45

    Input    : N : 6
    Elements : 44 66 72 70 10 
    
    Output   : 0

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to return product of all odd elements from the array.
//  Input            : Integer array
//  Output           : Returns product of odd elements
//  Author           : Gavade Somanath Vilas
//  Date             : 25/03/2026
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
//  Function Name    : Product
//  Description      : Returns product of all odd elements from the array.
//  Input            : None (Uses class data members)
//  Output           : Returns product of odd elements, otherwise 0 if no odd element found
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int Product()
        {
            int iCnt = 0;
            int iMulti = 1;
            bool bFlag = false;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if((Arr[iCnt] % 2) != 0)
                {
                    iMulti = iMulti * Arr[iCnt];
                    bFlag = true;
                }
            }

            if(bFlag == false)
            {
                return 0;
            }

            return iMulti;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Product of odd elements using OOP
//  Description      : This application accepts N numbers from user,
//                     creates an object of Number class and returns product of odd elements.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    cout << "Enter Number of elements : \n";
    cin >> iSize;

    ptr = new int[iSize];

    cout << "Enter " << iSize << " elements : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> ptr[iCnt];
    }

    Number nobj(ptr, iSize);
    
    iRet = nobj.Product();

    cout << "Product of odd numbers is : " << iRet << "\n";

    return 0;
}