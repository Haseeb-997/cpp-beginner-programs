#include <iostream>
using namespace std;

int main()
{
    bool a, b;
    cout << "Enter whether a is 1 or 0: ";
    cin >> a;
    cout << "Enter whether b is 1 or 0: ";
    cin >> b;
    if ((!(a ||  b)) == (!a && !b))
    {
        cout << "De Morgan's Law is valid";
    }
    return 0;
}