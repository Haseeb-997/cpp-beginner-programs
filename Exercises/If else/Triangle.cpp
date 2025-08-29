#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    cout << left << setw(34) << "Enter the first side of triangle" << ": ";
    cin >> a;
    cout << left << setw(34) << "Enter the second side of triangle" << ": ";
    cin >> b;
    cout << left << setw(34) << "Enter the third side of triangle" << ": ";
    cin >> c;
    if (((a + b) > c) && ((b + c) > a) && ((c + a) > b))
    {
        cout << "Valid Triangle\n";
        if ((a == b) && (b == c))
        {
            cout << "Triangle formed from these sides is \"Equilateral\"\n";
        }
        if ((a != b) && (b != c) && (c != a))
        {
            cout << "Triangle formed from these sides is \"Scalene\"\n";
        }
        if ((((a == b) && (b != c))) || (((b == c) && (c != a))) || (((c == a) && (a != b))))
        {
            cout << "Triangle formed from these sides is \"Isoceles\"\n";
        }
    }
    else
    {
        cout << "Invalid Triangle\n";
    }
    return 0;
}