#include <iostream>
using namespace std;

int main()
{
    int month, day;
    cout << "Enter the month number: ";
    cin >> month;
    cout << "Enter the day number: ";
    cin >> day;
    if ((month >= 1) && (month <= 12) && (day >= 1) && (day <= 31))
    {
        if (((month == 12) && (day >= 16)) || (month < 3) || ((month == 3) && (day <= 15)))
        {
            cout << "\nThe season is \"Winter\"\n";
        }
        else if (((month == 3) && (day >= 16)) || (month < 6) || ((month == 6) && (day <= 15)))
        {
            cout << "\nThe season is \"Spring\"\n";
        }
        else if (((month == 6) && (day >= 16)) || (month < 9) || ((month == 9) && (day <= 15)))
        {
            cout << "\nThe season is \"Summer\"\n";
        }
        else if (((month == 9) && (day >= 16)) || (month < 12) || ((month == 12) && (day <= 15)))
        {
            cout << "\nThe season is \"Autumn\"\n";
        }
    }
    else
    {
        cout << "\nInvalid Input\n";
    }
    return 0;
}