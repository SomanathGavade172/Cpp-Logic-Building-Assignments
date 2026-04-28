/* 
    5. Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D. 
    Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive).

    Input  : C
    Output : Your exam at 9.20 AM

    Input  : d
    Output : Your exam at 10.30 AM

*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Character
//  Description      : Contains function to display exam timing based on division.
//  Input            : Character (Division)
//  Output           : Displays exam timing
//  Author           : Gavade Somanath Vilas
//  Date             : 28/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Character
{
    public:
        char Ch;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Constructor Name : Character (Parameterized Constructor)
//  Description      : Initializes data member with given character.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Character(char c)
        {
            Ch = c;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : DisplaySchedule
//  Description      : Displays exam timing based on division (case insensitive).
//  Input            : None
//  Output           : Prints exam timing
//  Time Complexity  : O(1)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void DisplaySchedule()
        {
            if(Ch == 'A' || Ch == 'a')
            {
                cout << "Your Exam at 7:00 AM\n";
            }
            else if(Ch == 'B' || Ch == 'b')
            {
                cout << "Your Exam at 8:30 AM\n";
            }
            else if(Ch == 'C' || Ch == 'c')
            {
                cout << "Your Exam at 9:20 AM\n";
            }
            else if(Ch == 'D' || Ch == 'd')
            {
                cout << "Your Exam at 10:30 AM\n";
            }
            else
            {
                cout << "Invalid Division\n";
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Division Exam Schedule using OOP
//  Description      : This application accepts division of student and displays exam timing.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    cout << "Enter Division : \n";
    cin >> cValue;

    Character cobj(cValue);

    cobj.DisplaySchedule();

    return 0;
}