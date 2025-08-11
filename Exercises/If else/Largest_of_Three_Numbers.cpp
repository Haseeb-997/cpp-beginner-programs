#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if ((a > b) && (a > c))
    {
        cout << endl << a << " is a largest number\n\n";
    }
    else if ((b > a) && (b > c))
    {
        cout << endl << b << " is a largest number\n\n";
    }
    else
    {
        cout << endl << c << " is a largest number\n\n";
    }

    cout << "By \"Nested if else\":\n\n";

    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    if (x > y)
    {
        if (x > z)
        {
            cout << endl << x << " is a largest number\n\n";
        }
        else
        {
            cout << endl << z << " is a largest number\n\n";
        }
    }
    else
    {
        if (y > z)
        {
            cout << endl << y << " is a largest number\n\n";
        }
        else
        {
            cout << endl << z << " is a largest number\n\n";
        }
    }

    system("pause");
    return 0;
}