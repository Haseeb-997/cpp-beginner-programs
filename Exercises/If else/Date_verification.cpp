#include <iostream>
using namespace std;

int main()
{
    int month, day, year;
    cout << "Enter the month number: ";
    cin >> month;
    cout << "Enter the day number: ";
    cin >> day;
    cout << "Enter the year number: ";
    cin >> year;
    if ((month >= 1) && (month <= 12) && (year >= 1))
    {
        // Month is Feb or not
        if (month == 2)
        {
            // Leap year checking
            if (year % 4 == 0) // Then further check it...
            {
                if (year % 100 != 0) // It is a leap year
                {
                    if ((day >= 1) && (day <= 29))
                    {
                        cout << "Valid Date\n";
                    }
                    else
                    {
                        cout << "Invalid Date\n";
                    }
                }
                else if ((year % 100 == 0) && (year % 400 == 0)) // It is a leap year
                {
                    if ((day >= 1) && (day <= 29))
                    {
                        cout << "Valid Date\n";
                    }
                    else
                    {
                        cout << "Invalid Date\n";
                    }
                }
                else // It is not a leap year
                {
                    if ((day >= 1) && (day <= 28))
                    {
                        cout << "Valid Date\n";
                    }
                    else
                    {
                        cout << "Invalid Date\n";
                    }
                }
            }
            else // It is not a leap year
            {
                if ((day >= 1) && (day <= 28))
                {
                    cout << "Valid Date\n";
                }
                else
                {
                    cout << "Invalid Date\n";
                }
            }
        }
        else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
        {
            if ((day >= 1) && (day <= 31))
            {
                cout << "Valid Date\n";
            }
            else
            {
                cout << "Invalid Date\n";
            }
        }
        else
        {
            if ((day >= 1) && (day <= 30))
            {
                cout << "Valid Date\n";
            }
            else
            {
                cout << "Invalid Date\n";
            }
        }
    }
    else
    {
        cout << "Invalid Date\n";
    }

    return 0;
}