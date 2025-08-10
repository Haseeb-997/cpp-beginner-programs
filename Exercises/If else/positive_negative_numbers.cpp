#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n > 0)
    {
        cout << "\n" << n << " is a positive number\n\n";
    }
    else if (n < 0)
    {
        cout << "\n" << n << " is a negative number\n\n";
    }
    else
    {
        cout << "\n" << n << " is neither positive nor negative number\n\n";
    }
    
    cout << "By \"Nested if else\":\n\n";

    int a;
    cout << "Enter the number: ";
    cin >> a;
    if (a >= 0)
    {
        if (a > 0)
        {
            cout << "\n" << a << " is a positive number\n\n";
        }
        else
        {
            cout << "\n" << a << " is neither positive nor negative number\n\n";
        }
    }
    else
    {
        cout << "\n" << a << " is a negative number\n\n";
    }

    system("pause");
    return 0;
}