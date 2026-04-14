/*
    3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

    Input  : "MarvellouS"
    Output : 6 (8 - 2)
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : String
//  Description      : Contains function to calculate difference between number of small and capital characters.
//  Input            : Character array (string)
//  Output           : Returns difference (small - capital)
//  Author           : Gavade Somanath Vilas
//  Date             : 14/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class String
{
    public:
        char *str;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : String (Parameterized Constructor)
//  Description      : Initializes data member with given string.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        String(char Arr[])
        {
            str = Arr;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Difference
//  Description      : Counts small and capital characters and returns their difference (small - capital).
//  Input            : None
//  Output           : Integer (difference)
//  Time Complexity  : O(N)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int Difference()
        {
            int iCountCapital = 0, iCountSmall = 0;

            if(str == NULL)
            {
                cout << "Invalid Input\n";
                return;
            }

            while(*str != '\0')
            {
                if(*str >= 'A' && *str <= 'Z')
                {
                    iCountCapital++;
                }
                else if(*str >= 'a' && *str <= 'z')
                {
                    iCountSmall++;
                }
                str++;
            }

            return iCountSmall - iCountCapital;
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Difference between small and capital characters using OOP
//  Description      : This application accepts string from user and returns difference between small and capital characters.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50];
    int iRet = 0;

    cout << "Enter a string : \n";
    cin.getline(Arr, 50);

    String sobj(Arr);

    iRet = sobj.Difference();

    cout << "Difference between small and capital letters is : " << iRet << "\n";

    return 0;
}