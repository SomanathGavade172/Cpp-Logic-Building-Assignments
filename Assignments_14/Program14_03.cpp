/* 
    3. Accept N numbers from user check whether that numbers contains 11 in it or not.
    
    Input    : N : 6

    Elements : 85 66 11 80 93 88
    Output   : 11 is present

    Input    : N : 6

    Elements : 85 66 3 80 93 88

    Output   : 11 is absent

*/

#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to check whether number 11 is present in the array or not.
//  Input            : Integer array
//  Output           : Returns TRUE if 11 is present otherwise FALSE
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
//  Description      : Checks whether number 11 is present in the array.
//  Input            : None (Uses class data members)
//  Output           : Returns TRUE if 11 is present otherwise FALSE
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        BOOL ChkNumber()
        {
            int iCnt = 0;
            BOOL bFlag = FALSE;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt] == 11)
                {
                    bFlag = TRUE;
                }                
            }

            return bFlag;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Check whether 11 is present in array using OOP
//  Description      : This application accepts N numbers from user, creates an object of Number class,
//                     and checks whether number 11 is present in the array or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;
    BOOL bRet = FALSE;

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

    bRet = nobj.ChkNumber();

    if(bRet == TRUE)
    {
        cout << "11 is present\n";
    }
    else
    {
        cout << "11 is absent\n";
    }

    return 0;
}