/* 
    1. Accept N numbers from user and accept one another number as NO ,check whether NO is present or not.

    Input    : N : 6
    NO       : 66  
    Elements : 85 66 3 66 93 88

    Output   : TRUE

    Input    : N : 6
    NO       : 12
    Elements : 85 11 3 15 11 111

    Output   : FALSE

*/

#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Number
//  Description      : Contains function to check whether given number is present in the array or not.
//  Input            : Integer array and number to search
//  Output           : Returns TRUE if number is present otherwise FALSE
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
//  Function Name    : CheckNo
//  Description      : Checks whether given number is present in the array or not.
//  Input            : None (Uses class data members)
//  Output           : Returns TRUE if number is present otherwise FALSE
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        BOOL CheckNo()
        {
            BOOL bFlag = FALSE;
            int iCnt = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    bFlag = TRUE;
                }
            }

            return bFlag;
        }

};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Check whether given number is present in array using OOP
//  Description      : This application accepts N numbers from user and another number as NO,
//                     creates an object of Number class and checks whether NO is present or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iSize = 0, iCnt = 0;
    int *ptr = NULL;
    BOOL bRet = FALSE;

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

    bRet = nobj.CheckNo();

    if(bRet == TRUE)
    {
        cout << "TRUE\n";
    }
    else
    {
        cout << "FALSE\n";
    }

    return 0;
}